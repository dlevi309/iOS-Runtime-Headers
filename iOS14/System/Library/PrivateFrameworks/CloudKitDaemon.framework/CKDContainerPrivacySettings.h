/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject {

	CKContainerID* _containerID;
	NSSet* _applicationBundleIDs;
	long long _discoverable;

}

@property (nonatomic,copy) CKContainerID * containerID;               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSSet * applicationBundleIDs;              //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) long long discoverable;                  //@synthesize discoverable=_discoverable - In the implementation block
-(CKContainerID *)containerID;
-(id)CKPropertiesDescription;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(long long)discoverable;
-(id)description;
-(unsigned long long)hash;
-(NSSet *)applicationBundleIDs;
-(void)setApplicationBundleIDs:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDiscoverable:(long long)arg1 ;
@end

