/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSUUID, HMBModelReference;

@interface HMDFaceprintModel : HMBModel

@property (copy) NSData * data; 
@property (copy) NSUUID * modelUUID; 
@property (retain) HMBModelReference * faceCrop; 
+(BOOL)hmbExcludeFromCloudStorage;
+(id)hmbProperties;
-(id)createFaceprint;
-(id)initWithFaceprint:(id)arg1 ;
@end

