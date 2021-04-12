/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)attributes;
-(DKComponentIdentity *)identity;
-(id)dictionaryForJSON;
-(id)initWithIdentity:(id)arg1 attributes:(id)arg2 ;
@end

