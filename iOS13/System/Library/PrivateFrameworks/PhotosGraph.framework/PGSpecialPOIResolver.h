/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_nameBySpecialPOI;
+(id)_regionsBySpecialPOI;
+(BOOL)specialPOIContainsCoordinate:(CLLocationCoordinate2D)arg1 ;
+(unsigned long long)specialPOIsContainingCoordinate:(CLLocationCoordinate2D)arg1 ;
+(BOOL)specialPOINameIsInString:(id)arg1 ;
+(unsigned long long)specialPOIsWithNameInString:(id)arg1 ;
-(NSArray *)momentNodes;
-(id)initWithMomentNodes:(id)arg1 ;
-(BOOL)anyMomentContainsSpecialPOI:(unsigned long long)arg1 ;
-(BOOL)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2 ;
-(unsigned long long)specialPOIsInAnyMoment;
-(unsigned long long)specialPOIsWithMomentRatio:(double)arg1 ;
-(BOOL)anyMomentHasPOIAmusementPark;
-(unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2 ;
-(NSMutableDictionary *)countBySpecialPOI;
-(void)setCountBySpecialPOI:(NSMutableDictionary *)arg1 ;
@end

