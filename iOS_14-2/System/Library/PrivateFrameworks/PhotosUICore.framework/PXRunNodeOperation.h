/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <Foundation/NSOperation.h>

@class PXRunNode, NSLock;

@interface PXRunNodeOperation : NSOperation {

	unsigned long long _state;
	PXRunNode* _runNode;
	NSLock* __stateLock;

}

@property (nonatomic,readonly) NSLock * _stateLock;              //@synthesize _stateLock=__stateLock - In the implementation block
@property (nonatomic,readonly) PXRunNode * runNode;              //@synthesize runNode=_runNode - In the implementation block
@property (readonly) unsigned long long state;                   //@synthesize state=_state - In the implementation block
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(PXRunNode *)runNode;
-(BOOL)isFinished;
-(NSLock *)_stateLock;
-(BOOL)isReady;
-(id)initWithRunNode:(id)arg1 ;
-(BOOL)cancelIfAble;
-(BOOL)completeIfAble;
-(BOOL)isExecuting;
-(unsigned long long)state;
-(BOOL)_transitionToState:(unsigned long long)arg1 ;
@end

