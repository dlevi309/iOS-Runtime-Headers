/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFCard.h>
@class NSString, NSArray, NSData, NSURL, NSDictionary;


@protocol SFCard <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int type; 
@property (copy) NSArray * cardSections; 
@property (nonatomic,copy) NSData * intentMessageData; 
@property (nonatomic,copy) NSString * intentMessageName; 
@property (nonatomic,copy) NSData * intentResponseMessageData; 
@property (nonatomic,copy) NSString * intentResponseMessageName; 
@property (nonatomic,copy) NSArray * dismissalCommands; 
@property (nonatomic,copy) NSString * cardId; 
@property (nonatomic,copy) NSString * contextReferenceIdentifier; 
@property (nonatomic,copy) NSURL * urlValue; 
@property (assign,nonatomic) int source; 
@property (nonatomic,copy) NSData * entityIdentifier; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (assign,nonatomic) unsigned long long queryId; 
@property (nonatomic,copy) NSString * fbr; 
@property (assign,nonatomic) BOOL flexibleSectionOrder; 
@property (nonatomic,copy) NSArray * entityProtobufMessages; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)fbr;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)urlValue;
-(void)setFbr:(id)arg1;
-(unsigned long long)queryId;
-(NSString *)cardId;
-(void)setResultIdentifier:(id)arg1;
-(void)setUrlValue:(id)arg1;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(void)setIntentMessageData:(id)arg1;
-(void)setIntentMessageName:(id)arg1;
-(void)setIntentResponseMessageData:(id)arg1;
-(void)setIntentResponseMessageName:(id)arg1;
-(void)setCardId:(id)arg1;
-(void)setContextReferenceIdentifier:(id)arg1;
-(void)setFlexibleSectionOrder:(BOOL)arg1;
-(NSData *)intentMessageData;
-(NSString *)intentMessageName;
-(NSData *)intentResponseMessageData;
-(NSString *)intentResponseMessageName;
-(NSArray *)dismissalCommands;
-(NSString *)contextReferenceIdentifier;
-(BOOL)flexibleSectionOrder;
-(NSArray *)entityProtobufMessages;
-(void)setDismissalCommands:(id)arg1;
-(void)setEntityProtobufMessages:(id)arg1;
-(void)setType:(int)arg1;
-(void)setSource:(int)arg1;
-(void)setCardSections:(id)arg1;
-(void)setQueryId:(unsigned long long)arg1;
-(void)setEntityIdentifier:(id)arg1;
-(NSString *)resultIdentifier;
-(int)type;
-(NSArray *)cardSections;
-(NSData *)entityIdentifier;
-(NSString *)title;
-(int)source;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSData, NSURL, NSDictionary;

@interface SFCard : NSObject <SFCard, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	BOOL _flexibleSectionOrder;
	int _type;
	int _source;
	NSString* _title;
	NSArray* _cardSections;
	NSData* _intentMessageData;
	NSString* _intentMessageName;
	NSData* _intentResponseMessageData;
	NSString* _intentResponseMessageName;
	NSArray* _dismissalCommands;
	NSString* _cardId;
	NSString* _contextReferenceIdentifier;
	NSURL* _urlValue;
	NSData* _entityIdentifier;
	NSString* _resultIdentifier;
	unsigned long long _queryId;
	NSString* _fbr;
	NSArray* _entityProtobufMessages;
	NSData* _originalCardData;

}

@property (setter=_setOriginalCardData:,getter=_originalCardData,nonatomic,copy) NSData * originalCardData;              //@synthesize originalCardData=_originalCardData - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int type;                                                                                   //@synthesize type=_type - In the implementation block
@property (copy) NSArray * cardSections;                                                                                 //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,copy) NSData * intentMessageData;                                                                   //@synthesize intentMessageData=_intentMessageData - In the implementation block
@property (nonatomic,copy) NSString * intentMessageName;                                                                 //@synthesize intentMessageName=_intentMessageName - In the implementation block
@property (nonatomic,copy) NSData * intentResponseMessageData;                                                           //@synthesize intentResponseMessageData=_intentResponseMessageData - In the implementation block
@property (nonatomic,copy) NSString * intentResponseMessageName;                                                         //@synthesize intentResponseMessageName=_intentResponseMessageName - In the implementation block
@property (nonatomic,copy) NSArray * dismissalCommands;                                                                  //@synthesize dismissalCommands=_dismissalCommands - In the implementation block
@property (nonatomic,copy) NSString * cardId;                                                                            //@synthesize cardId=_cardId - In the implementation block
@property (nonatomic,copy) NSString * contextReferenceIdentifier;                                                        //@synthesize contextReferenceIdentifier=_contextReferenceIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * urlValue;                                                                             //@synthesize urlValue=_urlValue - In the implementation block
@property (assign,nonatomic) int source;                                                                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSData * entityIdentifier;                                                                    //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy) NSString * resultIdentifier;                                                                  //@synthesize resultIdentifier=_resultIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;                                                                 //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                                                               //@synthesize fbr=_fbr - In the implementation block
@property (assign,nonatomic) BOOL flexibleSectionOrder;                                                                  //@synthesize flexibleSectionOrder=_flexibleSectionOrder - In the implementation block
@property (nonatomic,copy) NSArray * entityProtobufMessages;                                                             //@synthesize entityProtobufMessages=_entityProtobufMessages - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)fbr;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)urlValue;
-(BOOL)hasSource;
-(void)setFbr:(NSString *)arg1 ;
-(unsigned long long)queryId;
-(NSString *)cardId;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(void)setUrlValue:(NSURL *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hasType;
-(void)loadCardSectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadCardSectionsWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)setIntentMessageData:(NSData *)arg1 ;
-(void)setIntentMessageName:(NSString *)arg1 ;
-(void)setIntentResponseMessageData:(NSData *)arg1 ;
-(void)setIntentResponseMessageName:(NSString *)arg1 ;
-(void)setCardId:(NSString *)arg1 ;
-(void)setContextReferenceIdentifier:(NSString *)arg1 ;
-(void)setFlexibleSectionOrder:(BOOL)arg1 ;
-(NSData *)intentMessageData;
-(NSString *)intentMessageName;
-(NSData *)intentResponseMessageData;
-(NSString *)intentResponseMessageName;
-(NSArray *)dismissalCommands;
-(NSString *)contextReferenceIdentifier;
-(BOOL)flexibleSectionOrder;
-(NSArray *)entityProtobufMessages;
-(void)setDismissalCommands:(NSArray *)arg1 ;
-(void)setEntityProtobufMessages:(NSArray *)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setSource:(int)arg1 ;
-(BOOL)hasQueryId;
-(BOOL)hasFlexibleSectionOrder;
-(id)_originalCardData;
-(void)_setOriginalCardData:(id)arg1 ;
-(void)setCardSections:(NSArray *)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(void)setEntityIdentifier:(NSData *)arg1 ;
-(NSString *)resultIdentifier;
-(int)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSArray *)cardSections;
-(NSData *)entityIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
@end

