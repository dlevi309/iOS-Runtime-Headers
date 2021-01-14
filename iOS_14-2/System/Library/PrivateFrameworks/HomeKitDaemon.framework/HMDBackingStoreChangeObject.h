/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class HMDBackingStoreModelObject, NSSet;


@protocol HMDBackingStoreChangeObject <NSObject>
@property (nonatomic,readonly) HMDBackingStoreModelObject * change; 
@property (nonatomic,readonly) NSSet * dependentUUIDs; 
@required
-(HMDBackingStoreModelObject *)change;
-(NSSet *)dependentUUIDs;

@end

