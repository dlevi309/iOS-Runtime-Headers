/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont;

@interface HUNavigationButtonLayoutOptions : NSObject <NSCopying> {

	UIFont* _font;
	double _minTextButtonWidth;

}

@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double minTextButtonWidth;              //@synthesize minTextButtonWidth=_minTextButtonWidth - In the implementation block
+(id)defaultOptionsForViewSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setMinTextButtonWidth:(double)arg1 ;
-(double)minTextButtonWidth;
@end

