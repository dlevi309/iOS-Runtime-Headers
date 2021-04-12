/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(unsigned long long)timeout;
-(void)setTimeout:(unsigned long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(BOOL)isEqualToActivity:(id)arg1 ;
@end

