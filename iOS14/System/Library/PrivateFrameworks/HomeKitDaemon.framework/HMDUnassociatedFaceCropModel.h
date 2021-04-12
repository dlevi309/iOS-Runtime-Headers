/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate;

@interface HMDUnassociatedFaceCropModel : HMBModel

@property (retain) NSData * faceBoundingBoxData; 
@property (retain) NSData * dataRepresentation; 
@property (retain) NSDate * dateCreated; 
@property (assign) CGRect faceBoundingBox; 
+(id)hmbExternalRecordType;
+(id)hmbProperties;
+(id)hmbQueries;
+(id)sentinelParentUUID;
+(id)unassociatedFaceCropsBetweenDatesQueryWithIsAscending:(BOOL)arg1 ;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(CGRect)faceBoundingBox;
-(id)createFaceCrop;
-(id)initWithFaceCrop:(id)arg1 ;
@end

