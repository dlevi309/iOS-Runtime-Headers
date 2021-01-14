/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@class NSString;

@interface UpNextResult : NSObject {

	BOOL _needsUpdate;
	NSString* _episodeUuid;
	double _modifiedDate;

}

@property (nonatomic,retain) NSString * episodeUuid;              //@synthesize episodeUuid=_episodeUuid - In the implementation block
@property (assign,nonatomic) double modifiedDate;                 //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                    //@synthesize needsUpdate=_needsUpdate - In the implementation block
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(void)setModifiedDate:(double)arg1 ;
-(double)modifiedDate;
-(void)setEpisodeUuid:(NSString *)arg1 ;
-(void)updateFor:(id)arg1 ;
-(NSString *)episodeUuid;
@end

