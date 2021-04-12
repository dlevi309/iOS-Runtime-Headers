/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_xpc_object;
@class NSObject;

@interface _DECScheduler : NSObject {

	NSObject*<OS_xpc_object> _executionCriteria;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)forceRun;
-(id)initWithActivityIdentifier:(id)arg1 andExecutionCriteria:(id)arg2 ;
@end

