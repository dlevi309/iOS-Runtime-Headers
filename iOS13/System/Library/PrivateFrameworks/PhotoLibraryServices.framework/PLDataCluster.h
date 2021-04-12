/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)clusterWithObjects:(id)arg1 ;
+(id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3 ;
-(id)init;
-(id)description;
-(double)score;
-(NSArray *)objects;
-(void)setScore:(double)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
-(id)locations;
-(id)approximateRegionWithMaximumRadius:(double)arg1 ;
-(void)setClustroid:(id)arg1 ;
-(id)meanRegion:(double)arg1 ;
-(id)universalDates;
-(id)meanUniversalDate;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(id)clustroid;
@end

