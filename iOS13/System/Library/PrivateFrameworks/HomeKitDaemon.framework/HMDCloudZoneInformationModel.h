/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject {

	BOOL _requiresHomeManagerUpdate;

}

@property (nonatomic,retain) NSString * ownerName; 
@property (assign,nonatomic) BOOL requiresHomeManagerUpdate;              //@synthesize requiresHomeManagerUpdate=_requiresHomeManagerUpdate - In the implementation block
+(id)properties;
-(id)dependentUUIDs;
-(BOOL)requiresHomeManagerUpdate;
-(void)setRequiresHomeManagerUpdate:(BOOL)arg1 ;
@end

