/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString, NSSet;

@interface PGGraphMusicTrackNode : PGGraphOptimizedNode {

	NSString* _title;
	double _durationInSeconds;

}

@property (nonatomic,readonly) NSSet * albumNodes; 
@property (nonatomic,readonly) NSSet * genreNodes; 
@property (nonatomic,readonly) NSSet * artistNodes; 
@property (readonly) double durationInSeconds;                   //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
+(id)musicTrackTitleSortDescriptors;
-(id)init;
-(unsigned short)domain;
-(id)description;
-(double)durationInSeconds;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(NSString *)title;
-(BOOL)hasProperties:(id)arg1 ;
-(void)enumerateAlbumNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateGenreNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateArtistNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)albumNodes;
-(NSSet *)genreNodes;
-(NSSet *)artistNodes;
@end

