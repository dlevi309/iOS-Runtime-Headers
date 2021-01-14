/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

