/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(NSString *)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)allowsITunes;
-(BOOL)allowsShowingUndownloadedTVShows;
-(BOOL)allowsShowingUndownloadedMovies;

@end

