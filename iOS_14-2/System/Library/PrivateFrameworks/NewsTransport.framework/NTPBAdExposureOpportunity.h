/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT29 _has;

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
-(BOOL)hasFeedViewExposureId;
-(id)dictionaryRepresentation;
-(BOOL)hasArticleViewingSessionId;
-(int)feedType;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)isExpanded;
-(NSData *)feedViewExposureId;
-(NSData *)articleViewingSessionId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)setAdSlotId:(NSString *)arg1 ;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setExposureLocationTypeId:(NSString *)arg1 ;
-(void)setAdCreativeId:(NSString *)arg1 ;
-(BOOL)hasIsExpanded;
-(void)setAdOpportunityId:(NSString *)arg1 ;
-(void)setHasIsExpanded:(BOOL)arg1 ;
-(void)setIsFilled:(BOOL)arg1 ;
-(void)setHasIsFilled:(BOOL)arg1 ;
-(BOOL)hasIsFilled;
-(BOOL)hasAdSlotId;
-(void)setDurationInFeed:(int)arg1 ;
-(void)setHasDurationInFeed:(BOOL)arg1 ;
-(BOOL)hasDurationInFeed;
-(void)setIsViewable:(BOOL)arg1 ;
-(void)setHasIsViewable:(BOOL)arg1 ;
-(BOOL)hasIsViewable;
-(int)exposureLocationType;
-(void)setExposureLocationType:(int)arg1 ;
-(void)setHasExposureLocationType:(BOOL)arg1 ;
-(BOOL)hasExposureLocationType;
-(BOOL)hasExposureLocationTypeId;
-(BOOL)hasAdCreativeId;
-(BOOL)isFilled;
-(BOOL)hasAdOpportunityId;
-(void)setAdErrorCode:(long long)arg1 ;
-(void)setHasAdErrorCode:(BOOL)arg1 ;
-(BOOL)hasAdErrorCode;
-(void)setAdType:(int)arg1 ;
-(void)setHasAdType:(BOOL)arg1 ;
-(id)adTypeAsString:(int)arg1 ;
-(int)StringAsAdType:(id)arg1 ;
-(int)adCreativeType;
-(void)setAdCreativeType:(int)arg1 ;
-(void)setHasAdCreativeType:(BOOL)arg1 ;
-(BOOL)hasAdCreativeType;
-(id)adCreativeTypeAsString:(int)arg1 ;
-(int)StringAsAdCreativeType:(id)arg1 ;
-(int)durationInFeed;
-(NSString *)exposureLocationTypeId;
-(NSString *)adCreativeId;
-(NSString *)adOpportunityId;
-(long long)adErrorCode;
-(int)adType;
-(NSString *)eventId;
-(void)mergeFrom:(id)arg1 ;
-(int)errorCode;
-(BOOL)hasErrorCode;
-(int)screenfulsFromTop;
-(void)setEventId:(NSString *)arg1 ;
-(void)setIsExpanded:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasScreenfulsFromTop;
-(void)setScreenfulsFromTop:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasEventId;
-(unsigned long long)hash;
-(int)responseTime;
-(void)setResponseTime:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSString *)adSlotId;
-(void)writeTo:(id)arg1 ;
-(BOOL)isViewable;
-(BOOL)hasAdType;
-(BOOL)hasFeedType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasScreenfulsFromTop:(BOOL)arg1 ;
@end

