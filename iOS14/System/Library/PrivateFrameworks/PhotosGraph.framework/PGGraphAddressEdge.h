/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedEdge.h>

@class NSDate, CLLocation;

@interface PGGraphAddressEdge : PGGraphOptimizedEdge {

	float _weight;
	double _timestampUTCStart;
	double _timestampUTCEnd;
	CLLocationCoordinate2D _photoCoordinate;

}

@property (nonatomic,retain) NSDate * universalStartDate; 
@property (nonatomic,retain) NSDate * universalEndDate; 
@property (assign,nonatomic) CLLocationCoordinate2D photoCoordinate;              //@synthesize photoCoordinate=_photoCoordinate - In the implementation block
@property (nonatomic,retain) CLLocation * photoLocation; 
@property (nonatomic,readonly) double timestampUTCStart;                          //@synthesize timestampUTCStart=_timestampUTCStart - In the implementation block
@property (nonatomic,readonly) double timestampUTCEnd;                            //@synthesize timestampUTCEnd=_timestampUTCEnd - In the implementation block
+(id)filter;
-(double)timestampUTCStart;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(NSDate *)universalEndDate;
-(double)timestampUTCEnd;
-(NSDate *)universalStartDate;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(unsigned short)domain;
-(CLLocation *)photoLocation;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(void)setPhotoLocation:(CLLocation *)arg1 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 fromMomentNode:(id)arg2 toAddressNode:(id)arg3 weight:(float)arg4 ;
-(id)propertyDictionary;
-(id)label;
-(CLLocationCoordinate2D)photoCoordinate;
-(BOOL)hasProperties:(id)arg1 ;
-(void)setPhotoCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

