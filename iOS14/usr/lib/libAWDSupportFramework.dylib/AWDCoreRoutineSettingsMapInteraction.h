/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineSettingsMapInteraction : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _deviceClass;
	int _gestureType;
	NSString* _sessionId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasGestureType; 
@property (assign,nonatomic) int gestureType;                           //@synthesize gestureType=_gestureType - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass; 
@property (assign,nonatomic) int deviceClass;                           //@synthesize deviceClass=_deviceClass - In the implementation block
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSessionId;
-(unsigned long long)timestamp;
-(int)deviceClass;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasDeviceClass;
-(void)setDeviceClass:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)gestureType;
-(void)setGestureType:(int)arg1 ;
-(void)setHasGestureType:(BOOL)arg1 ;
-(BOOL)hasGestureType;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

