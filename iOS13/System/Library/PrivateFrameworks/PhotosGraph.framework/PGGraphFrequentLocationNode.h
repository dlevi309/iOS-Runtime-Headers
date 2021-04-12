/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@class NSDateInterval, NSSet, NSString, NSDate, PGGraphAddressNode;

@interface PGGraphFrequentLocationNode : PGGraphNode <PLFrequentLocationProtocol> {

	NSDateInterval* _localDateInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CLLocationCoordinate2D coordinate; 
@property (readonly) NSDateInterval * dateInterval; 
@property (readonly) NSSet * items; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDateInterval * localDateInterval; 
@property (readonly) PGGraphAddressNode * addressNode; 
@property (readonly) NSSet * momentNodes; 
@property (readonly) unsigned long long numberOfMomentNodes; 
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(NSDateInterval *)dateInterval;
-(NSSet *)items;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSDateInterval *)localDateInterval;
-(NSSet *)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphAddressNode *)addressNode;
-(unsigned long long)numberOfMomentNodes;
@end

