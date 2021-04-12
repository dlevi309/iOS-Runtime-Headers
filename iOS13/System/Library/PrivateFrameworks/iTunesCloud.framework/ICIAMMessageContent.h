/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)images;
-(NSString *)subtitle;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setImages:(NSMutableArray *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)clearImages;
-(BOOL)hasIdentifier;
-(void)addImages:(id)arg1 ;
-(unsigned long long)imagesCount;
-(id)imagesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBody;
-(BOOL)hasSubtitle;
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
-(BOOL)hasPageEvent;
-(BOOL)hasCloseClickEvent;
-(BOOL)hasCardClickEvent;
-(NSMutableArray *)messageActions;
-(void)setMessageActions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentParameters;
-(void)setContentParameters:(NSMutableArray *)arg1 ;
-(ICIAMMetricEvent *)pageEvent;
-(ICIAMMetricEvent *)closeClickEvent;
-(ICIAMMetricEvent *)cardClickEvent;
@end

