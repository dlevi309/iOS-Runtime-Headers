/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBClientInheritanceManagerDelegate;
#import <RunningBoard/RunningBoard-Structs.h>
@class NSMutableSet;

@interface RBClientInheritanceManager : NSObject {

	NSMutableSet* _inheritances;
	NSMutableSet* _queuedGainedInheritances;
	NSMutableSet* _queuedLostInheritances;
	BOOL _awaitingAck;
	os_unfair_lock_s _lock;
	id<RBClientInheritanceManagerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<RBClientInheritanceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setInheritances:(id)arg1 ;
-(id<RBClientInheritanceManagerDelegate>)delegate;
-(id)description;
-(id)initWithInheritances:(id)arg1 delegate:(id)arg2 ;
@end

