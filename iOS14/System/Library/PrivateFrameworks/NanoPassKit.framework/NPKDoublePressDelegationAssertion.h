/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKTransientAssertion.h>

@protocol NPKDoublePressDelegationAssertionDelegate;
@interface NPKDoublePressDelegationAssertion : NPKTransientAssertion {

	id<NPKDoublePressDelegationAssertionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NPKDoublePressDelegationAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(id<NPKDoublePressDelegationAssertionDelegate>)delegate;
-(void)setDelegate:(id<NPKDoublePressDelegationAssertionDelegate>)arg1 ;
-(void)handleDelegatedDoublePressEvent;
-(void)_resyncState;
@end

