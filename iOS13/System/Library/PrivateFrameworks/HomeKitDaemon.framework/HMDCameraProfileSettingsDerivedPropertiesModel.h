/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate;

@interface HMDCameraProfileSettingsDerivedPropertiesModel : HMBModel

@property (retain) NSNumber * currentAccessModeField; 
@property (retain) NSNumber * currentAccessModeChangeReasonField; 
@property (retain) NSDate * currentAccessModeChangeDate; 
@property (assign) unsigned long long currentAccessMode; 
@property (assign) unsigned long long currentAccessModeChangeReason; 
+(id)hmbProperties;
-(unsigned long long)currentAccessMode;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setCurrentAccessModeChangeReason:(unsigned long long)arg1 ;
-(unsigned long long)currentAccessModeChangeReason;
@end

