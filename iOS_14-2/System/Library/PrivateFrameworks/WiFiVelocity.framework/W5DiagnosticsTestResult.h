/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary, NSError;

@interface W5DiagnosticsTestResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _result;
	BOOL _didPass;
	NSUUID* _uuid;
	long long _testID;
	NSDictionary* _configuration;
	NSDictionary* _info;
	NSError* _error;
	double _testStarted;
	double _testCompleted;

}

@property (nonatomic,copy) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long testID;                        //@synthesize testID=_testID - In the implementation block
@property (assign,nonatomic) BOOL result;                             //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL didPass;                            //@synthesize didPass=_didPass - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                       //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double testStarted;                      //@synthesize testStarted=_testStarted - In the implementation block
@property (assign,nonatomic) double testCompleted;                    //@synthesize testCompleted=_testCompleted - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResult:(BOOL)arg1 ;
-(NSUUID *)uuid;
-(NSDictionary *)info;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(NSDictionary *)configuration;
-(long long)testID;
-(void)setInfo:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(BOOL)result;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(void)setTestID:(long long)arg1 ;
-(double)testStarted;
-(double)testCompleted;
-(BOOL)didPass;
-(BOOL)isEqualToDiagnosticsTestResult:(id)arg1 ;
-(void)setDidPass:(BOOL)arg1 ;
-(void)setTestStarted:(double)arg1 ;
-(void)setTestCompleted:(double)arg1 ;
@end

