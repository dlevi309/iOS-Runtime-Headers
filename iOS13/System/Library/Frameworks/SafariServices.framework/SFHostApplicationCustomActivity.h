/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivity.h>

@class SFCustomActivityProxy;

@interface SFHostApplicationCustomActivity : _SFActivity {

	SFCustomActivityProxy* _activityProxy;

}

@property (nonatomic,readonly) SFCustomActivityProxy * activityProxy;              //@synthesize activityProxy=_activityProxy - In the implementation block
-(id)activityType;
-(SFCustomActivityProxy *)activityProxy;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)initWithActivityProxy:(id)arg1 ;
@end

