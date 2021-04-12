/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSArray, NSData;

@interface HMDMediaSystemModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,copy) NSString * configuredName; 
@property (nonatomic,copy) NSArray * mediaSystemComponents; 
@property (nonatomic,retain) NSData * symptoms; 
+(id)properties;
+(id)schemaHashRoot;
-(id)dependentUUIDs;
@end

