/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setDefaultOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(CKContainerID *)containerID;
-(CKOperationConfiguration *)defaultOperationConfiguration;
-(void)setApsRegistrationScheduler:(HMFScheduler *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(void)setManateeContainer:(BOOL)arg1 ;
-(BOOL)isManateeContainer;
-(id)initWithContainerID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMFScheduler *)apsRegistrationScheduler;
@end

