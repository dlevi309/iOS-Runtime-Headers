/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSDictionary, NSData;

@interface HMDHAPMetadataModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSNumber * metadataVersion; 
@property (nonatomic,retain) NSNumber * schemaVersion; 
@property (nonatomic,retain) NSDictionary * rawPlist; 
@property (nonatomic,retain) NSData * legacyIDSData; 
@property (nonatomic,retain) NSData * legacyCloudData; 
+(id)properties;
+(id)allowedTypes;
+(id)metadataModelObjectUUID;
+(id)modelWithDictionary:(id)arg1 ;
-(id)metadataDictionary;
@end

