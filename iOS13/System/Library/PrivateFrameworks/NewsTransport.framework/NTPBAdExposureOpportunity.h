/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBAdExposureOpportunity : PBCodable <NSCopying> {

	long long _adErrorCode;
	NSString* _adCreativeId;
	int _adCreativeType;
	NSString* _adOpportunityId;
	NSString* _adSlotId;
	int _adType;
	NSData* _articleViewingSessionId;
	int _durationInFeed;
	int _errorCode;
	NSString* _eventId;
	int _exposureLocationType;
	NSString* _exposureLocationTypeId;
	int _feedType;
	NSData* _feedViewExposureId;
	int _responseTime;
	int _screenfulsFromTop;
	BOOL _isExpanded;
	BOOL _isFilled;
	BOOL _isViewable;
	SCD_Struct_NT31 _has;

}

@property (assign,nonatomic) BOOL hasIsExpanded; 
@property (assign,nonatomic) BOOL isExpanded;                                //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) BOOL hasIsFilled; 
@property (assign,nonatomic) BOOL isFilled;                                  //@synthesize isFilled=_isFilled - In the implementation block
@property (nonatomic,readonly) BOOL hasAdSlotId; 
@property (nonatomic,retain) NSString * adSlotId;                            //@synthesize adSlotId=_adSlotId - In the implementation block
@property (assign,nonatomic) BOOL hasDurationInFeed; 
@property (assign,nonatomic) int durationInFeed;                             //@synthesize durationInFeed=_durationInFeed - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime;                               //@synthesize responseTime=_responseTime - In the implementation block
@property (assign,nonatomic) BOOL hasScreenfulsFromTop; 
@property (assign,nonatomic) int screenfulsFromTop;                          //@synthesize screenfulsFromTop=_screenfulsFromTop - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                  //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsViewable; 
@property (assign,nonatomic) BOOL isViewable;                                //@synthesize isViewable=_isViewable - In the implementation block
@property (assign,nonatomic) BOOL hasExposureLocationType; 
@property (assign,nonatomic) int exposureLocationType;                       //@synthesize exposureLocationType=_exposureLocationType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                   //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasExposureLocationTypeId; 
@property (nonatomic,retain) NSString * exposureLocationTypeId;              //@synthesize exposureLocationTypeId=_exposureLocationTypeId - In the implementation block
@property (nonatomic,readonly) BOOL hasAdCreativeId; 
@property (nonatomic,retain) NSString * adCreativeId;                        //@synthesize adCreativeId=_adCreativeId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                    //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasAdOpportunityId; 
@property (nonatomic,retain) NSString * adOpportunityId;                     //@synthesize adOpportunityId=_adOpportunityId - In the implementation block
@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) NSString * eventId;                             //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) BOOL hasAdErrorCode; 
@property (assign,nonatomic) long long adErrorCode;                          //@synthesize adErrorCode=_adErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasAdType; 
@property (assign,nonatomic) int adType;                                     //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) BOOL hasAdCreativeType; 
@property (assign,nonatomic) int adCreativeType;                             //@synthesize adCreativeType=_adCreativeType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(int)errorCode;
-(int)responseTime;
-(void)setResponseTime:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(BOOL)hasEventId;
-(NSString *)eventId;
-(void)setErrorCode:(int)arg1 ;
-(void)setEventId:(NSString *)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)isViewable;
-(BOOL)isFilled;
-(int)adType;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(NSData *)articleViewingSessionId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setAdSlotId:(NSString *)arg1 ;
-(void)setExposureLocationTypeId:(NSString *)arg1 ;
-(void)setAdCreativeId:(NSString *)arg1 ;
-(void)setAdOpportunityId:(NSString *)arg1 ;
-(void)setHasIsExpanded:(BOOL)arg1 ;
-(BOOL)hasIsExpanded;
-(void)setIsFilled:(BOOL)arg1 ;
-(void)setHasIsFilled:(BOOL)arg1 ;
-(BOOL)hasIsFilled;
-(BOOL)hasAdSlotId;
-(void)setDurationInFeed:(int)arg1 ;
-(void)setHasDurationInFeed:(BOOL)arg1 ;
-(BOOL)hasDurationInFeed;
-(void)setScreenfulsFromTop:(int)arg1 ;
-(void)setHasScreenfulsFromTop:(BOOL)arg1 ;
-(BOOL)hasScreenfulsFromTop;
-(void)setIsViewable:(BOOL)arg1 ;
-(void)setHasIsViewable:(BOOL)arg1 ;
-(BOOL)hasIsViewable;
-(int)exposureLocationType;
-(void)setExposureLocationType:(int)arg1 ;
-(void)setHasExposureLocationType:(BOOL)arg1 ;
-(BOOL)hasExposureLocationType;
-(BOOL)hasExposureLocationTypeId;
-(BOOL)hasAdCreativeId;
-(BOOL)hasAdOpportunityId;
-(void)setAdErrorCode:(long long)arg1 ;
-(void)setHasAdErrorCode:(BOOL)arg1 ;
-(BOOL)hasAdErrorCode;
-(void)setAdType:(int)arg1 ;
-(void)setHasAdType:(BOOL)arg1 ;
-(BOOL)hasAdType;
-(id)adTypeAsString:(int)arg1 ;
-(int)StringAsAdType:(id)arg1 ;
-(int)adCreativeType;
-(void)setAdCreativeType:(int)arg1 ;
-(void)setHasAdCreativeType:(BOOL)arg1 ;
-(BOOL)hasAdCreativeType;
-(id)adCreativeTypeAsString:(int)arg1 ;
-(int)StringAsAdCreativeType:(id)arg1 ;
-(NSString *)adSlotId;
-(int)durationInFeed;
-(int)screenfulsFromTop;
-(NSString *)exposureLocationTypeId;
-(NSString *)adCreativeId;
-(NSString *)adOpportunityId;
-(long long)adErrorCode;
@end

