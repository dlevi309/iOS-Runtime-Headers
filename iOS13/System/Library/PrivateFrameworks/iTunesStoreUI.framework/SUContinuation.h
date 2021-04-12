/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUContinuationDelegate;
@interface SUContinuation : NSObject {

	id<SUContinuationDelegate> _delegate;

}

@property (assign,nonatomic) id<SUContinuationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SUContinuationDelegate>)delegate;
-(void)setDelegate:(id<SUContinuationDelegate>)arg1 ;
-(void)cancel;
-(void)start;
-(void)sendErrorToDelegate:(id)arg1 ;
-(void)sendFinishToDelegate;
@end

