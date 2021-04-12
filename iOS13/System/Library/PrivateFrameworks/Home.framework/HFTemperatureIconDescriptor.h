/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString;

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _shouldForceLTR;
	NSString* _formattedTemperature;
	long long _heatingCoolingMode;
	long long _targetHeatingCoolingMode;

}

@property (nonatomic,readonly) NSString * formattedTemperature;                 //@synthesize formattedTemperature=_formattedTemperature - In the implementation block
@property (nonatomic,readonly) long long heatingCoolingMode;                    //@synthesize heatingCoolingMode=_heatingCoolingMode - In the implementation block
@property (nonatomic,readonly) long long targetHeatingCoolingMode;              //@synthesize targetHeatingCoolingMode=_targetHeatingCoolingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL shouldForceLTR;                             //@synthesize shouldForceLTR=_shouldForceLTR - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)shouldForceLTR;
-(NSString *)formattedTemperature;
-(long long)heatingCoolingMode;
-(id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3 ;
-(long long)targetHeatingCoolingMode;
@end

