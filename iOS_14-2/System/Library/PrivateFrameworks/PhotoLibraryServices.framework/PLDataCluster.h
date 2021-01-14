/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLDataCluster : NSObject {

	NSArray* _objects;
	double _diameter;
	id _clustroid;
	double _score;

}

@property (nonatomic,retain) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) double diameter;                //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) id clustroid;                   //@synthesize clustroid=_clustroid - In the implementation block
@property (assign,nonatomic) double score;                   //@synthesize score=_score - In the implementation block
+(id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3 ;
+(id)clusterWithObjects:(id)arg1 ;
-(id)locations;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(id)universalDates;
-(id)init;
-(double)score;
-(void)setClustroid:(id)arg1 ;
-(id)approximateRegionWithMaximumRadius:(double)arg1 ;
-(void)setScore:(double)arg1 ;
-(id)meanRegion:(double)arg1 ;
-(id)description;
-(double)diameter;
-(id)meanUniversalDate;
-(void)setDiameter:(double)arg1 ;
-(id)clustroid;
@end

