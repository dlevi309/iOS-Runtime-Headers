/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol RBClientInheritanceManagerDelegate;
@class NSMutableSet, NSString;

@interface RBClientInheritanceManager : NSObject <BSDescriptionProviding> {

	NSMutableSet* _inheritances;
	NSMutableSet* _queuedGainedInheritances;
	NSMutableSet* _queuedLostInheritances;
	BOOL _awaitingAck;
	os_unfair_lock_s _lock;
	id<RBClientInheritanceManagerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<RBClientInheritanceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id<RBClientInheritanceManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInheritances:(id)arg1 ;
-(void)_lock_sendQueuedInheritances;
@end

