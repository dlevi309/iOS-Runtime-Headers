/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, ICIAMImpressionNode;

@interface ICIAMMetricEvent : PBCodable <NSCopying> {

	NSMutableArray* _actionDetails;
	int _actionType;
	NSString* _actionURL;
	NSString* _eventType;
	ICIAMImpressionNode* _impression;
	NSString* _impressionType;
	NSMutableArray* _pageDetails;
	NSString* _pageId;
	int _pageType;
	NSString* _pageUrl;
	NSString* _targetId;
	int _targetType;
	SCD_Struct_IC15 _has;

}

@property (nonatomic,readonly) BOOL hasPageId; 
@property (nonatomic,retain) NSString * pageId;                             //@synthesize pageId=_pageId - In the implementation block
@property (assign,nonatomic) BOOL hasPageType; 
@property (assign,nonatomic) int pageType;                                  //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSMutableArray * pageDetails;                  //@synthesize pageDetails=_pageDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetId; 
@property (nonatomic,retain) NSString * targetId;                           //@synthesize targetId=_targetId - In the implementation block
@property (assign,nonatomic) BOOL hasTargetType; 
@property (assign,nonatomic) int targetType;                                //@synthesize targetType=_targetType - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                                //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) BOOL hasActionURL; 
@property (nonatomic,retain) NSString * actionURL;                          //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionDetails;                //@synthesize actionDetails=_actionDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasEventType; 
@property (nonatomic,retain) NSString * eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasPageUrl; 
@property (nonatomic,retain) NSString * pageUrl;                            //@synthesize pageUrl=_pageUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasImpressionType; 
@property (nonatomic,retain) NSString * impressionType;                     //@synthesize impressionType=_impressionType - In the implementation block
@property (nonatomic,readonly) BOOL hasImpression; 
@property (nonatomic,retain) ICIAMImpressionNode * impression;              //@synthesize impression=_impression - In the implementation block
+(Class)pageDetailsType;
+(Class)actionDetailsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)eventType;
-(void)setEventType:(NSString *)arg1 ;
-(BOOL)hasEventType;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(int)targetType;
-(void)setTargetType:(int)arg1 ;
-(NSString *)actionURL;
-(NSString *)targetId;
-(void)setActionURL:(NSString *)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(int)pageType;
-(void)setPageType:(int)arg1 ;
-(NSMutableArray *)actionDetails;
-(void)setActionDetails:(NSMutableArray *)arg1 ;
-(void)setImpressionType:(NSString *)arg1 ;
-(BOOL)hasImpressionType;
-(NSString *)impressionType;
-(void)addPageDetails:(id)arg1 ;
-(void)addActionDetails:(id)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(unsigned long long)pageDetailsCount;
-(void)clearPageDetails;
-(id)pageDetailsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)actionDetailsCount;
-(void)clearActionDetails;
-(id)actionDetailsAtIndex:(unsigned long long)arg1 ;
-(void)setPageUrl:(NSString *)arg1 ;
-(void)setImpression:(ICIAMImpressionNode *)arg1 ;
-(BOOL)hasPageId;
-(void)setHasPageType:(BOOL)arg1 ;
-(BOOL)hasPageType;
-(id)pageTypeAsString:(int)arg1 ;
-(int)StringAsPageType:(id)arg1 ;
-(BOOL)hasTargetId;
-(void)setHasTargetType:(BOOL)arg1 ;
-(BOOL)hasTargetType;
-(id)targetTypeAsString:(int)arg1 ;
-(int)StringAsTargetType:(id)arg1 ;
-(BOOL)hasActionURL;
-(BOOL)hasPageUrl;
-(BOOL)hasImpression;
-(NSString *)pageId;
-(NSMutableArray *)pageDetails;
-(void)setPageDetails:(NSMutableArray *)arg1 ;
-(NSString *)pageUrl;
-(ICIAMImpressionNode *)impression;
@end

