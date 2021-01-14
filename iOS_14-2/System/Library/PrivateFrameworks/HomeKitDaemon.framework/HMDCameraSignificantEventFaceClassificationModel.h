/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel

@property (retain) NSUUID * personManagerUUID; 
@property (retain) NSUUID * personUUID; 
@property (retain) NSString * personName; 
@property (retain) NSUUID * unassociatedFaceCropUUID; 
+(id)hmbExternalRecordType;
+(id)hmbProperties;
-(id)createFaceClassification;
@end

