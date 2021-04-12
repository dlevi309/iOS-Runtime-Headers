/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDate, NSArray;

@interface CWFAutoJoinStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _result;
	NSUUID* _UUID;
	NSString* _interfaceName;
	NSDate* _startedAt;
	NSDate* _endedAt;
	NSArray* _joinAttempts;
	long long _trigger;
	long long _state;

}

@property (nonatomic,copy) NSUUID * UUID;                         //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSDate * startedAt;                    //@synthesize startedAt=_startedAt - In the implementation block
@property (nonatomic,copy) NSDate * endedAt;                      //@synthesize endedAt=_endedAt - In the implementation block
@property (nonatomic,copy) NSArray * joinAttempts;                //@synthesize joinAttempts=_joinAttempts - In the implementation block
@property (assign,nonatomic) long long trigger;                   //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) long long state;                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL result;                         //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResult:(BOOL)arg1 ;
-(NSUUID *)UUID;
-(void)setEndedAt:(NSDate *)arg1 ;
-(NSDate *)endedAt;
-(long long)trigger;
-(NSArray *)joinAttempts;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTrigger:(long long)arg1 ;
-(void)setStartedAt:(NSDate *)arg1 ;
-(NSString *)interfaceName;
-(id)description;
-(id)__descriptionForAutoJoinState:(long long)arg1 ;
-(void)setJoinAttempts:(NSArray *)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)result;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)__descriptionForAutoJoinTrigger:(long long)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSDate *)startedAt;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToAutoJoinStatus:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

