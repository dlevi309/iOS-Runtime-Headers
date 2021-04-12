/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSDictionary, NSUUID, CWFEventID;

@interface CWFEvent : NSObject <NSCopying> {

	NSDate* _timestamp;
	NSDictionary* _info;
	NSUUID* _UUID;
	CWFEventID* _eventID;
	unsigned long long _acknowledgementTimeout;
	/*^block*/id _acknowledge;

}

@property (nonatomic,copy) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) CWFEventID * eventID;                                     //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) unsigned long long acknowledgementTimeout;              //@synthesize acknowledgementTimeout=_acknowledgementTimeout - In the implementation block
@property (nonatomic,copy) id acknowledge;                                           //@synthesize acknowledge=_acknowledge - In the implementation block
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                      //@synthesize info=_info - In the implementation block
-(CWFEventID *)eventID;
-(NSUUID *)UUID;
-(NSDictionary *)info;
-(id)init;
-(NSDate *)timestamp;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)acknowledge;
-(id)description;
-(unsigned long long)acknowledgementTimeout;
-(void)setInfo:(NSDictionary *)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(void)setAcknowledgementTimeout:(unsigned long long)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEventID:(CWFEventID *)arg1 ;
-(void)setAcknowledge:(id)arg1 ;
@end

