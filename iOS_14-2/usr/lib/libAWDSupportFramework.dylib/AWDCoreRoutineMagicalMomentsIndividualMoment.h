/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineMagicalMomentsIndividualMoment : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _expertType;
	int _modelType;
	NSString* _suggestionId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasModelType; 
@property (assign,nonatomic) int modelType;                             //@synthesize modelType=_modelType - In the implementation block
@property (assign,nonatomic) BOOL hasExpertType; 
@property (assign,nonatomic) int expertType;                            //@synthesize expertType=_expertType - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionId; 
@property (nonatomic,retain) NSString * suggestionId;                   //@synthesize suggestionId=_suggestionId - In the implementation block
-(int)modelType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setModelType:(int)arg1 ;
-(NSString *)suggestionId;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSuggestionId:(NSString *)arg1 ;
-(BOOL)hasSuggestionId;
-(void)setHasModelType:(BOOL)arg1 ;
-(BOOL)hasModelType;
-(void)setExpertType:(int)arg1 ;
-(void)setHasExpertType:(BOOL)arg1 ;
-(BOOL)hasExpertType;
-(int)expertType;
@end

