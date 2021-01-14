/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/

#import <UsageTracking/UsageTracking-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface USTrustIdentifier : NSObject <NSCopying, NSSecureCoding> {

	BOOL _trusted;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) BOOL trusted;                            //@synthesize trusted=_trusted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierWithIdentifier:(id)arg1 trusted:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)trusted;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 trusted:(BOOL)arg2 ;
-(void)_USTrustIdentifierCommonInitWithIdentifier:(id)arg1 trusted:(BOOL)arg2 ;
@end

