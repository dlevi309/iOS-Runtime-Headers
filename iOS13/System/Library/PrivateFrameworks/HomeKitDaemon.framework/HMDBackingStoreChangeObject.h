/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

