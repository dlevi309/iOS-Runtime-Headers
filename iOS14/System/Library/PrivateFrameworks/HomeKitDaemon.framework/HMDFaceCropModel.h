/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate, HMBModelCloudReference, NSUUID;

@interface HMDFaceCropModel : HMBModel

@property (retain) NSData * faceBoundingBoxData; 
@property (retain) NSData * dataRepresentation; 
@property (retain) NSDate * dateCreated; 
@property (assign) CGRect faceBoundingBox; 
@property (retain) HMBModelCloudReference * person; 
@property (retain) NSUUID * unassociatedFaceCropUUID; 
+(id)hmbProperties;
+(id)hmbQueries;
+(id)faceCropsForPersonQuery;
+(id)faceCropsForAnyPersonQuery;
+(id)faceCropsForNoPersonQuery;
+(id)faceCropsWithUnassociatedFaceCropUUIDQuery;
+(id)sentinelParentUUID;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(CGRect)faceBoundingBox;
-(id)initWithPersonFaceCrop:(id)arg1 ;
-(id)createFaceCrop;
-(id)createPersonFaceCrop;
@end

