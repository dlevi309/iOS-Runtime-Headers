/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphLocationNode.h>
#import <libobjc.A.dylib/PGGraphPortraitLocationNamedEntity.h>

@class PPLocationNamedEntities, NSString;

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PPLocationNamedEntities * pg_locationNamedEntity; 
-(CLLocationCoordinate2D)coordinate;
-(id)UUID;
-(id)location;
-(BOOL)isOcean;
-(id)momentNodes;
-(id)stateNode;
-(PPLocationNamedEntities *)pg_locationNamedEntity;
-(void)enumerateAreaNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)areaNodes;
-(id)streetNode;
-(id)districtNode;
-(id)cityNode;
-(id)countryNode;
-(void)addressEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)locationIsImproved;
-(BOOL)isPersonHomeOrWorkAddress;
-(void)enumeratePersonHomeOrWorkNodesUsingBlock:(/*^block*/id)arg1 ;
@end

