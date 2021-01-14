/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString;


@protocol _IKJSRestrictions <IKJSRestrictions,JSExport>
@property (nonatomic,readonly) long long maxAppRank; 
@property (nonatomic,readonly) BOOL allowArtistActivity; 
@property (nonatomic,readonly) NSString * maxAppRating; 
@property (nonatomic,readonly) BOOL appInstallationAllowed; 
@property (nonatomic,readonly) BOOL appAnalyticsAllowed; 
@property (nonatomic,readonly) BOOL allowsITunes; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedTVShows; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedMovies; 
@required
-(BOOL)appAnalyticsAllowed;
-(BOOL)allowsShowingUndownloadedMovies;
-(BOOL)allowsShowingUndownloadedTVShows;
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(NSString *)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)allowsITunes;

@end

