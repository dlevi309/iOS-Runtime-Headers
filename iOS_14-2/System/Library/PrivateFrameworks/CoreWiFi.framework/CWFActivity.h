/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface CWFActivity : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _reason;
	long long _type;
	unsigned long long _timeout;

}

@property (nonatomic,copy) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) NSString * reason;                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;              //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activityWithType:(long long)arg1 reason:(id)arg2 ;
-(NSUUID *)UUID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(unsigned long long)timeout;
-(void)setType:(long long)arg1 ;
-(id)description;
-(NSString *)reason;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToActivity:(id)arg1 ;
@end

