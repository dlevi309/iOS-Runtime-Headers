/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBUIAnimationControllerCoordinating;
@class BSTransaction;

@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject {

	BSTransaction*<SBUIAnimationControllerCoordinating> _coordinatingChildTransaction;
	unsigned long long _schedulingPolicy;

}

@property (nonatomic,readonly) BSTransaction*<SBUIAnimationControllerCoordinating> coordinatingChildTransaction;              //@synthesize coordinatingChildTransaction=_coordinatingChildTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long schedulingPolicy;                                                           //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
-(unsigned long long)schedulingPolicy;
-(id)initWithCoordinatingChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2 ;
-(BSTransaction*<SBUIAnimationControllerCoordinating>)coordinatingChildTransaction;
@end

