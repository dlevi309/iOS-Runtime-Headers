/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@protocol EMRemoteConnectionRecoveryAssertionDelegate;
#import <Email/Email-Structs.h>
@interface EMRemoteConnectionRecoveryAssertion : NSObject {

	os_unfair_lock_s _lock;
	id<EMRemoteConnectionRecoveryAssertionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EMRemoteConnectionRecoveryAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(id<EMRemoteConnectionRecoveryAssertionDelegate>)delegate;
-(void)setDelegate:(id<EMRemoteConnectionRecoveryAssertionDelegate>)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

