/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


#import <AppPredictionClient/AppPredictionClient-Structs.h>
@class NSDate;

@interface ATXActionCriteriaWorldState : NSObject {

	BOOL _fake;
	NSDate* _now;
	struct {
		unsigned doNotDisturb : 1;
		unsigned telephonyCapability : 1;
		unsigned airDropCapability : 1;
		unsigned airplaneMode : 1;
		unsigned coreRoutineCapability : 1;
		unsigned greenTeaDeviceCapability : 1;
		unsigned internalBuild : 1;
		unsigned lockScreen : 1;
	}  _flags;
	SCD_Struct_AT4 _have;

}

@property (nonatomic,copy) NSDate * now; 
@property (assign,nonatomic) BOOL doNotDisturb; 
@property (assign,nonatomic) BOOL telephonyCapability; 
@property (assign,nonatomic) BOOL airDropCapability; 
@property (assign,nonatomic) BOOL airplaneMode; 
@property (assign,nonatomic) BOOL coreRoutineCapability; 
@property (assign,nonatomic) BOOL greenTeaDeviceCapability; 
@property (assign,nonatomic) BOOL internalBuild; 
@property (assign,nonatomic) BOOL lockScreen; 
-(NSDate *)now;
-(BOOL)airplaneMode;
-(BOOL)internalBuild;
-(id)initFake;
-(id)init;
-(void)setLockScreen:(BOOL)arg1 ;
-(BOOL)airDropCapability;
-(BOOL)telephonyCapability;
-(void)setTelephonyCapability:(BOOL)arg1 ;
-(void)setGreenTeaDeviceCapability:(BOOL)arg1 ;
-(void)setDoNotDisturb:(BOOL)arg1 ;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(BOOL)lockScreen;
-(BOOL)doNotDisturb;
-(id)propertyWhitelist;
-(void)setNow:(NSDate *)arg1 ;
-(BOOL)greenTeaDeviceCapability;
-(void)setCoreRoutineCapability:(BOOL)arg1 ;
-(void)setAirDropCapability:(BOOL)arg1 ;
-(void)setInternalBuild:(BOOL)arg1 ;
-(BOOL)coreRoutineCapability;
@end

