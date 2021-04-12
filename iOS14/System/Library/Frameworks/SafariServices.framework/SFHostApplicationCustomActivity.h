/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)initWithActivityProxy:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
@end

