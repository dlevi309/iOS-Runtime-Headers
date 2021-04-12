/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@class RBSProcessIdentity, RBProcessState;

@interface RBProcessStateChange : NSObject {

	RBSProcessIdentity* _identity;
	RBProcessState* _originalState;
	RBProcessState* _updatedState;

}

@property (nonatomic,readonly) RBSProcessIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) RBProcessState * originalState;              //@synthesize originalState=_originalState - In the implementation block
@property (nonatomic,readonly) RBProcessState * updatedState;               //@synthesize updatedState=_updatedState - In the implementation block
-(RBSProcessIdentity *)identity;
-(RBProcessState *)updatedState;
-(id)initWithIdentity:(id)arg1 originalState:(id)arg2 updatedState:(id)arg3 ;
-(RBProcessState *)originalState;
-(id)changeByApplyingChange:(id)arg1 ;
@end

