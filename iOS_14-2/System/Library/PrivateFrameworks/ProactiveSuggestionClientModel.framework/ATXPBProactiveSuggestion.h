/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXPBProactiveSuggestionClientModelSpecification, ATXPBProactiveSuggestionExecutableSpecification, ATXPBProactiveSuggestionScoreSpecification, ATXPBProactiveSuggestionUISpecification, NSString;

@interface ATXPBProactiveSuggestion : PBCodable <NSCopying> {

	ATXPBProactiveSuggestionClientModelSpecification* _clientModelSpecification;
	ATXPBProactiveSuggestionExecutableSpecification* _executableSpecification;
	ATXPBProactiveSuggestionScoreSpecification* _scoreSpecification;
	ATXPBProactiveSuggestionUISpecification* _uiSpecification;
	NSString* _uuidString;

}

@property (nonatomic,readonly) BOOL hasUuidString; 
@property (nonatomic,retain) NSString * uuidString;                                                                    //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelSpecification; 
@property (nonatomic,retain) ATXPBProactiveSuggestionClientModelSpecification * clientModelSpecification;              //@synthesize clientModelSpecification=_clientModelSpecification - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableSpecification; 
@property (nonatomic,retain) ATXPBProactiveSuggestionExecutableSpecification * executableSpecification;                //@synthesize executableSpecification=_executableSpecification - In the implementation block
@property (nonatomic,readonly) BOOL hasUiSpecification; 
@property (nonatomic,retain) ATXPBProactiveSuggestionUISpecification * uiSpecification;                                //@synthesize uiSpecification=_uiSpecification - In the implementation block
@property (nonatomic,readonly) BOOL hasScoreSpecification; 
@property (nonatomic,retain) ATXPBProactiveSuggestionScoreSpecification * scoreSpecification;                          //@synthesize scoreSpecification=_scoreSpecification - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)uuidString;
-(id)description;
-(void)setUuidString:(NSString *)arg1 ;
-(BOOL)hasUuidString;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ATXPBProactiveSuggestionExecutableSpecification *)executableSpecification;
-(ATXPBProactiveSuggestionUISpecification *)uiSpecification;
-(void)setClientModelSpecification:(ATXPBProactiveSuggestionClientModelSpecification *)arg1 ;
-(void)setExecutableSpecification:(ATXPBProactiveSuggestionExecutableSpecification *)arg1 ;
-(void)setUiSpecification:(ATXPBProactiveSuggestionUISpecification *)arg1 ;
-(void)setScoreSpecification:(ATXPBProactiveSuggestionScoreSpecification *)arg1 ;
-(BOOL)hasClientModelSpecification;
-(BOOL)hasExecutableSpecification;
-(BOOL)hasUiSpecification;
-(BOOL)hasScoreSpecification;
-(ATXPBProactiveSuggestionClientModelSpecification *)clientModelSpecification;
-(ATXPBProactiveSuggestionScoreSpecification *)scoreSpecification;
-(BOOL)isEqual:(id)arg1 ;
@end

