/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSRestrictions.h>

@protocol IKJSRestrictions <JSExport>
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsErotica; 
@required
-(id)maxMovieRatingForCountry:(id)arg1;
-(id)maxTVShowRatingForCountry:(id)arg1;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
-(BOOL)allowsExplicit;
-(BOOL)allowsErotica;

@end

#import <libobjc.A.dylib/_IKJSRestrictionsProxy.h>
#import <libobjc.A.dylib/_IKJSRestrictions.h>

@class NSString;

@interface IKJSRestrictions : IKJSObject <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy, _IKJSRestrictions>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsErotica; 
@property (nonatomic,readonly) long long maxAppRank; 
@property (nonatomic,readonly) BOOL allowArtistActivity; 
@property (nonatomic,readonly) NSString * maxAppRating; 
@property (nonatomic,readonly) BOOL appInstallationAllowed; 
@property (nonatomic,readonly) BOOL appAnalyticsAllowed; 
@property (nonatomic,readonly) BOOL allowsITunes; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedTVShows; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedMovies; 
+(id)restrictionsDidChangeNotificationName;
-(BOOL)appAnalyticsAllowed;
-(id)maxMovieRatingForCountry:(id)arg1 ;
-(id)maxTVShowRatingForCountry:(id)arg1 ;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
-(BOOL)allowsExplicit;
-(BOOL)allowsErotica;
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(NSString *)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)allowsITunes;
-(BOOL)allowsShowingUndownloadedTVShows;
-(BOOL)allowsShowingUndownloadedMovies;
-(id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3 ;
-(id)_contentRestrictionsCountryCode;
-(id)asPrivateIKJSRestrictions;
@end

