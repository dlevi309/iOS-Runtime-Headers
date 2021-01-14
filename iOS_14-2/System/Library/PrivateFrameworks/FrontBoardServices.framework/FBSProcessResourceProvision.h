/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSProcessExecutionProvision.h>

@protocol OS_dispatch_queue;
@class NSObject, BSTimer, RBSProcessHandle;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {

	SCD_Struct_FB7 _allowance;
	unsigned long long _baselineValue;
	unsigned long long _consumedValue;
	NSObject*<OS_dispatch_queue> _queue;
	BSTimer* _timer;
	RBSProcessHandle* _processHandle;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) SCD_Struct_FB7 allowance;              //@synthesize allowance=_allowance - In the implementation block
+(id)provisionWithAllowance:(SCD_Struct_FB7)arg1 ;
+(id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2 ;
-(void)_updateProgress;
-(void)_stopMonitoring;
-(void)_queue_noteAllowanceExhausted;
-(void)_beginMonitoring;
-(SCD_Struct_FB7)allowance;
-(void)_prepareForReuse;
-(BOOL)allowanceRemaining:(out SCD_Struct_FB7*)arg1 ;
-(BOOL)isResourceProvision;
-(BOOL)_queue_calculateValueConsumed:(out unsigned long long*)arg1 ;
-(BOOL)_queue_updateConsumption;
-(long long)type;
-(void)_queue_stopMonitoring;
-(void)_queue_evaluateConsumption;
-(id)initWithAllowance:(SCD_Struct_FB7)arg1 ;
-(void)setAllowance:(SCD_Struct_FB7)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

