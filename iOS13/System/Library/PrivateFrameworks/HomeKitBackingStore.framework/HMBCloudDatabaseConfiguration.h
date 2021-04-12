/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CKContainerID, NSString, CKOperationConfiguration, HMFScheduler;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _manateeContainer;
	CKContainerID* _containerID;
	NSString* _sourceApplicationBundleIdentifier;
	CKOperationConfiguration* _defaultOperationConfiguration;
	HMFScheduler* _apsRegistrationScheduler;

}

@property (getter=isManateeContainer) BOOL manateeContainer;                            //@synthesize manateeContainer=_manateeContainer - In the implementation block
@property (copy) CKOperationConfiguration * defaultOperationConfiguration;              //@synthesize defaultOperationConfiguration=_defaultOperationConfiguration - In the implementation block
@property (copy) NSString * sourceApplicationBundleIdentifier;                          //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) HMFScheduler * apsRegistrationScheduler;                   //@synthesize apsRegistrationScheduler=_apsRegistrationScheduler - In the implementation block
@property (copy,readonly) CKContainerID * containerID;                                  //@synthesize containerID=_containerID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKContainerID *)containerID;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(CKOperationConfiguration *)defaultOperationConfiguration;
-(id)attributeDescriptions;
-(BOOL)isManateeContainer;
-(void)setManateeContainer:(BOOL)arg1 ;
-(void)setDefaultOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(HMFScheduler *)apsRegistrationScheduler;
-(void)setApsRegistrationScheduler:(HMFScheduler *)arg1 ;
@end

