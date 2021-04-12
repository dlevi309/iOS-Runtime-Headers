/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSDictionary *)info;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(unsigned long long)acknowledgementTimeout;
-(void)setAcknowledgementTimeout:(unsigned long long)arg1 ;
-(id)__descriptionForEventType;
-(long long)internalType;
-(BOOL)isEqualToXPCEvent:(id)arg1 ;
-(void)setInternalType:(long long)arg1 ;
@end

