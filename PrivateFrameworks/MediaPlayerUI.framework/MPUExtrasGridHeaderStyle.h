/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class NSDictionary, NSString, UIColor;

@interface MPUExtrasGridHeaderStyle : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    double _bottomLabelDescender;
    } _insets;
    UIColor *_subtitleColor;
    NSDictionary *_subtitleDefaultFontAttributes;
    double _subtitleLineHeight;
    NSString *_subtitleTextStyle;
    UIColor *_titleColor;
    NSDictionary *_titleDefaultFontAttributes;
    double _titleLineHeight;
    NSString *_titleTextStyle;
    bool_showsImage;
}

@property double bottomLabelDescender;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property bool showsImage;
@property(retain) UIColor * subtitleColor;
@property(retain) NSDictionary * subtitleDefaultFontAttributes;
@property double subtitleLineHeight;
@property(retain) NSString * subtitleTextStyle;
@property(retain) UIColor * titleColor;
@property(retain) NSDictionary * titleDefaultFontAttributes;
@property double titleLineHeight;
@property(retain) NSString * titleTextStyle;

- (void).cxx_destruct;
- (double)bottomLabelDescender;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (void)setBottomLabelDescender:(double)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsImage:(bool)arg1;
- (void)setSubtitleColor:(id)arg1;
- (void)setSubtitleDefaultFontAttributes:(id)arg1;
- (void)setSubtitleLineHeight:(double)arg1;
- (void)setSubtitleTextStyle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleDefaultFontAttributes:(id)arg1;
- (void)setTitleLineHeight:(double)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (bool)showsImage;
- (id)subtitleColor;
- (id)subtitleDefaultFontAttributes;
- (double)subtitleLineHeight;
- (id)subtitleTextStyle;
- (id)titleColor;
- (id)titleDefaultFontAttributes;
- (double)titleLineHeight;
- (id)titleTextStyle;

@end