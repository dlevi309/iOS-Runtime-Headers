/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
*/

#import <AppConduit/AppConduit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError, NSString;

@interface ACXApplicationStatus : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _installStatus;
	NSError* _lastInstallationError;
	NSString* _uniqueInstallID;
	long long _watchKitCompatibility;
	unsigned long long _architectureCompatibility;

}

@property (assign,nonatomic) unsigned long long installStatus;                          //@synthesize installStatus=_installStatus - In the implementation block
@property (nonatomic,retain) NSError * lastInstallationError;                           //@synthesize lastInstallationError=_lastInstallationError - In the implementation block
@property (nonatomic,copy) NSString * uniqueInstallID;                                  //@synthesize uniqueInstallID=_uniqueInstallID - In the implementation block
@property (assign,nonatomic) long long watchKitCompatibility;                           //@synthesize watchKitCompatibility=_watchKitCompatibility - In the implementation block
@property (assign,nonatomic) unsigned long long architectureCompatibility;              //@synthesize architectureCompatibility=_architectureCompatibility - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)installStatus;
-(void)setInstallStatus:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)lastInstallationError;
-(NSString *)uniqueInstallID;
-(long long)watchKitCompatibility;
-(unsigned long long)architectureCompatibility;
-(void)setInstallStatusWithGizmoStatus:(unsigned long long)arg1 ;
-(void)setLastInstallationError:(NSError *)arg1 ;
-(void)setUniqueInstallID:(NSString *)arg1 ;
-(void)setWatchKitCompatibility:(long long)arg1 ;
-(void)setArchitectureCompatibility:(unsigned long long)arg1 ;
@end

