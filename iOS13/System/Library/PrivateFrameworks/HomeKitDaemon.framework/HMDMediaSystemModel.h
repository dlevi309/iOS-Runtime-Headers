/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)modelWithMessage:(id)arg1 home:(id)arg2 changetype:(unsigned long long)arg3 outError:(id*)arg4 ;
-(id)dependentUUIDs;
@end

