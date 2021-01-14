/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@protocol PLMomentProtocol;
@class NSDateInterval, NSArray, NSMutableArray, NSSet, NSString;

@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol> {

	NSMutableArray* _sortedMoments;
	NSDateInterval* _dateInterval;
	NSSet* _momentsSet;
	id<PLMomentProtocol> _centroid;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,retain) NSMutableArray * sortedMoments;                 //@synthesize sortedMoments=_sortedMoments - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateInterval;                  //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSSet * momentsSet;                             //@synthesize momentsSet=_momentsSet - In the implementation block
@property (nonatomic,retain) id<PLMomentProtocol> centroid;                  //@synthesize centroid=_centroid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id<PLMomentProtocol>)centroid;
-(NSSet *)momentsSet;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)isWithinDistance:(double)arg1 toCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)setCentroid:(id<PLMomentProtocol>)arg1 ;
-(id)initWithSortedMoments:(id)arg1 ;
-(NSString *)description;
-(BOOL)isSimilarToFrequentLocation:(id)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)addMomentToSortedMoment:(id)arg1 ;
-(void)setSortedMoments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sortedMoments;
-(void)_invalidateLazyProperties;
-(void)setMomentsSet:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

