/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSpringBoardAppBrightness : PBCodable <NSCopying> {

	unsigned long long _brightness;
	unsigned long long _duration;
	unsigned long long _timestamp;
	NSString* _appBundleID;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleID; 
@property (nonatomic,retain) NSString * appBundleID;                     //@synthesize appBundleID=_appBundleID - In the implementation block
@property (assign,nonatomic) BOOL hasBrightness; 
@property (assign,nonatomic) unsigned long long brightness;              //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
-(void)setAppBundleID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)appBundleID;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setHasBrightness:(BOOL)arg1 ;
-(BOOL)hasBrightness;
-(unsigned long long)brightness;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)duration;
-(void)setBrightness:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasAppBundleID;
@end

