/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_LSBundleQuery.h>

@class NSString;

@interface _LSApplicationProxyForIdentifierQuery : _LSBundleQuery {

	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)alwaysAllowedBundleIdentifiers;
+(id)queryWithIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

