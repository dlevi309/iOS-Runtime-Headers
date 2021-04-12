/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <ShareSheet/UIActivity.h>

@protocol ICPaperStyleUIActivityDelegate;
@interface ICPaperStyleUIActivity : UIActivity {

	id<ICPaperStyleUIActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICPaperStyleUIActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ICPaperStyleUIActivityDelegate>)delegate;
-(void)setDelegate:(id<ICPaperStyleUIActivityDelegate>)arg1 ;
-(id)activityType;
-(id)initWithDelegate:(id)arg1 ;
-(id)_systemImageName;
-(long long)activityCategory;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
@end

