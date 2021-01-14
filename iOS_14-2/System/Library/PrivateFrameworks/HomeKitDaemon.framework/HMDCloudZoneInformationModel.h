/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

