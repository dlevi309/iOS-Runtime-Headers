/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCardSection.h>
@class _SFPBCardSectionValue, _SFPBCard, NSArray, NSString, _SFPBUserReportRequest, NSData;


@protocol _SFPBCardSection <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) _SFPBCardSectionValue * value; 
@property (nonatomic,retain) _SFPBCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) _SFPBUserReportRequest * userReportRequest; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setCardSectionId:(id)arg1;
-(void)setResultIdentifier:(id)arg1;
-(void)setNextCard:(id)arg1;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(id)arg1;
-(_SFPBUserReportRequest *)userReportRequest;
-(void)setUserReportRequest:(id)arg1;
-(NSData *)jsonData;
-(NSString *)cardSectionId;
-(void)addCommands:(id)arg1;
-(void)clearCommands;
-(void)setType:(int)arg1;
-(void)addParameterKeyPaths:(id)arg1;
-(unsigned long long)commandsCount;
-(id)commandsAtIndex:(unsigned long long)arg1;
-(void)clearParameterKeyPaths;
-(unsigned long long)parameterKeyPathsCount;
-(id)parameterKeyPathsAtIndex:(unsigned long long)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSArray *)commands;
-(void)setValue:(id)arg1;
-(void)setCommands:(id)arg1;
-(_SFPBCard *)nextCard;
-(NSString *)resultIdentifier;
-(int)type;
-(id)initWithJSON:(id)arg1;
-(_SFPBCardSectionValue *)value;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBCardSectionValue, _SFPBCard, NSArray, NSString, _SFPBUserReportRequest, NSData;

@interface _SFPBCardSection : PBCodable <_SFPBCardSection, NSSecureCoding> {

	int _type;
	_SFPBCardSectionValue* _value;
	_SFPBCard* _nextCard;
	NSArray* _commands;
	NSArray* _parameterKeyPaths;
	NSString* _cardSectionId;
	NSString* _resultIdentifier;
	_SFPBUserReportRequest* _userReportRequest;

}

@property (assign,nonatomic) int type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _SFPBCardSectionValue * value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) _SFPBCard * nextCard;                                    //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,copy) NSArray * commands;                                        //@synthesize commands=_commands - In the implementation block
@property (nonatomic,copy) NSArray * parameterKeyPaths;                               //@synthesize parameterKeyPaths=_parameterKeyPaths - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                                  //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultIdentifier;                               //@synthesize resultIdentifier=_resultIdentifier - In the implementation block
@property (nonatomic,retain) _SFPBUserReportRequest * userReportRequest;              //@synthesize userReportRequest=_userReportRequest - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setCardSectionId:(NSString *)arg1 ;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(void)setNextCard:(_SFPBCard *)arg1 ;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(NSArray *)arg1 ;
-(_SFPBUserReportRequest *)userReportRequest;
-(void)setUserReportRequest:(_SFPBUserReportRequest *)arg1 ;
-(NSData *)jsonData;
-(NSString *)cardSectionId;
-(void)addCommands:(id)arg1 ;
-(void)clearCommands;
-(void)setType:(int)arg1 ;
-(void)addParameterKeyPaths:(id)arg1 ;
-(unsigned long long)commandsCount;
-(id)commandsAtIndex:(unsigned long long)arg1 ;
-(void)clearParameterKeyPaths;
-(unsigned long long)parameterKeyPathsCount;
-(id)parameterKeyPathsAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)commands;
-(void)setValue:(_SFPBCardSectionValue *)arg1 ;
-(id)initWithSFCardSection:(id)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(_SFPBCard *)nextCard;
-(NSString *)resultIdentifier;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(_SFPBCardSectionValue *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

