/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class NSString, NSHashTable, NSData, NSURL, NSArray;

@interface HMDApplicationInfo : HMFObject <HMFLogging> {

	NSString* _bundleIdentifier;
	BOOL _independent;
	id<HMFLocking> _lock;
	NSHashTable* _processes;
	HMDApplicationInfo* _companionApplicationInfo;

}

@property (getter=isIndependent,readonly) BOOL independent;                                //@synthesize independent=_independent - In the implementation block
@property (readonly) HMDApplicationInfo * companionApplicationInfo;                        //@synthesize companionApplicationInfo=_companionApplicationInfo - In the implementation block
@property (copy,readonly) NSData * vendorIdentifier; 
@property (getter=isInstalled,readonly) BOOL installed; 
@property (getter=isEntitledForAPIAccess,readonly) BOOL entitledForAPIAccess; 
@property (getter=isEntitledForSPIAccess,readonly) BOOL entitledForSPIAccess; 
@property (copy,readonly) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSURL * bundleURL; 
@property (readonly) HMDApplicationInfo * hostApplicationInfo; 
@property (copy,readonly) NSArray * processes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)applicationInfoForBundleIdentifier:(id)arg1 ;
+(id)privateVendorIdentifier;
+(id)applicationInfoForBundleURL:(id)arg1 ;
-(NSURL *)bundleURL;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(NSArray *)processes;
-(NSString *)bundleIdentifier;
-(id)shortDescription;
-(BOOL)isInstalled;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(void)addProcess:(id)arg1 ;
-(NSData *)vendorIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeProcess:(id)arg1 ;
-(BOOL)isEntitledForSPIAccess;
-(BOOL)isEntitledForAPIAccess;
-(HMDApplicationInfo *)hostApplicationInfo;
-(id)clientIdentifierSalt:(id*)arg1 ;
-(BOOL)isIndependent;
-(HMDApplicationInfo *)companionApplicationInfo;
@end

