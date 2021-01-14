/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject {

	NSArray* _momentNodes;
	NSMutableDictionary* _countBySpecialPOI;

}

@property (nonatomic,readonly) NSArray * momentNodes;                              //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countBySpecialPOI;              //@synthesize countBySpecialPOI=_countBySpecialPOI - In the implementation block
+(id)_regionsBySpecialPOI;
+(id)_nameBySpecialPOI;
+(unsigned long long)specialPOIsWithNameInString:(id)arg1 ;
+(unsigned long long)specialPOIsContainingCoordinate:(CLLocationCoordinate2D)arg1 ;
+(BOOL)specialPOINameIsInString:(id)arg1 ;
+(BOOL)specialPOIContainsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)anyMomentContainsSpecialPOI:(unsigned long long)arg1 ;
-(NSMutableDictionary *)countBySpecialPOI;
-(unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 ;
-(BOOL)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2 ;
-(BOOL)anyMomentHasPOIAmusementPark;
-(unsigned long long)specialPOIsWithMomentRatio:(double)arg1 ;
-(void)setCountBySpecialPOI:(NSMutableDictionary *)arg1 ;
-(NSArray *)momentNodes;
-(unsigned long long)specialPOIsInAnyMoment;
@end

