/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@class UIImage, NSString;

@interface HROnboardingBulletPoint : NSObject {

	UIImage* _bulletImage;
	NSString* _bulletTitleString;
	NSString* _bulletBodyString;

}

@property (nonatomic,readonly) UIImage * bulletImage;                     //@synthesize bulletImage=_bulletImage - In the implementation block
@property (nonatomic,readonly) NSString * bulletTitleString;              //@synthesize bulletTitleString=_bulletTitleString - In the implementation block
@property (nonatomic,readonly) NSString * bulletBodyString;               //@synthesize bulletBodyString=_bulletBodyString - In the implementation block
+(id)bulletPointWithImage:(id)arg1 title:(id)arg2 body:(id)arg3 ;
-(UIImage *)bulletImage;
-(id)initWithImage:(id)arg1 title:(id)arg2 body:(id)arg3 ;
-(NSString *)bulletTitleString;
-(NSString *)bulletBodyString;
@end

