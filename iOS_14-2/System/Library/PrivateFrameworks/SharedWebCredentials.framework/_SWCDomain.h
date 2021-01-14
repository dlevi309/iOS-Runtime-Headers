/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface _SWCDomain : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {

	BOOL _wildcard;
	char _modeOfOperation;
	NSString* _host;
	NSNumber* _port;

}

@property (readonly) NSString * rawValue; 
@property (readonly) NSString * host;                                        //@synthesize host=_host - In the implementation block
@property (readonly) NSNumber * port;                                        //@synthesize port=_port - In the implementation block
@property (getter=isWildcard,readonly) BOOL wildcard;                        //@synthesize wildcard=_wildcard - In the implementation block
@property (readonly) char modeOfOperation;                                   //@synthesize modeOfOperation=_modeOfOperation - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
@property (getter=isHostIPAddress,readonly) BOOL hostIPAddress; 
@property (readonly) NSString * topLevelDomainValue; 
@property (readonly) _SWCDomain * nonWildcardDomain; 
@property (readonly) _SWCDomain * wildcardDomain; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)appleDomain;
+(id)exampleDomain;
-(BOOL)isWildcard;
-(NSNumber *)port;
-(NSString *)host;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(id)initWithHost:(id)arg1 port:(id)arg2 wildcard:(BOOL)arg3 modeOfOperation:(char)arg4 ;
-(BOOL)isHostIPAddress;
-(NSString *)topLevelDomainValue;
-(_SWCDomain *)nonWildcardDomain;
-(_SWCDomain *)wildcardDomain;
-(id)domainRequiringModeOfOperation:(char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)rawValue;
-(id)description;
-(BOOL)isValid;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(char)modeOfOperation;
-(BOOL)encompassesDomain:(id)arg1 ;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

