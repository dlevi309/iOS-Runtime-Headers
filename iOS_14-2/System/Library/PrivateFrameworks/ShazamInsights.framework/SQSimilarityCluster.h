/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
*/


@class NSArray, NSString;

@interface SQSimilarityCluster : NSObject {

	long long _clusterType;
	NSArray* _mediaItems;
	NSString* _clusterID;
	NSArray* _genres;
	long long _cohesionLevel;

}

@property (assign,nonatomic) long long clusterType;                //@synthesize clusterType=_clusterType - In the implementation block
@property (nonatomic,retain) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                   //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSArray * genres;                       //@synthesize genres=_genres - In the implementation block
@property (assign,nonatomic) long long cohesionLevel;              //@synthesize cohesionLevel=_cohesionLevel - In the implementation block
+(id)clusterOfType:(long long)arg1 ;
-(long long)clusterType;
-(NSArray *)genres;
-(void)setClusterID:(NSString *)arg1 ;
-(void)setGenres:(NSArray *)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(NSString *)clusterID;
-(void)setClusterType:(long long)arg1 ;
-(void)appendMediaItem:(id)arg1 ;
-(void)setCohesionLevel:(long long)arg1 ;
-(long long)cohesionLevel;
@end

