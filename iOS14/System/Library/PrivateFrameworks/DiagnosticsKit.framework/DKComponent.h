/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DKComponentIdentity, NSDictionary;

@interface DKComponent : NSObject <NSCopying, NSSecureCoding> {

	DKComponentIdentity* _identity;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) DKComponentIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                   //@synthesize attributes=_attributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)componentWithIdentity:(id)arg1 attributes:(id)arg2 ;
-(DKComponentIdentity *)identity;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)attributes;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryForJSON;
-(id)initWithIdentity:(id)arg1 attributes:(id)arg2 ;
@end

