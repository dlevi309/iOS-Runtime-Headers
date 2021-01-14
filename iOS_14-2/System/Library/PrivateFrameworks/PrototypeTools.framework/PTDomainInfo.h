/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding> {

	NSString* _uniqueIdentifier;
	NSString* _domainGroupName;
	NSString* _domainName;
	NSString* _settingsClassName;
	NSString* _settingsFrameworkBundlePath;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * domainGroupName;                          //@synthesize domainGroupName=_domainGroupName - In the implementation block
@property (nonatomic,readonly) NSString * domainName;                               //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) NSString * settingsClassName;                        //@synthesize settingsClassName=_settingsClassName - In the implementation block
@property (nonatomic,readonly) NSString * settingsFrameworkBundlePath;              //@synthesize settingsFrameworkBundlePath=_settingsFrameworkBundlePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainName;
-(id)initWithDomain:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)domainGroupName;
-(unsigned long long)hash;
-(NSString *)settingsClassName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)settingsFrameworkBundlePath;
-(BOOL)isEqual:(id)arg1 ;
@end

