/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/


@protocol FLSpecifierTapHandlerDelegate;
@interface FLSpecifierTapHandler : NSObject {

	id<FLSpecifierTapHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FLSpecifierTapHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(id<FLSpecifierTapHandlerDelegate>)delegate;
-(void)setDelegate:(id<FLSpecifierTapHandlerDelegate>)arg1 ;
-(void)startSpinnerForSpecifier:(id)arg1 ;
-(void)_handleActionForItem:(id)arg1 fromSpecifier:(id)arg2 eventSource:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)stopSpinnerForSpecifier:(id)arg1 ;
-(void)actionTapped:(id)arg1 eventSource:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

