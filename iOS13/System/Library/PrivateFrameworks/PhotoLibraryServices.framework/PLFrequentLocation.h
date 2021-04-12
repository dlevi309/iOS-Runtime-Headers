/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@protocol PLMomentProtocol;
@class NSDateInterval, NSSet, NSString;

@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol> {

	NSDateInterval* _dateInterval;
	id<PLMomentProtocol> _centroid;
	NSSet* _items;
	CLLocationCoordinate2D _coordinate;

}

@property (readonly) id<PLMomentProtocol> centroid;                  //@synthesize centroid=_centroid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) NSDateInterval * dateInterval;                  //@synthesize dateInterval=_dateInterval - In the implementation block
@property (readonly) NSSet * items;                                  //@synthesize items=_items - In the implementation block
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(NSDateInterval *)dateInterval;
-(NSSet *)items;
-(id<PLMomentProtocol>)centroid;
-(id)initWithDateInterval:(id)arg1 centroid:(id)arg2 items:(id)arg3 ;
-(BOOL)isSimilarToFrequentLocation:(id)arg1 ;
-(BOOL)isWithinDistance:(double)arg1 toCoordinate:(CLLocationCoordinate2D)arg2 ;
@end

