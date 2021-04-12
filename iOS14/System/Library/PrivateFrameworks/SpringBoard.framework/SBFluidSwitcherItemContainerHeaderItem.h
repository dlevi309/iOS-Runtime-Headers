/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, UIColor;

@interface SBFluidSwitcherItemContainerHeaderItem : NSObject <NSCopying> {

	NSString* _titleText;
	NSString* _subtitleText;
	UIImage* _image;
	UIColor* _titleTextColor;
	long long _subtitleInterfaceStyle;

}

@property (nonatomic,copy) NSString * titleText;                            //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                         //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                      //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (assign,nonatomic) long long subtitleInterfaceStyle;              //@synthesize subtitleInterfaceStyle=_subtitleInterfaceStyle - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)titleText;
-(UIImage *)image;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(long long)subtitleInterfaceStyle;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitleInterfaceStyle:(long long)arg1 ;
@end

