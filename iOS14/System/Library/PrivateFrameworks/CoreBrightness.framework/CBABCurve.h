/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject;

@interface CBABCurve : NSObject {

	SCD_Struct_CB11 pref;
	float currentLux;
	float mappedBrightness;
	NSObject*<OS_os_log> _logHandle;
	float _scaleFactor;
	unsigned long long _version;

}

@property (readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (assign) float scaleFactor;                         //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(void)setScaleFactor:(float)arg1 ;
-(float)scaleFactor;
-(id)init;
-(id)description;
-(BOOL)setLux:(float)arg1 ;
-(void)resetToDefaultState;
-(unsigned long long)version;
-(id)initWithUUID:(id)arg1 ;
-(unsigned long long)getVersion;
-(float)getScaledBL2;
-(float)getScaledBL1;
-(void)setScaledBL2:(float)arg1 ;
-(void)setScaledBL1:(float)arg1 ;
-(void)setLinearBrightnessMin:(float)arg1 andMax:(float)arg2 ;
-(float)getLinearBrightness;
-(void)updateALSParametersForDisplayBrightness:(float)arg1 ;
-(id)copyUserPrefState;
-(void)setSavedPrefences:(id)arg1 ;
@end

