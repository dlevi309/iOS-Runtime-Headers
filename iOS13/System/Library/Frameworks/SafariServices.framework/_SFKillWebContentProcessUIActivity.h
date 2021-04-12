/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivity.h>

@protocol _SFKillWebContentProcessUIActivityDelegate;
@interface _SFKillWebContentProcessUIActivity : _SFActivity {

	id<_SFKillWebContentProcessUIActivityDelegate> _webProcessDelegate;

}

@property (assign,nonatomic,__weak) id<_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate;              //@synthesize webProcessDelegate=_webProcessDelegate - In the implementation block
-(id)activityType;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id<_SFKillWebContentProcessUIActivityDelegate>)webProcessDelegate;
-(void)setWebProcessDelegate:(id<_SFKillWebContentProcessUIActivityDelegate>)arg1 ;
@end

