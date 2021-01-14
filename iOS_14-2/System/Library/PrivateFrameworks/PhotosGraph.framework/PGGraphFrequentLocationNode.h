/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@class NSDateInterval, NSArray, NSString, NSDate, PGGraphAddressNode, NSSet;

@interface PGGraphFrequentLocationNode : PGGraphOptimizedNode <PLFrequentLocationProtocol> {

	NSDateInterval* _localDateInterval;

}

@property (readonly) CLLocationCoordinate2D coordinate; 
@property (readonly) NSDateInterval * dateInterval; 
@property (readonly) NSArray * sortedMoments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDateInterval * localDateInterval;                  //@synthesize localDateInterval=_localDateInterval - In the implementation block
@property (readonly) PGGraphAddressNode * addressNode; 
@property (readonly) NSSet * momentNodes; 
@property (readonly) unsigned long long numberOfMomentNodes; 
+(id)filter;
-(NSDateInterval *)dateInterval;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(unsigned short)domain;
-(id)name;
-(NSString *)description;
-(void)setLocalProperties:(id)arg1 ;
-(unsigned long long)numberOfMomentNodes;
-(id)propertyDictionary;
-(NSSet *)momentNodes;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)sortedMoments;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(PGGraphAddressNode *)addressNode;
-(NSDateInterval *)localDateInterval;
@end

