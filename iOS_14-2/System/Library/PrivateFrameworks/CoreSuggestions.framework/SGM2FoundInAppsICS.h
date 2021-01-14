/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2FoundInAppsICS : PBCodable <NSCopying> {

	int _datetime;
	NSString* _key;
	int _timezone;
	SCD_Struct_SG4 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) int timezone;                  //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasDatetime; 
@property (assign,nonatomic) int datetime;                  //@synthesize datetime=_datetime - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(int)timezone;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(id)timezoneAsString:(int)arg1 ;
-(int)StringAsTimezone:(id)arg1 ;
-(void)setDatetime:(int)arg1 ;
-(void)setHasDatetime:(BOOL)arg1 ;
-(BOOL)hasDatetime;
-(id)datetimeAsString:(int)arg1 ;
-(int)StringAsDatetime:(id)arg1 ;
-(void)setHasTimezone:(BOOL)arg1 ;
-(BOOL)hasTimezone;
-(NSString *)key;
-(int)datetime;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimezone:(int)arg1 ;
@end

