/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, CWFEventID, NSDate, NSDictionary;

@interface CWFEvent : NSObject <NSCopying> {

	NSUUID* _UUID;
	CWFEventID* _eventID;
	NSDate* _timestamp;
	NSDictionary* _info;
	unsigned long long _acknowledgementTimeout;
	/*^block*/id _acknowledge;

}

@property (nonatomic,copy) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) CWFEventID * eventID;                                     //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                      //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) unsigned long long acknowledgementTimeout;              //@synthesize acknowledgementTimeout=_acknowledgementTimeout - In the implementation block
@property (nonatomic,copy) id acknowledge;                                           //@synthesize acknowledge=_acknowledge - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSDate *)timestamp;
-(id)acknowledge;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSDictionary *)info;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(CWFEventID *)eventID;
-(void)setEventID:(CWFEventID *)arg1 ;
-(unsigned long long)acknowledgementTimeout;
-(void)setAcknowledgementTimeout:(unsigned long long)arg1 ;
-(void)setAcknowledge:(id)arg1 ;
@end

