/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSNumber, NSString;

@interface VUISettingsManager : NSObject {

	NSNumber* _maxMovieRank;
	NSNumber* _maxTVShowRank;
	NSString* _preferredVideoFormat;

}

@property (nonatomic,readonly) NSString * restrictions; 
@property (nonatomic,copy) NSString * preferredVideoFormat;                                              //@synthesize preferredVideoFormat=_preferredVideoFormat - In the implementation block
@property (nonatomic,copy) NSNumber * maxMovieRank;                                                      //@synthesize maxMovieRank=_maxMovieRank - In the implementation block
@property (nonatomic,copy) NSNumber * maxTVShowRank;                                                     //@synthesize maxTVShowRank=_maxTVShowRank - In the implementation block
@property (getter=isAppInstallationAllowed,nonatomic,readonly) BOOL appInstallationAllowed; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSString *)restrictions;
-(BOOL)isAppInstallationAllowed;
-(NSNumber *)maxMovieRank;
-(NSNumber *)maxTVShowRank;
-(NSString *)preferredVideoFormat;
-(id)_formatStringForVideoFormat:(unsigned long long)arg1 ;
-(id)_restrictionsMaximumEffectiveMovieRanking;
-(id)_restrictionsMaximumEffectiveTVShowRanking;
-(unsigned long long)_preferredVideoFormat;
-(BOOL)_hasRestrictionsChanged;
-(BOOL)_hasPreferredVideoFormatChanged;
-(void)_sendSettingsValuesToJS;
-(id)preferencesJSONData;
-(void)checkAndUpdateSettings;
-(void)setMaxMovieRank:(NSNumber *)arg1 ;
-(void)setMaxTVShowRank:(NSNumber *)arg1 ;
-(void)setPreferredVideoFormat:(NSString *)arg1 ;
@end

