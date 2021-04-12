/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLRegionsAgglomerativeClusteringDataCluster : NSObject {

	NSArray* _vectors;
	double _latitude;
	double _longitude;
	double _radius;
	double _score;

}

@property (readonly) NSArray * vectors;                     //@synthesize vectors=_vectors - In the implementation block
@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double radius;                 //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double score;                  //@synthesize score=_score - In the implementation block
+(id)dataClusterWithDataVector:(id)arg1 ;
+(id)mergedClusterFrom:(id)arg1 ;
-(id)description;
-(double)score;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setScore:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(NSArray *)vectors;
-(id)initWithDataVector:(id)arg1 ;
@end

