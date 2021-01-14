/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@interface VUIRestrictions : NSObject

@property (nonatomic,readonly) BOOL allowsShowingUndownloadedTVShows; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedMovies; 
@property (nonatomic,readonly) BOOL allowsDAUMetricCollection; 
+(id)sharedInstance;
-(BOOL)allowsShowingUndownloadedMovies;
-(BOOL)allowsShowingUndownloadedTVShows;
-(BOOL)allowsDAUMetricCollection;
@end

