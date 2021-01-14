/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FPAppMetadata : NSObject <NSSecureCoding, NSCopying> {

	BOOL _useDefaultProviderDomainID;
	NSString* _bundleID;
	NSString* _displayName;
	NSURL* _documentsURL;
	NSString* _providerDomainID;

}

@property (nonatomic,readonly) BOOL useDefaultProviderDomainID;              //@synthesize useDefaultProviderDomainID=_useDefaultProviderDomainID - In the implementation block
@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * providerDomainID;                    //@synthesize providerDomainID=_providerDomainID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSURL * documentsURL;                         //@synthesize documentsURL=_documentsURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_entitledUbiquityContainerIDForAppProxy:(id)arg1 ;
+(id)findBundleIDForCurrentPlatformInSet:(id)arg1 ;
+(id)_localizedCustomDisplayNameForAppProxy:(id)arg1 ;
+(id)_entitledCloudDocsContainerIDForAppProxy:(id)arg1 ;
+(BOOL)_isContainerIDPermitted:(id)arg1 ;
-(void)setProviderDomainID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)providerDomainID;
-(id)description;
-(NSURL *)documentsURL;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)bundleID;
-(BOOL)useDefaultProviderDomainID;
-(id)initWithAppProxy:(id)arg1 providerDomainID:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

