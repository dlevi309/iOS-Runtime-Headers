/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCReportingIdentityPropertiesLoading;
@class NSString, MPModelGenericObject, NSNumber, NSData, MPModelPlayEvent;

@interface MPCReportingPlaybackEventSource : NSObject {

	BOOL _shouldReportPlayEventsToStore;
	id<MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
	long long _equivalencySourceAdamID;
	double _eventDuration;
	unsigned long long _overrideItemType;
	NSString* _lyricsID;
	MPModelGenericObject* _itemGenericObject;
	NSNumber* _privateListeningEnabled;
	NSNumber* _siriInitiated;
	NSData* _trackInfo;
	MPModelPlayEvent* _modelPlayEvent;
	NSString* _featureName;
	NSData* _jingleTimedMetadata;
	NSData* _recommendationData;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;

}

@property (nonatomic,retain) id<MPCReportingIdentityPropertiesLoading> identityPropertiesLoader;              //@synthesize identityPropertiesLoader=_identityPropertiesLoader - In the implementation block
@property (assign,nonatomic) long long equivalencySourceAdamID;                                               //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (assign,nonatomic) double eventDuration;                                                            //@synthesize eventDuration=_eventDuration - In the implementation block
@property (assign,nonatomic) unsigned long long overrideItemType;                                             //@synthesize overrideItemType=_overrideItemType - In the implementation block
@property (nonatomic,copy) NSString * lyricsID;                                                               //@synthesize lyricsID=_lyricsID - In the implementation block
@property (nonatomic,retain) MPModelGenericObject * itemGenericObject;                                        //@synthesize itemGenericObject=_itemGenericObject - In the implementation block
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled;               //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (getter=isSiriInitiated,nonatomic,copy) NSNumber * siriInitiated;                                   //@synthesize siriInitiated=_siriInitiated - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPlayEventsToStore;                                              //@synthesize shouldReportPlayEventsToStore=_shouldReportPlayEventsToStore - In the implementation block
@property (nonatomic,copy) NSData * trackInfo;                                                                //@synthesize trackInfo=_trackInfo - In the implementation block
@property (nonatomic,retain) MPModelPlayEvent * modelPlayEvent;                                               //@synthesize modelPlayEvent=_modelPlayEvent - In the implementation block
@property (nonatomic,copy) NSString * featureName;                                                            //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy) NSData * jingleTimedMetadata;                                                      //@synthesize jingleTimedMetadata=_jingleTimedMetadata - In the implementation block
@property (nonatomic,copy) NSData * recommendationData;                                                       //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleIdentifier;                                             //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleVersion;                                                //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
-(id)init;
-(NSString *)featureName;
-(double)eventDuration;
-(void)setEventDuration:(double)arg1 ;
-(MPModelPlayEvent *)modelPlayEvent;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(BOOL)shouldReportPlayEventsToStore;
-(long long)equivalencySourceAdamID;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(id)isPrivateListeningEnabled;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(NSString *)lyricsID;
-(void)setLyricsID:(NSString *)arg1 ;
-(NSData *)recommendationData;
-(NSData *)trackInfo;
-(id)isSiriInitiated;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setSiriInitiated:(NSNumber *)arg1 ;
-(NSData *)jingleTimedMetadata;
-(void)setIdentityPropertiesLoader:(id<MPCReportingIdentityPropertiesLoading>)arg1 ;
-(void)setItemGenericObject:(MPModelGenericObject *)arg1 ;
-(void)setModelPlayEvent:(MPModelPlayEvent *)arg1 ;
-(id<MPCReportingIdentityPropertiesLoading>)identityPropertiesLoader;
-(MPModelGenericObject *)itemGenericObject;
-(unsigned long long)overrideItemType;
-(id)initWithAVItem:(id)arg1 ;
-(void)setOverrideItemType:(unsigned long long)arg1 ;
-(void)setShouldReportPlayEventsToStore:(BOOL)arg1 ;
-(void)setJingleTimedMetadata:(NSData *)arg1 ;
@end

