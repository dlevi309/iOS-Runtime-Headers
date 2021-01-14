/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDHomeKitValue;

@interface AWDHomeKitWHASetting : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _keyPath;
	AWDHomeKitValue* _value;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyPath; 
@property (nonatomic,retain) NSString * keyPath;                        //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) AWDHomeKitValue * value;                   //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(AWDHomeKitValue *)arg1 ;
-(id)description;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(NSString *)keyPath;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(AWDHomeKitValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasKeyPath;
@end

