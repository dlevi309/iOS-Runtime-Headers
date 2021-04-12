/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DKCanonicalVersion, NSSet;

@interface DKComponentIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	NSString* _domain;
	DKCanonicalVersion* _version;
	NSSet* _resources;

}

@property (nonatomic,readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) DKCanonicalVersion * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSSet * resources;                         //@synthesize resources=_resources - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)componentIdentityWithDomain:(id)arg1 version:(id)arg2 resources:(id)arg3 ;
+(id)componentIdentityWithType:(id)arg1 identifier:(id)arg2 version:(id)arg3 resources:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(DKCanonicalVersion *)version;
-(NSSet *)resources;
-(BOOL)isNewerThan:(id)arg1 ;
-(id)initWithDomain:(id)arg1 version:(id)arg2 resources:(id)arg3 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 version:(id)arg3 resources:(id)arg4 ;
-(BOOL)isEqualToComponentIdentity:(id)arg1 ;
@end

