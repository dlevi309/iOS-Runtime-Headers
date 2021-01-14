/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBContextMenuFeedbackTracker : PBCodable <NSCopying> {

	NSString* _clientModelId;
	NSString* _consumerSubType;
	NSString* _executableType;
	int _menuActionType;
	NSString* _suggestion;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasMenuActionType; 
@property (assign,nonatomic) int menuActionType;                      //@synthesize menuActionType=_menuActionType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelId; 
@property (nonatomic,retain) NSString * clientModelId;                //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableType; 
@property (nonatomic,retain) NSString * executableType;               //@synthesize executableType=_executableType - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;              //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestion; 
@property (nonatomic,retain) NSString * suggestion;                   //@synthesize suggestion=_suggestion - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)clientModelId;
-(NSString *)consumerSubType;
-(BOOL)hasConsumerSubType;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)suggestion;
-(NSString *)executableType;
-(id)description;
-(unsigned long long)hash;
-(void)setSuggestion:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientModelId:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasClientModelId;
-(void)setExecutableType:(NSString *)arg1 ;
-(BOOL)hasExecutableType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMenuActionType:(int)arg1 ;
-(int)menuActionType;
-(void)setHasMenuActionType:(BOOL)arg1 ;
-(BOOL)hasMenuActionType;
-(id)menuActionTypeAsString:(int)arg1 ;
-(int)StringAsMenuActionType:(id)arg1 ;
-(BOOL)hasSuggestion;
@end

