/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject;

@interface CBABCurve : NSObject {

	SCD_Struct_CB10 pref;
	float currentLux;
	float mappedBrightness;
	NSObject*<OS_os_log> _logHandle;
	unsigned long long _version;

}

@property (readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)version;
-(id)initWithUUID:(id)arg1 ;
-(unsigned long long)getVersion;
-(BOOL)setLux:(float)arg1 ;
-(float)getLinearBrightness;
-(void)updateALSParametersForDisplayBrightness:(float)arg1 ;
-(void)resetToDefaultState;
-(id)copyUserPrefState;
-(void)setSavedPrefences:(id)arg1 ;
@end

