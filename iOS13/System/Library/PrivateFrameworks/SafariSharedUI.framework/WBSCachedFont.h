/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class UIFont;

@interface WBSCachedFont : NSObject {

	UIFont* _font;
	double _size;
	long long _fontWeight;

}

@property (nonatomic,retain) UIFont * font;                     //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double size;                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long fontWeight;              //@synthesize fontWeight=_fontWeight - In the implementation block
-(double)size;
-(void)setSize:(double)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setFontWeight:(long long)arg1 ;
-(long long)fontWeight;
@end

