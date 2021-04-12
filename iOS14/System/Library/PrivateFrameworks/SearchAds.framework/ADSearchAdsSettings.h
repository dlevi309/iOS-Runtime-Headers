/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
*/

#import <AdCore/ADSingleton.h>

@class NSURL, NSString, NSArray, ADClientSettingsResponse;

@interface ADSearchAdsSettings : ADSingleton {

	BOOL _isTest;
	BOOL _isBaseline;
	BOOL _isCustomTemplate;
	BOOL _isRequestedImage;
	BOOL _isRequestedRating;
	NSURL* _defaultToroServerURL;
	NSURL* _defaultAdTargetingServerURL;
	NSString* _algoID;
	NSArray* _userKeyboards;
	double _requestedLocationAccuracy;
	double _locationGridSpacing;
	NSString* _requestedText;
	NSString* _requestedIcon;
	NSString* _templateType;
	double _reverseGeolocationRefreshThresholdInMeters;
	double _clickExpirationThresholdInSeconds;
	double _frequencyCapExpirationInSeconds;
	unsigned long long _maxFrequencyCapElements;
	unsigned long long _maxClickCapElements;
	ADClientSettingsResponse* _clientSettings;

}

@property (nonatomic,retain) ADClientSettingsResponse * clientSettings;                      //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,retain) NSURL * defaultToroServerURL;                                   //@synthesize defaultToroServerURL=_defaultToroServerURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultAdTargetingServerURL;                            //@synthesize defaultAdTargetingServerURL=_defaultAdTargetingServerURL - In the implementation block
@property (nonatomic,retain) NSString * algoID;                                              //@synthesize algoID=_algoID - In the implementation block
@property (nonatomic,retain) NSArray * userKeyboards;                                        //@synthesize userKeyboards=_userKeyboards - In the implementation block
@property (assign,nonatomic) double requestedLocationAccuracy;                               //@synthesize requestedLocationAccuracy=_requestedLocationAccuracy - In the implementation block
@property (assign,nonatomic) double locationGridSpacing;                                     //@synthesize locationGridSpacing=_locationGridSpacing - In the implementation block
@property (assign,nonatomic) BOOL isTest;                                                    //@synthesize isTest=_isTest - In the implementation block
@property (assign,nonatomic) BOOL isBaseline;                                                //@synthesize isBaseline=_isBaseline - In the implementation block
@property (assign,nonatomic) BOOL isCustomTemplate;                                          //@synthesize isCustomTemplate=_isCustomTemplate - In the implementation block
@property (assign,nonatomic) BOOL isRequestedImage;                                          //@synthesize isRequestedImage=_isRequestedImage - In the implementation block
@property (assign,nonatomic) BOOL isRequestedRating;                                         //@synthesize isRequestedRating=_isRequestedRating - In the implementation block
@property (nonatomic,retain) NSString * requestedText;                                       //@synthesize requestedText=_requestedText - In the implementation block
@property (nonatomic,retain) NSString * requestedIcon;                                       //@synthesize requestedIcon=_requestedIcon - In the implementation block
@property (nonatomic,retain) NSString * templateType;                                        //@synthesize templateType=_templateType - In the implementation block
@property (assign,nonatomic) double reverseGeolocationRefreshThresholdInMeters;              //@synthesize reverseGeolocationRefreshThresholdInMeters=_reverseGeolocationRefreshThresholdInMeters - In the implementation block
@property (assign,nonatomic) double clickExpirationThresholdInSeconds;                       //@synthesize clickExpirationThresholdInSeconds=_clickExpirationThresholdInSeconds - In the implementation block
@property (assign,nonatomic) double frequencyCapExpirationInSeconds;                         //@synthesize frequencyCapExpirationInSeconds=_frequencyCapExpirationInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long maxFrequencyCapElements;                     //@synthesize maxFrequencyCapElements=_maxFrequencyCapElements - In the implementation block
@property (assign,nonatomic) unsigned long long maxClickCapElements;                         //@synthesize maxClickCapElements=_maxClickCapElements - In the implementation block
+(id)sharedInstance;
-(ADClientSettingsResponse *)clientSettings;
-(BOOL)isBaseline;
-(void)refresh;
-(void)setClientSettings:(ADClientSettingsResponse *)arg1 ;
-(BOOL)isTest;
-(BOOL)isRequestedRating;
-(void)setIsTest:(BOOL)arg1 ;
-(void)checkDefaultsAndSetInternalSettingsOverrides;
-(double)clientSettingsExpirationDate;
-(NSString *)algoID;
-(id)init;
-(double)frequencyCapExpirationInSeconds;
-(NSURL *)defaultToroServerURL;
-(double)clickExpirationThresholdInSeconds;
-(NSArray *)userKeyboards;
-(void)setMaxFrequencyCapElements:(unsigned long long)arg1 ;
-(BOOL)isCustomTemplate;
-(double)requestedLocationAccuracy;
-(void)restoreClientSettings;
-(void)setRequestedText:(NSString *)arg1 ;
-(void)setAlgoID:(NSString *)arg1 ;
-(void)overrideRevGeoThreshold:(double)arg1 ;
-(BOOL)isRequestedImage;
-(void)setClickExpirationThresholdInSeconds:(double)arg1 ;
-(NSURL *)defaultAdTargetingServerURL;
-(void)setReverseGeolocationRefreshThresholdInMeters:(double)arg1 ;
-(void)setFrequencyCapExpirationInSeconds:(double)arg1 ;
-(void)setIsBaseline:(BOOL)arg1 ;
-(void)setRequestedLocationAccuracy:(double)arg1 ;
-(void)setDefaultToroServerURL:(NSURL *)arg1 ;
-(void)overrideToroClickExpiration:(double)arg1 ;
-(NSString *)templateType;
-(void)setTemplateType:(NSString *)arg1 ;
-(void)setLocationGridSpacing:(double)arg1 ;
-(unsigned long long)maxFrequencyCapElements;
-(void)setIsRequestedImage:(BOOL)arg1 ;
-(NSString *)requestedIcon;
-(void)refreshClientSettings:(/*^block*/id)arg1 ;
-(void)expireClientSettings;
-(void)setUserKeyboards:(NSArray *)arg1 ;
-(void)setMaxClickCapElements:(unsigned long long)arg1 ;
-(void)overrideFrequencyCapExpiration:(double)arg1 ;
-(double)reverseGeolocationRefreshThresholdInMeters;
-(void)setIsRequestedRating:(BOOL)arg1 ;
-(void)setRequestedIcon:(NSString *)arg1 ;
-(void)overrideMaxFrequencyCapElements:(unsigned long long)arg1 ;
-(unsigned long long)maxClickCapElements;
-(void)setIsCustomTemplate:(BOOL)arg1 ;
-(double)locationGridSpacing;
-(void)overrideMaxToroClickElements:(unsigned long long)arg1 ;
-(void)applyClientSettings;
-(void)setDefaultAdTargetingServerURL:(NSURL *)arg1 ;
-(NSString *)requestedText;
@end

