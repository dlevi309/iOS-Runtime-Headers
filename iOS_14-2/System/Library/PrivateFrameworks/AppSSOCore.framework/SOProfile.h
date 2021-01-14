/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/

#import <AppSSOCore/AppSSOCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface SOProfile : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSArray* _URLPrefix;
	NSArray* _hosts;
	NSString* _extensionBundleIdentifier;
	NSString* _realm;

}

@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * URLPrefix;                               //@synthesize URLPrefix=_URLPrefix - In the implementation block
@property (nonatomic,retain) NSArray * hosts;                                   //@synthesize hosts=_hosts - In the implementation block
@property (nonatomic,retain) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * realm;                                  //@synthesize realm=_realm - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringWithProfileType:(long long)arg1 ;
-(NSString *)realm;
-(NSArray *)hosts;
-(void)setExtensionBundleIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSArray *)URLPrefix;
-(id)description;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setURLPrefix:(NSArray *)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(void)setRealm:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHosts:(NSArray *)arg1 ;
@end

