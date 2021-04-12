/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBTodayWidgetConfig;

@interface NTPBTodayResultOperationFetchInfo : PBCodable <NSCopying> {

	SCD_Struct_NT9* _userSegmentationSegmentSetIds;
	SCD_Struct_NT18* _userSegmentationTreatmentIds;
	long long _appConfigTreatmentIDInteger;
	long long _cellularRadioAccessTechnology;
	long long _onboardingVersion;
	long long _reachabilityStatus;
	NSString* _bundleIap;
	NSData* _clickThroughRateByPersonalizationFeatureIDData;
	NSString* _contentStoreFrontID;
	NSString* _localeIdentifier;
	NSString* _todaySourceIdentifier;
	NSString* _userID;
	NTPBTodayWidgetConfig* _widgetConfig;
	BOOL _isBundleSubscriber;
	BOOL _wifiReachable;
	SCD_Struct_NT8 _has;

}

@property (nonatomic,readonly) BOOL hasTodaySourceIdentifier; 
@property (nonatomic,retain) NSString * todaySourceIdentifier;                                      //@synthesize todaySourceIdentifier=_todaySourceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfigTreatmentIDInteger; 
@property (assign,nonatomic) long long appConfigTreatmentIDInteger;                                 //@synthesize appConfigTreatmentIDInteger=_appConfigTreatmentIDInteger - In the implementation block
@property (nonatomic,readonly) BOOL hasUserID; 
@property (nonatomic,retain) NSString * userID;                                                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) BOOL hasContentStoreFrontID; 
@property (nonatomic,retain) NSString * contentStoreFrontID;                                        //@synthesize contentStoreFrontID=_contentStoreFrontID - In the implementation block
@property (assign,nonatomic) BOOL hasWifiReachable; 
@property (assign,nonatomic) BOOL wifiReachable;                                                    //@synthesize wifiReachable=_wifiReachable - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) long long cellularRadioAccessTechnology;                               //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasReachabilityStatus; 
@property (assign,nonatomic) long long reachabilityStatus;                                          //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetConfig; 
@property (nonatomic,retain) NTPBTodayWidgetConfig * widgetConfig;                                  //@synthesize widgetConfig=_widgetConfig - In the implementation block
@property (assign,nonatomic) BOOL hasOnboardingVersion; 
@property (assign,nonatomic) long long onboardingVersion;                                           //@synthesize onboardingVersion=_onboardingVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasClickThroughRateByPersonalizationFeatureIDData; 
@property (nonatomic,retain) NSData * clickThroughRateByPersonalizationFeatureIDData;               //@synthesize clickThroughRateByPersonalizationFeatureIDData=_clickThroughRateByPersonalizationFeatureIDData - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;                                           //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long userSegmentationSegmentSetIdsCount; 
@property (nonatomic,readonly) int* userSegmentationSegmentSetIds; 
@property (nonatomic,readonly) unsigned long long userSegmentationTreatmentIdsCount; 
@property (nonatomic,readonly) long long* userSegmentationTreatmentIds; 
@property (assign,nonatomic) BOOL hasIsBundleSubscriber; 
@property (assign,nonatomic) BOOL isBundleSubscriber;                                               //@synthesize isBundleSubscriber=_isBundleSubscriber - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIap; 
@property (nonatomic,retain) NSString * bundleIap;                                                  //@synthesize bundleIap=_bundleIap - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localeIdentifier;
-(NSString *)userID;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(BOOL)hasUserID;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(long long)onboardingVersion;
-(void)setOnboardingVersion:(long long)arg1 ;
-(NSString *)contentStoreFrontID;
-(NTPBTodayWidgetConfig *)widgetConfig;
-(void)setWifiReachable:(BOOL)arg1 ;
-(long long)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(long long)arg1 ;
-(BOOL)wifiReachable;
-(void)setContentStoreFrontID:(NSString *)arg1 ;
-(long long)reachabilityStatus;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(unsigned long long)userSegmentationTreatmentIdsCount;
-(long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)arg1 ;
-(void)addUserSegmentationTreatmentIds:(long long)arg1 ;
-(unsigned long long)userSegmentationSegmentSetIdsCount;
-(int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)arg1 ;
-(void)addUserSegmentationSegmentSetIds:(int)arg1 ;
-(void)setReachabilityStatus:(long long)arg1 ;
-(void)setHasReachabilityStatus:(BOOL)arg1 ;
-(BOOL)hasReachabilityStatus;
-(long long*)userSegmentationTreatmentIds;
-(void)clearUserSegmentationTreatmentIds;
-(void)setUserSegmentationTreatmentIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(int*)userSegmentationSegmentSetIds;
-(void)clearUserSegmentationSegmentSetIds;
-(void)setUserSegmentationSegmentSetIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setWidgetConfig:(NTPBTodayWidgetConfig *)arg1 ;
-(BOOL)hasWidgetConfig;
-(void)setHasWifiReachable:(BOOL)arg1 ;
-(BOOL)hasWifiReachable;
-(void)setTodaySourceIdentifier:(NSString *)arg1 ;
-(void)setClickThroughRateByPersonalizationFeatureIDData:(NSData *)arg1 ;
-(void)setBundleIap:(NSString *)arg1 ;
-(BOOL)hasTodaySourceIdentifier;
-(void)setAppConfigTreatmentIDInteger:(long long)arg1 ;
-(void)setHasAppConfigTreatmentIDInteger:(BOOL)arg1 ;
-(BOOL)hasAppConfigTreatmentIDInteger;
-(BOOL)hasContentStoreFrontID;
-(void)setHasOnboardingVersion:(BOOL)arg1 ;
-(BOOL)hasOnboardingVersion;
-(BOOL)hasClickThroughRateByPersonalizationFeatureIDData;
-(BOOL)hasLocaleIdentifier;
-(void)setIsBundleSubscriber:(BOOL)arg1 ;
-(void)setHasIsBundleSubscriber:(BOOL)arg1 ;
-(BOOL)hasIsBundleSubscriber;
-(BOOL)hasBundleIap;
-(NSString *)todaySourceIdentifier;
-(long long)appConfigTreatmentIDInteger;
-(NSData *)clickThroughRateByPersonalizationFeatureIDData;
-(BOOL)isBundleSubscriber;
-(NSString *)bundleIap;
@end

