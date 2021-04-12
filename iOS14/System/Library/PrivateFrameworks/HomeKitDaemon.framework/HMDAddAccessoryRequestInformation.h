/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HMAccessoryCategory, HMDAccessory, HMSetupAccessoryDescription, NSUUID, HMFTimer;

@interface HMDAddAccessoryRequestInformation : NSObject <NSSecureCoding> {

	NSString* _bundleID;
	NSString* _accessoryName;
	HMAccessoryCategory* _accessoryCategory;
	HMDAccessory* _accessory;
	HMSetupAccessoryDescription* _accessoryDescription;
	NSUUID* _identifier;
	HMFTimer* _cleanupTimer;

}

@property (nonatomic,readonly) NSString * bundleID;                                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * accessoryName;                                        //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * accessoryCategory;                         //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                 //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMSetupAccessoryDescription * accessoryDescription;              //@synthesize accessoryDescription=_accessoryDescription - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFTimer * cleanupTimer;                                         //@synthesize cleanupTimer=_cleanupTimer - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accessoryName;
-(HMSetupAccessoryDescription *)accessoryDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDAccessory *)accessory;
-(HMAccessoryCategory *)accessoryCategory;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithAccessoryName:(id)arg1 category:(id)arg2 bundleID:(id)arg3 accessoryDescription:(id)arg4 ;
-(void)cancelCleanupTimer;
-(void)storeIdentifierFromUnassociatedAccessory:(id)arg1 setupCode:(id)arg2 ;
-(void)startCleanupTimerForDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(HMFTimer *)cleanupTimer;
@end

