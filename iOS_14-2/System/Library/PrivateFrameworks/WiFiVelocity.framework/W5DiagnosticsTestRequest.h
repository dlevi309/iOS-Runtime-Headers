/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface W5DiagnosticsTestRequest : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	long long _testID;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long testID;                        //@synthesize testID=_testID - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithTestID:(long long)arg1 configuration:(id)arg2 ;
-(NSUUID *)uuid;
-(id)init;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)configuration;
-(long long)testID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(void)setTestID:(long long)arg1 ;
-(BOOL)isEqualToDiagnosticsTestRequest:(id)arg1 ;
@end

