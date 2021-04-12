/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICIAMMetricEvent, NSMutableArray;

@interface ICIAMMessageContent : PBCodable <NSCopying> {

	NSString* _body;
	ICIAMMetricEvent* _cardClickEvent;
	ICIAMMetricEvent* _closeClickEvent;
	NSMutableArray* _contentParameters;
	NSString* _identifier;
	NSMutableArray* _images;
	NSMutableArray* _messageActions;
	ICIAMMetricEvent* _pageEvent;
	NSString* _subtitle;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) NSString * body;                                 //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSMutableArray * images;                         //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageActions;                 //@synthesize messageActions=_messageActions - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentParameters;              //@synthesize contentParameters=_contentParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPageEvent; 
@property (nonatomic,retain) ICIAMMetricEvent * pageEvent;                    //@synthesize pageEvent=_pageEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasCloseClickEvent; 
@property (nonatomic,retain) ICIAMMetricEvent * closeClickEvent;              //@synthesize closeClickEvent=_closeClickEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasCardClickEvent; 
@property (nonatomic,retain) ICIAMMetricEvent * cardClickEvent;               //@synthesize cardClickEvent=_cardClickEvent - In the implementation block
+(Class)imagesType;
+(Class)messageActionsType;
+(Class)contentParametersType;
-(void)setBody:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearImages;
-(NSString *)body;
-(BOOL)hasBody;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(void)setImages:(NSMutableArray *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)imagesCount;
-(BOOL)hasSubtitle;
-(id)description;
-(void)addImages:(id)arg1 ;
-(ICIAMMetricEvent *)pageEvent;
-(unsigned long long)hash;
-(BOOL)hasPageEvent;
-(void)addMessageActions:(id)arg1 ;
-(void)addContentParameters:(id)arg1 ;
-(unsigned long long)messageActionsCount;
-(void)clearMessageActions;
-(id)messageActionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)contentParametersCount;
-(void)clearContentParameters;
-(id)contentParametersAtIndex:(unsigned long long)arg1 ;
-(void)setPageEvent:(ICIAMMetricEvent *)arg1 ;
-(void)setCloseClickEvent:(ICIAMMetricEvent *)arg1 ;
-(void)setCardClickEvent:(ICIAMMetricEvent *)arg1 ;
-(BOOL)hasCloseClickEvent;
-(BOOL)hasCardClickEvent;
-(NSMutableArray *)messageActions;
-(void)setMessageActions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentParameters;
-(void)setContentParameters:(NSMutableArray *)arg1 ;
-(ICIAMMetricEvent *)closeClickEvent;
-(ICIAMMetricEvent *)cardClickEvent;
-(NSMutableArray *)images;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)imagesAtIndex:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

