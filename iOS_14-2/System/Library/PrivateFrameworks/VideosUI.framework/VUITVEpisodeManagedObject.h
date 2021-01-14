/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIVideoManagedObject.h>

@class NSNumber, VUITVSeasonManagedObject, VUITVSeriesManagedObject;

@interface VUITVEpisodeManagedObject : VUIVideoManagedObject

@property (nonatomic,copy) NSNumber * episodeNumberInSeason; 
@property (nonatomic,copy) NSNumber * episodeNumberInSeries; 
@property (nonatomic,retain) VUITVSeasonManagedObject * season; 
@property (nonatomic,retain) VUITVSeriesManagedObject * series; 
+(id)fetchRequest;
@end

