/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCDeviceOps.h>

@class NSArray;

@interface MLCANEDeviceOps : MLCDeviceOps {

	int _deviceOpType;
	NSArray* _units;
	id _params;

}

@property (nonatomic,readonly) int deviceOpType;              //@synthesize deviceOpType=_deviceOpType - In the implementation block
@property (nonatomic,retain) NSArray * units;                 //@synthesize units=_units - In the implementation block
@property (nonatomic,retain,readonly) id params;              //@synthesize params=_params - In the implementation block
+(id)deviceOpsWithType:(int)arg1 params:(id)arg2 ;
-(NSArray *)units;
-(void)setUnits:(NSArray *)arg1 ;
-(id)params;
-(int)deviceOpType;
-(id)initWithType:(int)arg1 params:(id)arg2 ;
@end

