/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

@class NSString, NSURL, NTPBDiscoverMoreVideosInfo;


@protocol NTSectionDisplayDescriptor <NSCopying>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameColor; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,readonly) BOOL displaysAsVideoPlaylist; 
@property (nonatomic,readonly) BOOL useNameColorInWidget; 
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo; 
@property (nonatomic,copy,readonly) NSString * backgroundGradientColor; 
@property (nonatomic,readonly) BOOL videoPlaysMutedByDefault; 
@required
-(NSString *)name;
-(NSURL *)actionURL;
-(NSString *)actionTitle;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(BOOL)displaysAsVideoPlaylist;
-(NSString *)nameColor;
-(NSString *)backgroundGradientColor;
-(BOOL)videoPlaysMutedByDefault;
-(BOOL)useNameColorInWidget;

@end

