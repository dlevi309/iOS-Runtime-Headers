/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)result;
-(long long)state;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setResult:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(long long)trigger;
-(void)setTrigger:(long long)arg1 ;
-(NSDate *)startedAt;
-(NSDate *)endedAt;
-(void)setStartedAt:(NSDate *)arg1 ;
-(void)setEndedAt:(NSDate *)arg1 ;
-(id)__descriptionForAutoJoinTrigger:(long long)arg1 ;
-(id)__descriptionForAutoJoinState:(long long)arg1 ;
-(NSArray *)joinAttempts;
-(BOOL)isEqualToAutoJoinStatus:(id)arg1 ;
-(void)setJoinAttempts:(NSArray *)arg1 ;
@end

