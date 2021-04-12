/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@interface VUIRestrictions : NSObject

@property (nonatomic,readonly) BOOL allowsShowingUndownloadedTVShows; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedMovies; 
@property (nonatomic,readonly) BOOL allowsDAUMetricCollection; 
+(id)sharedInstance;
-(BOOL)allowsShowingUndownloadedTVShows;
-(BOOL)allowsShowingUndownloadedMovies;
-(BOOL)allowsDAUMetricCollection;
@end

