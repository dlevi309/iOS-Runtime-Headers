/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXPBAction, ATXPBHeroAppPrediction, ATXPBInfoSuggestion, NSString, NSMutableArray;

@interface ATXPBExecutableReferenceKey : PBCodable <NSCopying> {

	ATXPBAction* _executableAction;
	ATXPBHeroAppPrediction* _executableHeroApp;
	ATXPBInfoSuggestion* _executableInfoSuggestion;
	NSString* _executableString;
	int _executableType;
	NSMutableArray* _references;

}

@property (assign,nonatomic) int executableType;                                          //@synthesize executableType=_executableType - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableString; 
@property (nonatomic,retain) NSString * executableString;                                 //@synthesize executableString=_executableString - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableAction; 
@property (nonatomic,retain) ATXPBAction * executableAction;                              //@synthesize executableAction=_executableAction - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableHeroApp; 
@property (nonatomic,retain) ATXPBHeroAppPrediction * executableHeroApp;                  //@synthesize executableHeroApp=_executableHeroApp - In the implementation block
@property (nonatomic,retain) NSMutableArray * references;                                 //@synthesize references=_references - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableInfoSuggestion; 
@property (nonatomic,retain) ATXPBInfoSuggestion * executableInfoSuggestion;              //@synthesize executableInfoSuggestion=_executableInfoSuggestion - In the implementation block
+(Class)referencesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)executableType;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)references;
-(void)setReferences:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExecutableType:(int)arg1 ;
-(id)executableTypeAsString:(int)arg1 ;
-(int)StringAsExecutableType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addReferences:(id)arg1 ;
-(void)setExecutableString:(NSString *)arg1 ;
-(void)setExecutableAction:(ATXPBAction *)arg1 ;
-(void)setExecutableHeroApp:(ATXPBHeroAppPrediction *)arg1 ;
-(unsigned long long)referencesCount;
-(void)clearReferences;
-(id)referencesAtIndex:(unsigned long long)arg1 ;
-(void)setExecutableInfoSuggestion:(ATXPBInfoSuggestion *)arg1 ;
-(BOOL)hasExecutableString;
-(BOOL)hasExecutableAction;
-(BOOL)hasExecutableHeroApp;
-(BOOL)hasExecutableInfoSuggestion;
-(NSString *)executableString;
-(ATXPBAction *)executableAction;
-(ATXPBHeroAppPrediction *)executableHeroApp;
-(ATXPBInfoSuggestion *)executableInfoSuggestion;
@end

