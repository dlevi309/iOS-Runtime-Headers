/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding> {

	NSString* _code;
	NSString* _query;
	NSString* _requestedScope;
	NSUUID* _state;

}

@property (nonatomic,copy,readonly) NSString * code;                        //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestedScope;              //@synthesize requestedScope=_requestedScope - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * state;                         //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)query;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)requestedScope;
-(id)initWithCode:(id)arg1 query:(id)arg2 requestedScope:(id)arg3 state:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)state;
-(NSString *)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

