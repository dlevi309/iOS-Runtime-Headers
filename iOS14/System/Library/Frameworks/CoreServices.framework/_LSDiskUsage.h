/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSNumber;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSMutableDictionary* _usage;
	id _validationToken;

}

@property (nonatomic,readonly) NSNumber * staticUsage; 
@property (nonatomic,readonly) NSNumber * dynamicUsage; 
@property (nonatomic,readonly) NSNumber * onDemandResourcesUsage; 
@property (nonatomic,readonly) NSNumber * sharedUsage; 
+(BOOL)supportsSecureCoding;
+(id)usageFromMobileInstallationForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)ODRConnection;
+(id)propertyQueue;
+(id)_serverQueue;
+(id)mobileInstallationQueue;
+(id)ODRUsageForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)sharedUsage;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)fetchServerSideWithConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeAllCachedUsageValues;
-(NSNumber *)onDemandResourcesUsage;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 validationToken:(id)arg3 ;
-(BOOL)fetchClientSideWithError:(id*)arg1 ;
-(NSNumber *)staticUsage;
-(BOOL)_fetchWithXPCConnection:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)dynamicUsage;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

