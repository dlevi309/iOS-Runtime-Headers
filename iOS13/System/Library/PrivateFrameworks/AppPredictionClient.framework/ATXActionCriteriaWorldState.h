/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AT1 _have;

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
-(id)init;
-(NSDate *)now;
-(BOOL)airplaneMode;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(BOOL)internalBuild;
-(void)setInternalBuild:(BOOL)arg1 ;
-(id)propertyWhitelist;
-(BOOL)lockScreen;
-(id)initFake;
-(void)setNow:(NSDate *)arg1 ;
-(BOOL)doNotDisturb;
-(void)setDoNotDisturb:(BOOL)arg1 ;
-(BOOL)telephonyCapability;
-(void)setTelephonyCapability:(BOOL)arg1 ;
-(BOOL)airDropCapability;
-(void)setAirDropCapability:(BOOL)arg1 ;
-(BOOL)coreRoutineCapability;
-(void)setCoreRoutineCapability:(BOOL)arg1 ;
-(BOOL)greenTeaDeviceCapability;
-(void)setGreenTeaDeviceCapability:(BOOL)arg1 ;
-(void)setLockScreen:(BOOL)arg1 ;
@end

