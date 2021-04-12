/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)propertyQueue;
+(id)_serverQueue;
+(id)mobileInstallationQueue;
+(id)ODRConnection;
+(id)usageFromMobileInstallationForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)ODRUsageForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 validationToken:(id)arg3 ;
-(NSNumber *)staticUsage;
-(NSNumber *)dynamicUsage;
-(NSNumber *)onDemandResourcesUsage;
-(BOOL)_fetchWithXPCConnection:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)sharedUsage;
-(void)removeAllCachedUsageValues;
-(BOOL)fetchServerSideWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)fetchClientSideWithError:(id*)arg1 ;
@end

