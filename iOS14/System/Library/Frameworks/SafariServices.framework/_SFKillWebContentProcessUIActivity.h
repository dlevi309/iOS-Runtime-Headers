/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivity.h>

@protocol _SFKillWebContentProcessUIActivityDelegate;
@interface _SFKillWebContentProcessUIActivity : _SFActivity {

	id<_SFKillWebContentProcessUIActivityDelegate> _webProcessDelegate;

}

@property (assign,nonatomic,__weak) id<_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate;              //@synthesize webProcessDelegate=_webProcessDelegate - In the implementation block
-(id)activityType;
-(void)performActivity;
-(id<_SFKillWebContentProcessUIActivityDelegate>)webProcessDelegate;
-(void)setWebProcessDelegate:(id<_SFKillWebContentProcessUIActivityDelegate>)arg1 ;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
@end

