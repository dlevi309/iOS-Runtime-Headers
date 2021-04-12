/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_SG3 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) int timezone;                  //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasDatetime; 
@property (assign,nonatomic) int datetime;                  //@synthesize datetime=_datetime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)timezone;
-(BOOL)hasKey;
-(void)setTimezone:(int)arg1 ;
-(BOOL)hasTimezone;
-(void)setHasTimezone:(BOOL)arg1 ;
-(id)timezoneAsString:(int)arg1 ;
-(int)StringAsTimezone:(id)arg1 ;
-(int)datetime;
-(void)setDatetime:(int)arg1 ;
-(void)setHasDatetime:(BOOL)arg1 ;
-(BOOL)hasDatetime;
-(id)datetimeAsString:(int)arg1 ;
-(int)StringAsDatetime:(id)arg1 ;
@end

