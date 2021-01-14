/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSData, NSSet, NSNumber, NSDictionary;

@interface VNClusterObservation : VNObservation {

	NSArray* _clusters;
	NSArray* _suggestionsForCluster;
	NSData* _clusterState;
	NSSet* _clusteredFaceIds;
	NSArray* _groupedClusteredFaceIdsForCluster;
	NSNumber* _distance;
	NSDictionary* _distancesById;

}

@property (nonatomic,retain) NSArray * clusters;                                       //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,retain) NSArray * suggestionsForCluster;                          //@synthesize suggestionsForCluster=_suggestionsForCluster - In the implementation block
@property (nonatomic,retain) NSData * clusterState;                                    //@synthesize clusterState=_clusterState - In the implementation block
@property (nonatomic,retain) NSSet * clusteredFaceIds;                                 //@synthesize clusteredFaceIds=_clusteredFaceIds - In the implementation block
@property (nonatomic,retain) NSArray * groupedClusteredFaceIdsForCluster;              //@synthesize groupedClusteredFaceIdsForCluster=_groupedClusteredFaceIdsForCluster - In the implementation block
@property (nonatomic,retain) NSNumber * distance;                                      //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSDictionary * distancesById;                             //@synthesize distancesById=_distancesById - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDistance:(NSNumber *)arg1 ;
-(NSNumber *)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setClusterState:(NSData *)arg1 ;
-(NSData *)clusterState;
-(NSArray *)clusters;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClusters:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)suggestionsForCluster;
-(void)setSuggestionsForCluster:(NSArray *)arg1 ;
-(NSSet *)clusteredFaceIds;
-(NSDictionary *)distancesById;
-(void)setClusteredFaceIds:(NSSet *)arg1 ;
-(NSArray *)groupedClusteredFaceIdsForCluster;
-(void)setGroupedClusteredFaceIdsForCluster:(NSArray *)arg1 ;
-(void)setDistancesById:(NSDictionary *)arg1 ;
@end

