/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)fullDescription;
-(NSString *)title;
-(void)setFullDescription:(NSString *)arg1 ;
@end

