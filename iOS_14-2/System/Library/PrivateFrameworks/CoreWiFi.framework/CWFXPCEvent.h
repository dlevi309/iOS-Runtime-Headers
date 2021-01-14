/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDictionary, NSDate;

@interface CWFXPCEvent : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	long long _type;
	long long _internalType;
	NSString* _interfaceName;
	NSDictionary* _info;
	NSDate* _timestamp;
	unsigned long long _acknowledgementTimeout;

}

@property (nonatomic,copy) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long internalType;                                 //@synthesize internalType=_internalType - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                 //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long acknowledgementTimeout;              //@synthesize acknowledgementTimeout=_acknowledgementTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)UUID;
-(NSDictionary *)info;
-(id)init;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)interfaceName;
-(id)description;
-(id)__descriptionForEventType;
-(unsigned long long)acknowledgementTimeout;
-(void)setInfo:(NSDictionary *)arg1 ;
-(long long)internalType;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAcknowledgementTimeout:(unsigned long long)arg1 ;
-(BOOL)isEqualToXPCEvent:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInternalType:(long long)arg1 ;
@end

