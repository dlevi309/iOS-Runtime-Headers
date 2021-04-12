/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface _SWCDomain : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {

	BOOL _wildcard;
	NSString* _host;
	NSNumber* _port;

}

@property (readonly) NSString * rawValue; 
@property (readonly) NSString * host;                              //@synthesize host=_host - In the implementation block
@property (readonly) NSNumber * port;                              //@synthesize port=_port - In the implementation block
@property (getter=isWildcard,readonly) BOOL wildcard;              //@synthesize wildcard=_wildcard - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) NSString * topLevelDomainValue; 
@property (readonly) _SWCDomain * nonWildcardDomain; 
@property (readonly) _SWCDomain * wildcardDomain; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)_log;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)host;
-(NSNumber *)port;
-(id)initWithString:(id)arg1 ;
-(NSString *)rawValue;
-(id)initWithHost:(id)arg1 port:(id)arg2 wildcard:(BOOL)arg3 ;
-(NSString *)topLevelDomainValue;
-(BOOL)encompassesDomain:(id)arg1 ;
-(_SWCDomain *)nonWildcardDomain;
-(_SWCDomain *)wildcardDomain;
-(BOOL)isWildcard;
@end

