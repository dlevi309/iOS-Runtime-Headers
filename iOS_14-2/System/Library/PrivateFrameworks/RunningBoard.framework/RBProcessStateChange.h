/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)changeByApplyingChange:(id)arg1 ;
-(id)initWithIdentity:(id)arg1 originalState:(id)arg2 updatedState:(id)arg3 ;
-(RBProcessState *)originalState;
-(RBProcessState *)updatedState;
@end

