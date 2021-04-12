/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, ICIAMMetricEvent, NSString, ICIAMLocalNotification, ICIAMMessageRule;

@interface ICIAMApplicationMessage : PBCodable <NSCopying> {

	double _endDate;
	double _startDate;
	int _assetPrefetchStrategy;
	NSMutableArray* _contentPages;
	int _globalPresentationPolicyGroup;
	ICIAMMetricEvent* _holdoutEvent;
	NSString* _identifier;
	ICIAMMetricEvent* _impressionEvent;
	ICIAMLocalNotification* _localNotification;
	int _maximumDisplays;
	int _messageType;
	int _modalPresentationStyle;
	int _priority;
	ICIAMMessageRule* _rule;
	NSMutableArray* _targets;
	NSString* _templateURL;
	NSString* _webArchiveURL;
	BOOL _carousel;
	BOOL _hasCloseButton;
	SCD_Struct_IC1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * targets;                                //@synthesize targets=_targets - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (assign,nonatomic) int messageType;                                         //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasCarousel; 
@property (assign,nonatomic) BOOL carousel;                                           //@synthesize carousel=_carousel - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) int priority;                                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL hasTemplateURL; 
@property (nonatomic,retain) NSString * templateURL;                                  //@synthesize templateURL=_templateURL - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumDisplays; 
@property (assign,nonatomic) int maximumDisplays;                                     //@synthesize maximumDisplays=_maximumDisplays - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                                        //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasHasCloseButton; 
@property (assign,nonatomic) BOOL hasCloseButton;                                     //@synthesize hasCloseButton=_hasCloseButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentPages;                           //@synthesize contentPages=_contentPages - In the implementation block
@property (nonatomic,readonly) BOOL hasRule; 
@property (nonatomic,retain) ICIAMMessageRule * rule;                                 //@synthesize rule=_rule - In the implementation block
@property (nonatomic,readonly) BOOL hasWebArchiveURL; 
@property (nonatomic,retain) NSString * webArchiveURL;                                //@synthesize webArchiveURL=_webArchiveURL - In the implementation block
@property (assign,nonatomic) BOOL hasModalPresentationStyle; 
@property (assign,nonatomic) int modalPresentationStyle;                              //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalPresentationPolicyGroup; 
@property (assign,nonatomic) int globalPresentationPolicyGroup;                       //@synthesize globalPresentationPolicyGroup=_globalPresentationPolicyGroup - In the implementation block
@property (assign,nonatomic) BOOL hasAssetPrefetchStrategy; 
@property (assign,nonatomic) int assetPrefetchStrategy;                               //@synthesize assetPrefetchStrategy=_assetPrefetchStrategy - In the implementation block
@property (nonatomic,readonly) BOOL hasHoldoutEvent; 
@property (nonatomic,retain) ICIAMMetricEvent * holdoutEvent;                         //@synthesize holdoutEvent=_holdoutEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalNotification; 
@property (nonatomic,retain) ICIAMLocalNotification * localNotification;              //@synthesize localNotification=_localNotification - In the implementation block
@property (nonatomic,readonly) BOOL hasImpressionEvent; 
@property (nonatomic,retain) ICIAMMetricEvent * impressionEvent;                      //@synthesize impressionEvent=_impressionEvent - In the implementation block
+(Class)targetType;
+(Class)contentPagesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)startDate;
-(double)endDate;
-(id)dictionaryRepresentation;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setModalPresentationStyle:(int)arg1 ;
-(int)modalPresentationStyle;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(BOOL)hasPriority;
-(BOOL)hasIdentifier;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(NSMutableArray *)targets;
-(ICIAMMessageRule *)rule;
-(BOOL)carousel;
-(void)setTargets:(NSMutableArray *)arg1 ;
-(void)addTarget:(id)arg1 ;
-(void)addContentPages:(id)arg1 ;
-(unsigned long long)targetsCount;
-(void)clearTargets;
-(id)targetAtIndex:(unsigned long long)arg1 ;
-(void)setTemplateURL:(NSString *)arg1 ;
-(unsigned long long)contentPagesCount;
-(void)clearContentPages;
-(id)contentPagesAtIndex:(unsigned long long)arg1 ;
-(void)setRule:(ICIAMMessageRule *)arg1 ;
-(void)setWebArchiveURL:(NSString *)arg1 ;
-(void)setHoldoutEvent:(ICIAMMetricEvent *)arg1 ;
-(void)setLocalNotification:(ICIAMLocalNotification *)arg1 ;
-(void)setImpressionEvent:(ICIAMMetricEvent *)arg1 ;
-(void)setCarousel:(BOOL)arg1 ;
-(void)setHasCarousel:(BOOL)arg1 ;
-(BOOL)hasCarousel;
-(BOOL)hasTemplateURL;
-(void)setMaximumDisplays:(int)arg1 ;
-(void)setHasMaximumDisplays:(BOOL)arg1 ;
-(BOOL)hasMaximumDisplays;
-(BOOL)hasCloseButton;
-(void)setHasCloseButton:(BOOL)arg1 ;
-(void)setHasHasCloseButton:(BOOL)arg1 ;
-(BOOL)hasHasCloseButton;
-(BOOL)hasRule;
-(BOOL)hasWebArchiveURL;
-(void)setHasModalPresentationStyle:(BOOL)arg1 ;
-(BOOL)hasModalPresentationStyle;
-(id)modalPresentationStyleAsString:(int)arg1 ;
-(int)StringAsModalPresentationStyle:(id)arg1 ;
-(int)globalPresentationPolicyGroup;
-(void)setGlobalPresentationPolicyGroup:(int)arg1 ;
-(void)setHasGlobalPresentationPolicyGroup:(BOOL)arg1 ;
-(BOOL)hasGlobalPresentationPolicyGroup;
-(id)globalPresentationPolicyGroupAsString:(int)arg1 ;
-(int)StringAsGlobalPresentationPolicyGroup:(id)arg1 ;
-(int)assetPrefetchStrategy;
-(void)setAssetPrefetchStrategy:(int)arg1 ;
-(void)setHasAssetPrefetchStrategy:(BOOL)arg1 ;
-(BOOL)hasAssetPrefetchStrategy;
-(id)assetPrefetchStrategyAsString:(int)arg1 ;
-(int)StringAsAssetPrefetchStrategy:(id)arg1 ;
-(BOOL)hasHoldoutEvent;
-(BOOL)hasLocalNotification;
-(BOOL)hasImpressionEvent;
-(NSString *)templateURL;
-(int)maximumDisplays;
-(NSMutableArray *)contentPages;
-(void)setContentPages:(NSMutableArray *)arg1 ;
-(NSString *)webArchiveURL;
-(ICIAMMetricEvent *)holdoutEvent;
-(ICIAMLocalNotification *)localNotification;
-(ICIAMMetricEvent *)impressionEvent;
@end

