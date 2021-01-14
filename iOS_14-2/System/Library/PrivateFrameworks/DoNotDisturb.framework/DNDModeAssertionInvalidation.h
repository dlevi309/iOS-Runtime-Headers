/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDModeAssertion, NSDate, DNDModeAssertionInvalidationDetails, DNDModeAssertionSource;

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding> {

	DNDModeAssertion* _assertion;
	NSDate* _invalidationDate;
	DNDModeAssertionInvalidationDetails* _details;
	DNDModeAssertionSource* _source;
	unsigned long long _reason;
	unsigned long long _reasonOverride;

}

@property (nonatomic,copy,readonly) DNDModeAssertionSource * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionInvalidationDetails * details;              //@synthesize details=_details - In the implementation block
@property (nonatomic,readonly) unsigned long long reasonOverride;                               //@synthesize reasonOverride=_reasonOverride - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertion * assertion;                               //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy,readonly) NSDate * invalidationDate;                                  //@synthesize invalidationDate=_invalidationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                                       //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(DNDModeAssertion *)assertion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)reason;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(DNDModeAssertionInvalidationDetails *)details;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)invalidationDate;
-(BOOL)isEqual:(id)arg1 ;
-(DNDModeAssertionSource *)source;
-(unsigned long long)reasonOverride;
-(id)initWithAssertion:(id)arg1 invalidationDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6 ;
@end

