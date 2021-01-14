/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBTodayWidgetConfig;

@interface NTPBTodayResultOperationFetchInfo : PBCodable <NSCopying> {

	SCD_Struct_NT10* _userSegmentationSegmentSetIds;
	SCD_Struct_NT19* _userSegmentationTreatmentIds;
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
	SCD_Struct_NT9 _has;

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
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(void)setUserID:(NSString *)arg1 ;
-(void)setContentStoreFrontID:(NSString *)arg1 ;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(void)setTodaySourceIdentifier:(NSString *)arg1 ;
-(void)setClickThroughRateByPersonalizationFeatureIDData:(NSData *)arg1 ;
-(void)setBundleIap:(NSString *)arg1 ;
-(BOOL)hasTodaySourceIdentifier;
-(void)setAppConfigTreatmentIDInteger:(long long)arg1 ;
-(BOOL)hasUserID;
-(void)setUserSegmentationSegmentSetIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(long long)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(long long)arg1 ;
-(int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasAppConfigTreatmentIDInteger:(BOOL)arg1 ;
-(BOOL)hasAppConfigTreatmentIDInteger;
-(BOOL)hasContentStoreFrontID;
-(void)setHasOnboardingVersion:(BOOL)arg1 ;
-(BOOL)hasOnboardingVersion;
-(BOOL)hasClickThroughRateByPersonalizationFeatureIDData;
-(void)setIsBundleSubscriber:(BOOL)arg1 ;
-(void)setHasIsBundleSubscriber:(BOOL)arg1 ;
-(BOOL)hasIsBundleSubscriber;
-(BOOL)hasBundleIap;
-(NSString *)todaySourceIdentifier;
-(long long)appConfigTreatmentIDInteger;
-(BOOL)isBundleSubscriber;
-(void)setHasReachabilityStatus:(BOOL)arg1 ;
-(NSString *)userID;
-(NSData *)clickThroughRateByPersonalizationFeatureIDData;
-(NSString *)bundleIap;
-(void)setWifiReachable:(BOOL)arg1 ;
-(long long*)userSegmentationTreatmentIds;
-(BOOL)hasReachabilityStatus;
-(void)mergeFrom:(id)arg1 ;
-(NTPBTodayWidgetConfig *)widgetConfig;
-(BOOL)hasLocaleIdentifier;
-(void)setWidgetConfig:(NTPBTodayWidgetConfig *)arg1 ;
-(void)setReachabilityStatus:(long long)arg1 ;
-(id)description;
-(int*)userSegmentationSegmentSetIds;
-(NSString *)contentStoreFrontID;
-(BOOL)hasWifiReachable;
-(void)clearUserSegmentationSegmentSetIds;
-(BOOL)hasWidgetConfig;
-(BOOL)wifiReachable;
-(void)clearUserSegmentationTreatmentIds;
-(unsigned long long)hash;
-(long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)userSegmentationTreatmentIdsCount;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)userSegmentationSegmentSetIdsCount;
-(void)setHasWifiReachable:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUserSegmentationTreatmentIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)reachabilityStatus;
-(void)setOnboardingVersion:(long long)arg1 ;
-(void)addUserSegmentationTreatmentIds:(long long)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)addUserSegmentationSegmentSetIds:(int)arg1 ;
-(long long)onboardingVersion;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

