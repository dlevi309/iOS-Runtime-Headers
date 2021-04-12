/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDate, NSData;

@interface CWFRoamStatus : NSObject <NSCopying, NSSecureCoding> {

	int _reason;
	NSUUID* _UUID;
	NSString* _interfaceName;
	NSDate* _startedAt;
	NSDate* _endedAt;
	NSData* _SSID;
	NSString* _originOUI;
	NSString* _targetOUI;
	NSString* _fromBSSID;
	NSString* _toBSSID;
	unsigned long long _fromChannel;
	unsigned long long _toChannel;
	long long _fromRSSI;
	long long _toRSSI;
	long long _status;

}

@property (nonatomic,copy) NSUUID * UUID;                                 //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                      //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSDate * startedAt;                            //@synthesize startedAt=_startedAt - In the implementation block
@property (nonatomic,copy) NSDate * endedAt;                              //@synthesize endedAt=_endedAt - In the implementation block
@property (setter=SID,nonatomic,copy) NSData * SSID;                      //@synthesize SSID=_SSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkName; 
@property (nonatomic,copy) NSString * originOUI;                          //@synthesize originOUI=_originOUI - In the implementation block
@property (nonatomic,copy) NSString * targetOUI;                          //@synthesize targetOUI=_targetOUI - In the implementation block
@property (nonatomic,copy) NSString * fromBSSID;                          //@synthesize fromBSSID=_fromBSSID - In the implementation block
@property (nonatomic,copy) NSString * toBSSID;                            //@synthesize toBSSID=_toBSSID - In the implementation block
@property (assign,nonatomic) unsigned long long fromChannel;              //@synthesize fromChannel=_fromChannel - In the implementation block
@property (assign,nonatomic) unsigned long long toChannel;                //@synthesize toChannel=_toChannel - In the implementation block
@property (assign,nonatomic) long long fromRSSI;                          //@synthesize fromRSSI=_fromRSSI - In the implementation block
@property (assign,nonatomic) long long toRSSI;                            //@synthesize toRSSI=_toRSSI - In the implementation block
@property (assign,nonatomic) int reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long status;                            //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)reason;
-(NSUUID *)UUID;
-(long long)status;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setReason:(int)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSData *)SSID;
-(NSString *)networkName;
-(void)setSSID:(NSData *)arg1 ;
-(NSString *)originOUI;
-(NSString *)fromBSSID;
-(unsigned long long)fromChannel;
-(long long)fromRSSI;
-(NSString *)targetOUI;
-(NSString *)toBSSID;
-(unsigned long long)toChannel;
-(long long)toRSSI;
-(NSDate *)startedAt;
-(NSDate *)endedAt;
-(BOOL)isEqualToRoamStatus:(id)arg1 ;
-(void)setStartedAt:(NSDate *)arg1 ;
-(void)setEndedAt:(NSDate *)arg1 ;
-(void)setOriginOUI:(NSString *)arg1 ;
-(void)setFromBSSID:(NSString *)arg1 ;
-(void)setFromChannel:(unsigned long long)arg1 ;
-(void)setFromRSSI:(long long)arg1 ;
-(void)setTargetOUI:(NSString *)arg1 ;
-(void)setToBSSID:(NSString *)arg1 ;
-(void)setToChannel:(unsigned long long)arg1 ;
-(void)setToRSSI:(long long)arg1 ;
@end

