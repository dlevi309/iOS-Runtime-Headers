/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithCoordinatingChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2 ;
-(unsigned long long)schedulingPolicy;
-(BSTransaction*<SBUIAnimationControllerCoordinating>)coordinatingChildTransaction;
@end

