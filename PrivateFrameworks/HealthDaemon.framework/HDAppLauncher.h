/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAppLauncher : NSObject {
    BKSSystemService *_bksSystemService;
    NSMutableDictionary *_clientByBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, retain) BKSSystemService *bksSystemService;
@property (nonatomic, retain) NSMutableDictionary *clientByBundleIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_queue_attemptRelaunchClient:(id)arg1 forSeconds:(double)arg2 retries:(int)arg3;
- (void)_queue_cleanUpClients;
- (id)bksSystemService;
- (id)clientByBundleIdentifier;
- (id)init;
- (void)processInvalidated:(id)arg1;
- (id)queue;
- (void)registerIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setBksSystemService:(id)arg1;
- (void)setClientByBundleIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterIdentifier:(id)arg1 forClientBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
