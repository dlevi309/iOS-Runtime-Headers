/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAppInstallationAllowed;
-(id)init;
-(unsigned long long)_preferredVideoFormat;
-(void)setPreferredVideoFormat:(NSString *)arg1 ;
-(NSString *)restrictions;
-(id)_init;
-(NSString *)preferredVideoFormat;
-(id)_restrictionsMaximumEffectiveMovieRanking;
-(id)_restrictionsMaximumEffectiveTVShowRanking;
-(id)_formatStringForVideoFormat:(unsigned long long)arg1 ;
-(BOOL)_hasRestrictionsChanged;
-(BOOL)_hasPreferredVideoFormatChanged;
-(void)_sendSettingsValuesToJS;
-(NSNumber *)maxMovieRank;
-(NSNumber *)maxTVShowRank;
-(id)preferencesJSONData;
-(void)checkAndUpdateSettings;
-(void)setMaxMovieRank:(NSNumber *)arg1 ;
-(void)setMaxTVShowRank:(NSNumber *)arg1 ;
@end

