/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray;

@interface DIVerificationSessionContext : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSString* _tier;
	NSString* _serviceURL;
	NSDictionary* _httpHeaders;
	NSString* _regionCode;
	unsigned long long _invocationReason;
	NSArray* _preferredLanguages;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tier;                           //@synthesize tier=_tier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceURL;                     //@synthesize serviceURL=_serviceURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * httpHeaders;                //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,copy) NSString * regionCode;                              //@synthesize regionCode=_regionCode - In the implementation block
@property (assign,nonatomic) unsigned long long invocationReason;              //@synthesize invocationReason=_invocationReason - In the implementation block
@property (nonatomic,copy) NSArray * preferredLanguages;                       //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)preferredLanguages;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(NSString *)serviceName;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
-(NSString *)serviceURL;
-(NSDictionary *)httpHeaders;
-(id)initWithName:(id)arg1 tier:(id)arg2 serviceUrl:(id)arg3 httpHeaders:(id)arg4 ;
-(NSString *)tier;
-(unsigned long long)invocationReason;
-(void)setInvocationReason:(unsigned long long)arg1 ;
@end

