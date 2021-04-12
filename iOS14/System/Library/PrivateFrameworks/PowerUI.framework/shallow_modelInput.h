/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface shallow_modelInput : NSObject <MLFeatureProvider> {

	double _plugin_battery_level;
	double _battery_duration_1;
	double _battery_duration_2;
	double _battery_duration_3;
	double _battery_duration_4;

}

@property (assign,nonatomic) double plugin_battery_level;              //@synthesize plugin_battery_level=_plugin_battery_level - In the implementation block
@property (assign,nonatomic) double battery_duration_1;                //@synthesize battery_duration_1=_battery_duration_1 - In the implementation block
@property (assign,nonatomic) double battery_duration_2;                //@synthesize battery_duration_2=_battery_duration_2 - In the implementation block
@property (assign,nonatomic) double battery_duration_3;                //@synthesize battery_duration_3=_battery_duration_3 - In the implementation block
@property (assign,nonatomic) double battery_duration_4;                //@synthesize battery_duration_4=_battery_duration_4 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(double)plugin_battery_level;
-(void)setPlugin_battery_level:(double)arg1 ;
-(id)initWithPlugin_battery_level:(double)arg1 battery_duration_1:(double)arg2 battery_duration_2:(double)arg3 battery_duration_3:(double)arg4 battery_duration_4:(double)arg5 ;
-(double)battery_duration_1;
-(void)setBattery_duration_1:(double)arg1 ;
-(double)battery_duration_2;
-(void)setBattery_duration_2:(double)arg1 ;
-(double)battery_duration_3;
-(void)setBattery_duration_3:(double)arg1 ;
-(double)battery_duration_4;
-(void)setBattery_duration_4:(double)arg1 ;
@end

