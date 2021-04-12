/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSProcessExecutionProvision.h>

@protocol OS_dispatch_queue;
@class NSObject, BSTimer, BSMachPortSendRight;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {

	SCD_Struct_FB7 _allowance;
	unsigned long long _baselineValue;
	unsigned long long _consumedValue;
	NSObject*<OS_dispatch_queue> _queue;
	BSTimer* _timer;
	BSMachPortSendRight* _taskRight;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) SCD_Struct_FB7 allowance;              //@synthesize allowance=_allowance - In the implementation block
+(id)provisionWithAllowance:(SCD_Struct_FB7)arg1 ;
+(id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(id)succinctDescriptionBuilder;
-(void)_beginMonitoring;
-(void)_updateProgress;
-(void)_stopMonitoring;
-(void)_prepareForReuse;
-(id)initWithAllowance:(SCD_Struct_FB7)arg1 ;
-(BOOL)_queue_updateConsumption;
-(double)_getElapsedCPUTimeForTaskPort:(unsigned)arg1 ;
-(void)_queue_noteAllowanceExhausted;
-(void)_queue_stopMonitoring;
-(void)_queue_evaluateConsumption;
-(BOOL)_queue_calculateValueConsumed:(out unsigned long long*)arg1 ;
-(BOOL)allowanceRemaining:(out SCD_Struct_FB7*)arg1 ;
-(BOOL)isResourceProvision;
-(SCD_Struct_FB7)allowance;
-(void)setAllowance:(SCD_Struct_FB7)arg1 ;
@end

