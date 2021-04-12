/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, UIImage;

@interface HKSplashScreenItem : NSObject {

	NSString* _title;
	NSString* _fullDescription;
	UIImage* _icon;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * fullDescription;              //@synthesize fullDescription=_fullDescription - In the implementation block
@property (nonatomic,retain) UIImage * icon;                          //@synthesize icon=_icon - In the implementation block
+(id)splashScreenItemWithTitle:(id)arg1 icon:(id)arg2 fullDescription:(id)arg3 ;
+(id)splashScreenItemWithDictionary:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)fullDescription;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setFullDescription:(NSString *)arg1 ;
@end

