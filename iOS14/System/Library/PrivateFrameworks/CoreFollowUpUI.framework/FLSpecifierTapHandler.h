/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/


@protocol FLSpecifierTapHandlerDelegate;
@interface FLSpecifierTapHandler : NSObject {

	id<FLSpecifierTapHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FLSpecifierTapHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FLSpecifierTapHandlerDelegate>)delegate;
-(void)setDelegate:(id<FLSpecifierTapHandlerDelegate>)arg1 ;
-(id)description;
-(void)startSpinnerForSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)_handleActionForItem:(id)arg1 fromSpecifier:(id)arg2 eventSource:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)stopSpinnerForSpecifier:(id)arg1 ;
-(void)actionTapped:(id)arg1 eventSource:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

