/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageDowngrade : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _durationBeforeDowngrade;
	NSString* _guid;
	unsigned _isManualDowngrade;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationBeforeDowngrade; 
@property (assign,nonatomic) unsigned durationBeforeDowngrade;              //@synthesize durationBeforeDowngrade=_durationBeforeDowngrade - In the implementation block
@property (assign,nonatomic) BOOL hasIsManualDowngrade; 
@property (assign,nonatomic) unsigned isManualDowngrade;                    //@synthesize isManualDowngrade=_isManualDowngrade - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setDurationBeforeDowngrade:(unsigned)arg1 ;
-(void)setIsManualDowngrade:(unsigned)arg1 ;
-(unsigned)durationBeforeDowngrade;
-(void)setHasDurationBeforeDowngrade:(BOOL)arg1 ;
-(BOOL)hasDurationBeforeDowngrade;
-(void)setHasIsManualDowngrade:(BOOL)arg1 ;
-(BOOL)hasIsManualDowngrade;
-(unsigned)isManualDowngrade;
@end

