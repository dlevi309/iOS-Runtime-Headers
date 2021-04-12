/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphROINode, NSArray, NSDate, NSString;

@interface PGPotentialRegionMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphROINode* _regionNode;
	long long _year;
	NSArray* _scenedAssetLocalIdentifiers;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphROINode * regionNode;                      //@synthesize regionNode=_regionNode - In the implementation block
@property (readonly) long long year;                                   //@synthesize year=_year - In the implementation block
@property (readonly) NSString * region; 
@property (retain) NSArray * scenedAssetLocalIdentifiers;              //@synthesize scenedAssetLocalIdentifiers=_scenedAssetLocalIdentifiers - In the implementation block
@property (retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
-(long long)year;
-(NSDate *)endDate;
-(NSString *)region;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithRegionNode:(id)arg1 year:(long long)arg2 ;
-(PGGraphROINode *)regionNode;
-(NSArray *)scenedAssetLocalIdentifiers;
-(void)setScenedAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

