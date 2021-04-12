/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBEventObject, NSData, NSMutableArray;

@interface NTPBEvent : PBCodable <NSCopying> {

	long long _appConfigTreatmentId;
	long long _duration;
	long long _personalizationTreatmentId;
	long long _personalizedTreatmentId;
	long long _startTimestamp;
	NSString* _appAnalyticsEventIdentifier;
	NSString* _appAnalyticsEventPath;
	NSString* _bundleOfferId;
	NSString* _bundlePurchaseId;
	int _bundleSubscriptionStatus;
	int _cellularRadioAccessTechnology;
	int _deviceOrientation;
	NTPBEventObject* _eventObject;
	int _gestureType;
	int _interfaceOrientation;
	NSString* _notwUserId;
	int _reachabilityStatus;
	NSString* _referringSource;
	NSString* _referringType;
	NSData* _sessionId;
	NSData* _sessionIdWatch;
	NSString* _userId;
	NSMutableArray* _userPaidSubscriptionStatus;
	NSString* _userStorefrontId;
	NSData* _widgetSessionId;
	NSString* _widgetUserId;
	NSString* _windowFrameInScreen;
	BOOL _isAmplifyUser;
	BOOL _isBundlePurchaser;
	BOOL _isPaidSubscriberDuringEvent;
	BOOL _isPaidSubscriberFromAppStoreDuringEvent;
	BOOL _isPaidSubscriberFromNewsDuringEvent;
	BOOL _isPaidSubscriberFromThirdPartyDuringEvent;
	SCD_Struct_NT34 _has;

}

@property (nonatomic,readonly) BOOL hasEventObject; 
@property (nonatomic,retain) NTPBEventObject * eventObject;                                  //@synthesize eventObject=_eventObject - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSData * sessionId;                                             //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                              //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                                    //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) long long startTimestamp;                                       //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceOrientation; 
@property (assign,nonatomic) int deviceOrientation;                                          //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringType; 
@property (nonatomic,retain) NSString * referringType;                                       //@synthesize referringType=_referringType - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSource; 
@property (nonatomic,retain) NSString * referringSource;                                     //@synthesize referringSource=_referringSource - In the implementation block
@property (nonatomic,readonly) BOOL hasWindowFrameInScreen; 
@property (nonatomic,retain) NSString * windowFrameInScreen;                                 //@synthesize windowFrameInScreen=_windowFrameInScreen - In the implementation block
@property (assign,nonatomic) BOOL hasGestureType; 
@property (assign,nonatomic) int gestureType;                                                //@synthesize gestureType=_gestureType - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceOrientation; 
@property (assign,nonatomic) int interfaceOrientation;                                       //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasReachabilityStatus; 
@property (assign,nonatomic) int reachabilityStatus;                                         //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                              //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                           //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizedTreatmentId; 
@property (assign,nonatomic) long long personalizedTreatmentId;                              //@synthesize personalizedTreatmentId=_personalizedTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberDuringEvent; 
@property (assign,nonatomic) BOOL isPaidSubscriberDuringEvent;                               //@synthesize isPaidSubscriberDuringEvent=_isPaidSubscriberDuringEvent - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberFromNewsDuringEvent; 
@property (assign,nonatomic) BOOL isPaidSubscriberFromNewsDuringEvent;                       //@synthesize isPaidSubscriberFromNewsDuringEvent=_isPaidSubscriberFromNewsDuringEvent - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberFromAppStoreDuringEvent; 
@property (assign,nonatomic) BOOL isPaidSubscriberFromAppStoreDuringEvent;                   //@synthesize isPaidSubscriberFromAppStoreDuringEvent=_isPaidSubscriberFromAppStoreDuringEvent - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberFromThirdPartyDuringEvent; 
@property (assign,nonatomic) BOOL isPaidSubscriberFromThirdPartyDuringEvent;                 //@synthesize isPaidSubscriberFromThirdPartyDuringEvent=_isPaidSubscriberFromThirdPartyDuringEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasNotwUserId; 
@property (nonatomic,retain) NSString * notwUserId;                                          //@synthesize notwUserId=_notwUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdWatch; 
@property (nonatomic,retain) NSData * sessionIdWatch;                                        //@synthesize sessionIdWatch=_sessionIdWatch - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfigTreatmentId; 
@property (assign,nonatomic) long long appConfigTreatmentId;                                 //@synthesize appConfigTreatmentId=_appConfigTreatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetSessionId; 
@property (nonatomic,retain) NSData * widgetSessionId;                                       //@synthesize widgetSessionId=_widgetSessionId - In the implementation block
@property (nonatomic,retain) NSMutableArray * userPaidSubscriptionStatus;                    //@synthesize userPaidSubscriptionStatus=_userPaidSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetUserId; 
@property (nonatomic,retain) NSString * widgetUserId;                                        //@synthesize widgetUserId=_widgetUserId - In the implementation block
@property (assign,nonatomic) BOOL hasBundleSubscriptionStatus; 
@property (assign,nonatomic) int bundleSubscriptionStatus;                                   //@synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasBundlePurchaseId; 
@property (nonatomic,retain) NSString * bundlePurchaseId;                                    //@synthesize bundlePurchaseId=_bundlePurchaseId - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleOfferId; 
@property (nonatomic,retain) NSString * bundleOfferId;                                       //@synthesize bundleOfferId=_bundleOfferId - In the implementation block
@property (assign,nonatomic) BOOL hasIsBundlePurchaser; 
@property (assign,nonatomic) BOOL isBundlePurchaser;                                         //@synthesize isBundlePurchaser=_isBundlePurchaser - In the implementation block
@property (nonatomic,readonly) BOOL hasAppAnalyticsEventIdentifier; 
@property (nonatomic,retain) NSString * appAnalyticsEventIdentifier;                         //@synthesize appAnalyticsEventIdentifier=_appAnalyticsEventIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppAnalyticsEventPath; 
@property (nonatomic,retain) NSString * appAnalyticsEventPath;                               //@synthesize appAnalyticsEventPath=_appAnalyticsEventPath - In the implementation block
@property (assign,nonatomic) BOOL hasIsAmplifyUser; 
@property (assign,nonatomic) BOOL isAmplifyUser;                                             //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
+(Class)userPaidSubscriptionStatusType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(int)interfaceOrientation;
-(int)deviceOrientation;
-(void)setInterfaceOrientation:(int)arg1 ;
-(void)setDeviceOrientation:(int)arg1 ;
-(void)setStartTimestamp:(long long)arg1 ;
-(long long)startTimestamp;
-(BOOL)hasDuration;
-(NSData *)sessionId;
-(void)setSessionId:(NSData *)arg1 ;
-(BOOL)hasSessionId;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)isAmplifyUser;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(void)setIsAmplifyUser:(BOOL)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(int)reachabilityStatus;
-(void)setWidgetUserId:(NSString *)arg1 ;
-(BOOL)hasWidgetUserId;
-(NSString *)widgetUserId;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(long long)personalizationTreatmentId;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(BOOL)hasUserId;
-(void)setNotwUserId:(NSString *)arg1 ;
-(void)setSessionIdWatch:(NSData *)arg1 ;
-(void)setWidgetSessionId:(NSData *)arg1 ;
-(void)setReachabilityStatus:(int)arg1 ;
-(void)setHasReachabilityStatus:(BOOL)arg1 ;
-(BOOL)hasReachabilityStatus;
-(id)reachabilityStatusAsString:(int)arg1 ;
-(int)StringAsReachabilityStatus:(id)arg1 ;
-(void)setAppConfigTreatmentId:(long long)arg1 ;
-(void)setHasAppConfigTreatmentId:(BOOL)arg1 ;
-(BOOL)hasAppConfigTreatmentId;
-(BOOL)hasNotwUserId;
-(BOOL)hasSessionIdWatch;
-(BOOL)hasWidgetSessionId;
-(long long)appConfigTreatmentId;
-(NSString *)notwUserId;
-(NSData *)sessionIdWatch;
-(NSData *)widgetSessionId;
-(int)bundleSubscriptionStatus;
-(void)setBundleSubscriptionStatus:(int)arg1 ;
-(void)setHasBundleSubscriptionStatus:(BOOL)arg1 ;
-(BOOL)hasBundleSubscriptionStatus;
-(id)bundleSubscriptionStatusAsString:(int)arg1 ;
-(int)StringAsBundleSubscriptionStatus:(id)arg1 ;
-(void)setIsBundlePurchaser:(BOOL)arg1 ;
-(void)setHasIsBundlePurchaser:(BOOL)arg1 ;
-(BOOL)hasIsBundlePurchaser;
-(void)setHasIsAmplifyUser:(BOOL)arg1 ;
-(BOOL)hasIsAmplifyUser;
-(BOOL)isBundlePurchaser;
-(void)addUserPaidSubscriptionStatus:(id)arg1 ;
-(void)setEventObject:(NTPBEventObject *)arg1 ;
-(void)setReferringType:(NSString *)arg1 ;
-(void)setReferringSource:(NSString *)arg1 ;
-(void)setWindowFrameInScreen:(NSString *)arg1 ;
-(void)setBundlePurchaseId:(NSString *)arg1 ;
-(void)setBundleOfferId:(NSString *)arg1 ;
-(void)setAppAnalyticsEventIdentifier:(NSString *)arg1 ;
-(void)setAppAnalyticsEventPath:(NSString *)arg1 ;
-(BOOL)hasEventObject;
-(void)setHasDeviceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceOrientation;
-(BOOL)hasReferringType;
-(BOOL)hasReferringSource;
-(BOOL)hasWindowFrameInScreen;
-(int)gestureType;
-(void)setGestureType:(int)arg1 ;
-(void)setHasGestureType:(BOOL)arg1 ;
-(BOOL)hasGestureType;
-(void)setHasInterfaceOrientation:(BOOL)arg1 ;
-(BOOL)hasInterfaceOrientation;
-(void)setPersonalizedTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizedTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizedTreatmentId;
-(void)setIsPaidSubscriberDuringEvent:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberDuringEvent:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberDuringEvent;
-(void)setIsPaidSubscriberFromNewsDuringEvent:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberFromNewsDuringEvent:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberFromNewsDuringEvent;
-(void)setIsPaidSubscriberFromAppStoreDuringEvent:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberFromAppStoreDuringEvent:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberFromAppStoreDuringEvent;
-(void)setIsPaidSubscriberFromThirdPartyDuringEvent:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberFromThirdPartyDuringEvent:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberFromThirdPartyDuringEvent;
-(void)clearUserPaidSubscriptionStatus;
-(unsigned long long)userPaidSubscriptionStatusCount;
-(id)userPaidSubscriptionStatusAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBundlePurchaseId;
-(BOOL)hasBundleOfferId;
-(BOOL)hasAppAnalyticsEventIdentifier;
-(BOOL)hasAppAnalyticsEventPath;
-(NTPBEventObject *)eventObject;
-(NSString *)referringType;
-(NSString *)referringSource;
-(NSString *)windowFrameInScreen;
-(long long)personalizedTreatmentId;
-(BOOL)isPaidSubscriberDuringEvent;
-(BOOL)isPaidSubscriberFromNewsDuringEvent;
-(BOOL)isPaidSubscriberFromAppStoreDuringEvent;
-(BOOL)isPaidSubscriberFromThirdPartyDuringEvent;
-(NSMutableArray *)userPaidSubscriptionStatus;
-(void)setUserPaidSubscriptionStatus:(NSMutableArray *)arg1 ;
-(NSString *)bundlePurchaseId;
-(NSString *)bundleOfferId;
-(NSString *)appAnalyticsEventIdentifier;
-(NSString *)appAnalyticsEventPath;
@end

