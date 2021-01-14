/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <ShareSheet/UIActivity.h>

@protocol _SFActivityDelegate;
@interface _SFActivity : UIActivity {

	id<_SFActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_SFActivityDelegate>)delegate;
-(void)setDelegate:(id<_SFActivityDelegate>)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
@end

