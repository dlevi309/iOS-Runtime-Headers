/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SCLPBScheduleSettings : PBCodable <NSCopying> {

	NSMutableArray* _recurrences;
	unsigned _version;
	BOOL _isEnabled;
	SCD_Struct_SC3 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasIsEnabled; 
@property (assign,nonatomic) BOOL isEnabled;                            //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * recurrences;              //@synthesize recurrences=_recurrences - In the implementation block
+(Class)recurrencesType;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIsEnabled;
-(id)description;
-(void)setHasIsEnabled:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)isEnabled;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRecurrences:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)recurrences;
-(void)addRecurrences:(id)arg1 ;
-(unsigned long long)recurrencesCount;
-(void)clearRecurrences;
-(id)recurrencesAtIndex:(unsigned long long)arg1 ;
@end

