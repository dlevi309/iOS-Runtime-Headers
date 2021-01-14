/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUContinuationDelegate;
@interface SUContinuation : NSObject {

	id<SUContinuationDelegate> _delegate;

}

@property (assign,nonatomic) id<SUContinuationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SUContinuationDelegate>)delegate;
-(void)start;
-(void)setDelegate:(id<SUContinuationDelegate>)arg1 ;
-(void)cancel;
-(void)sendErrorToDelegate:(id)arg1 ;
-(void)sendFinishToDelegate;
@end

