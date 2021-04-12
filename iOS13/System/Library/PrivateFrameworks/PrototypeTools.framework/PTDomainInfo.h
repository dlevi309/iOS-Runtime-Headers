/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)domainName;
-(id)initWithDomain:(id)arg1 ;
-(NSString *)domainGroupName;
-(NSString *)settingsClassName;
-(NSString *)settingsFrameworkBundlePath;
@end

