/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
*/

#import <MobileInstallation/MobileInstallation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSError;

@interface MIBundleMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _installDate;
	NSString* _installBuildVersion;
	unsigned long long _installType;
	unsigned long long _placeholderFailureReason;
	NSError* _placeholderFailureUnderlyingError;
	unsigned long long _placeholderFailureUnderlyingErrorSource;
	NSString* _watchKitAppExecutableHash;
	unsigned long long _autoInstallOverride;

}

@property (nonatomic,copy) NSDate * installDate;                                                      //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,copy) NSString * installBuildVersion;                                            //@synthesize installBuildVersion=_installBuildVersion - In the implementation block
@property (assign,nonatomic) unsigned long long installType;                                          //@synthesize installType=_installType - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderFailureReason;                             //@synthesize placeholderFailureReason=_placeholderFailureReason - In the implementation block
@property (nonatomic,retain) NSError * placeholderFailureUnderlyingError;                             //@synthesize placeholderFailureUnderlyingError=_placeholderFailureUnderlyingError - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderFailureUnderlyingErrorSource;              //@synthesize placeholderFailureUnderlyingErrorSource=_placeholderFailureUnderlyingErrorSource - In the implementation block
@property (nonatomic,copy) NSString * watchKitAppExecutableHash;                                      //@synthesize watchKitAppExecutableHash=_watchKitAppExecutableHash - In the implementation block
@property (assign,nonatomic) unsigned long long autoInstallOverride;                                  //@synthesize autoInstallOverride=_autoInstallOverride - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataFromURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)installType;
-(NSDate *)installDate;
-(void)setInstallDate:(NSDate *)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(unsigned long long)autoInstallOverride;
-(void)setAutoInstallOverride:(unsigned long long)arg1 ;
-(NSString *)installBuildVersion;
-(void)setInstallBuildVersion:(NSString *)arg1 ;
-(unsigned long long)placeholderFailureReason;
-(void)setPlaceholderFailureReason:(unsigned long long)arg1 ;
-(NSError *)placeholderFailureUnderlyingError;
-(void)setPlaceholderFailureUnderlyingError:(NSError *)arg1 ;
-(unsigned long long)placeholderFailureUnderlyingErrorSource;
-(void)setPlaceholderFailureUnderlyingErrorSource:(unsigned long long)arg1 ;
-(NSString *)watchKitAppExecutableHash;
-(void)setWatchKitAppExecutableHash:(NSString *)arg1 ;
-(BOOL)serializeToURL:(id)arg1 error:(id*)arg2 ;
@end

