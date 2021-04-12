/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSSet, NSNumber, NSString;

@interface PGGraphMusicTrackNode : PGGraphNode

@property (nonatomic,readonly) NSSet * albumNodes; 
@property (nonatomic,readonly) NSSet * genreNodes; 
@property (nonatomic,readonly) NSSet * artistNodes; 
@property (nonatomic,readonly) NSNumber * durationInSeconds; 
@property (nonatomic,readonly) NSString * title; 
+(id)musicTrackTitleSortDescriptors;
-(id)description;
-(NSString *)title;
-(NSNumber *)durationInSeconds;
-(void)enumerateAlbumNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateGenreNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateArtistNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)albumNodes;
-(NSSet *)genreNodes;
-(NSSet *)artistNodes;
@end

