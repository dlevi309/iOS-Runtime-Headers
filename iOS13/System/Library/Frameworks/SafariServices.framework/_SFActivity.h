/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

