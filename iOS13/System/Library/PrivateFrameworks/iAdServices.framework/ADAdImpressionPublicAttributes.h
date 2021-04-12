/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {

	BOOL _unbranded;
	BOOL _hasAction;
	BOOL _requiresMRAID;
	BOOL _adLibManagedVideo;
	NSString* _batchResponseIdentifier;
	NSString* _accessibilityLabel;
	double _skipThreshold;
	double _minimumIntervalBetweenPresentations;
	NSArray* _videoAssets;
	NSDictionary* _mediaAsset;
	NSString* _uniqueIdentifier;
	NSArray* _adSpecCreativeSizes;
	NSURL* _audioURL;
	NSURL* _staticImageURL;
	NSURL* _logoImageURL;
	NSString* _headlineForLCD;
	NSString* _descriptionForLCD;
	NSArray* _nativeMetadata;
	NSDictionary* _transparencyDetails;
	NSDictionary* _nativeMediaCreativeMetadata;
	double _portraitWidth;
	double _portraitHeight;
	double _landscapeWidth;
	double _landscapeHeight;
	NSURL* _contentURL;
	NSString* _contentString;
	double _containerWidth;
	double _containerHeight;
	long long _maximumPretapRequestCount;
	NSArray* _matchClauses;
	NSArray* _excludeTags;
	long long _adPrivacyMarkPosition;

}

@property (assign,nonatomic) BOOL unbranded;                                          //@synthesize unbranded=_unbranded - In the implementation block
@property (nonatomic,copy) NSString * batchResponseIdentifier;                        //@synthesize batchResponseIdentifier=_batchResponseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                             //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (assign,nonatomic) double skipThreshold;                                    //@synthesize skipThreshold=_skipThreshold - In the implementation block
@property (assign,nonatomic) double minimumIntervalBetweenPresentations;              //@synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations - In the implementation block
@property (nonatomic,retain) NSArray * videoAssets;                                   //@synthesize videoAssets=_videoAssets - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaAsset;                               //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * adSpecCreativeSizes;                           //@synthesize adSpecCreativeSizes=_adSpecCreativeSizes - In the implementation block
@property (assign,nonatomic) BOOL hasAction;                                          //@synthesize hasAction=_hasAction - In the implementation block
@property (nonatomic,retain) NSURL * audioURL;                                        //@synthesize audioURL=_audioURL - In the implementation block
@property (nonatomic,retain) NSURL * staticImageURL;                                  //@synthesize staticImageURL=_staticImageURL - In the implementation block
@property (nonatomic,retain) NSURL * logoImageURL;                                    //@synthesize logoImageURL=_logoImageURL - In the implementation block
@property (nonatomic,copy) NSString * headlineForLCD;                                 //@synthesize headlineForLCD=_headlineForLCD - In the implementation block
@property (nonatomic,copy) NSString * descriptionForLCD;                              //@synthesize descriptionForLCD=_descriptionForLCD - In the implementation block
@property (nonatomic,retain) NSArray * nativeMetadata;                                //@synthesize nativeMetadata=_nativeMetadata - In the implementation block
@property (nonatomic,retain) NSDictionary * transparencyDetails;                      //@synthesize transparencyDetails=_transparencyDetails - In the implementation block
@property (nonatomic,retain) NSDictionary * nativeMediaCreativeMetadata;              //@synthesize nativeMediaCreativeMetadata=_nativeMediaCreativeMetadata - In the implementation block
@property (assign,nonatomic) double portraitWidth;                                    //@synthesize portraitWidth=_portraitWidth - In the implementation block
@property (assign,nonatomic) double portraitHeight;                                   //@synthesize portraitHeight=_portraitHeight - In the implementation block
@property (assign,nonatomic) double landscapeWidth;                                   //@synthesize landscapeWidth=_landscapeWidth - In the implementation block
@property (assign,nonatomic) double landscapeHeight;                                  //@synthesize landscapeHeight=_landscapeHeight - In the implementation block
@property (nonatomic,retain) NSURL * contentURL;                                      //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,retain) NSString * contentString;                                //@synthesize contentString=_contentString - In the implementation block
@property (assign,nonatomic) double containerWidth;                                   //@synthesize containerWidth=_containerWidth - In the implementation block
@property (assign,nonatomic) double containerHeight;                                  //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) BOOL requiresMRAID;                                      //@synthesize requiresMRAID=_requiresMRAID - In the implementation block
@property (assign,nonatomic) long long maximumPretapRequestCount;                     //@synthesize maximumPretapRequestCount=_maximumPretapRequestCount - In the implementation block
@property (assign,nonatomic) BOOL adLibManagedVideo;                                  //@synthesize adLibManagedVideo=_adLibManagedVideo - In the implementation block
@property (nonatomic,retain) NSArray * matchClauses;                                  //@synthesize matchClauses=_matchClauses - In the implementation block
@property (nonatomic,retain) NSArray * excludeTags;                                   //@synthesize excludeTags=_excludeTags - In the implementation block
@property (assign,nonatomic) long long adPrivacyMarkPosition;                         //@synthesize adPrivacyMarkPosition=_adPrivacyMarkPosition - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(void)setContentString:(NSString *)arg1 ;
-(NSString *)contentString;
-(NSURL *)audioURL;
-(NSURL *)logoImageURL;
-(NSDictionary *)mediaAsset;
-(NSURL *)staticImageURL;
-(void)setAudioURL:(NSURL *)arg1 ;
-(void)setLandscapeWidth:(double)arg1 ;
-(void)setLandscapeHeight:(double)arg1 ;
-(void)setPortraitWidth:(double)arg1 ;
-(void)setPortraitHeight:(double)arg1 ;
-(BOOL)requiresMRAID;
-(long long)adPrivacyMarkPosition;
-(BOOL)adLibManagedVideo;
-(NSArray *)nativeMetadata;
-(double)skipThreshold;
-(NSDictionary *)transparencyDetails;
-(NSArray *)videoAssets;
-(BOOL)unbranded;
-(NSArray *)adSpecCreativeSizes;
-(void)setContainerWidth:(double)arg1 ;
-(void)setContainerHeight:(double)arg1 ;
-(double)containerWidth;
-(double)containerHeight;
-(NSArray *)matchClauses;
-(NSArray *)excludeTags;
-(double)portraitWidth;
-(double)portraitHeight;
-(double)landscapeWidth;
-(double)landscapeHeight;
-(NSString *)batchResponseIdentifier;
-(void)setAdLibManagedVideo:(BOOL)arg1 ;
-(double)minimumIntervalBetweenPresentations;
-(long long)maximumPretapRequestCount;
-(NSString *)headlineForLCD;
-(NSString *)descriptionForLCD;
-(NSDictionary *)nativeMediaCreativeMetadata;
-(void)setUnbranded:(BOOL)arg1 ;
-(void)setBatchResponseIdentifier:(NSString *)arg1 ;
-(void)setSkipThreshold:(double)arg1 ;
-(void)setMinimumIntervalBetweenPresentations:(double)arg1 ;
-(void)setVideoAssets:(NSArray *)arg1 ;
-(void)setMediaAsset:(NSDictionary *)arg1 ;
-(void)setAdSpecCreativeSizes:(NSArray *)arg1 ;
-(void)setStaticImageURL:(NSURL *)arg1 ;
-(void)setLogoImageURL:(NSURL *)arg1 ;
-(void)setHeadlineForLCD:(NSString *)arg1 ;
-(void)setDescriptionForLCD:(NSString *)arg1 ;
-(void)setNativeMetadata:(NSArray *)arg1 ;
-(void)setTransparencyDetails:(NSDictionary *)arg1 ;
-(void)setNativeMediaCreativeMetadata:(NSDictionary *)arg1 ;
-(void)setRequiresMRAID:(BOOL)arg1 ;
-(void)setMaximumPretapRequestCount:(long long)arg1 ;
-(void)setMatchClauses:(NSArray *)arg1 ;
-(void)setExcludeTags:(NSArray *)arg1 ;
-(void)setAdPrivacyMarkPosition:(long long)arg1 ;
@end

