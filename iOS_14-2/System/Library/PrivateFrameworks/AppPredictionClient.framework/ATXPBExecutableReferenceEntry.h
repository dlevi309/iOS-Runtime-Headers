/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXPBExecutableReferenceEntry : PBCodable <NSCopying> {

	double _date;
	NSString* _clientModelId;
	BOOL _shouldClearOnEngagement;
	BOOL _shouldPurge;
	BOOL _suggestionIsHidden;
	SCD_Struct_AT7 _has;

}

@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelId; 
@property (nonatomic,retain) NSString * clientModelId;                     //@synthesize clientModelId=_clientModelId - In the implementation block
@property (assign,nonatomic) BOOL hasShouldClearOnEngagement; 
@property (assign,nonatomic) BOOL shouldClearOnEngagement;                 //@synthesize shouldClearOnEngagement=_shouldClearOnEngagement - In the implementation block
@property (assign,nonatomic) BOOL hasShouldPurge; 
@property (assign,nonatomic) BOOL shouldPurge;                             //@synthesize shouldPurge=_shouldPurge - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionIsHidden; 
@property (assign,nonatomic) BOOL suggestionIsHidden;                      //@synthesize suggestionIsHidden=_suggestionIsHidden - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)clientModelId;
-(BOOL)hasDate;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)description;
-(void)setHasDate:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)shouldClearOnEngagement;
-(void)setClientModelId:(NSString *)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldClearOnEngagement:(BOOL)arg1 ;
-(void)setHasShouldClearOnEngagement:(BOOL)arg1 ;
-(BOOL)hasShouldClearOnEngagement;
-(BOOL)hasClientModelId;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldPurge;
-(void)setShouldPurge:(BOOL)arg1 ;
-(BOOL)suggestionIsHidden;
-(void)setSuggestionIsHidden:(BOOL)arg1 ;
-(void)setHasShouldPurge:(BOOL)arg1 ;
-(BOOL)hasShouldPurge;
-(void)setHasSuggestionIsHidden:(BOOL)arg1 ;
-(BOOL)hasSuggestionIsHidden;
@end

