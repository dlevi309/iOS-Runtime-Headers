/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphLocationNode.h>
#import <libobjc.A.dylib/PGGraphPortraitLocationNamedEntity.h>

@class PPLocationNamedEntities, NSString, CLLocation;

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity> {

	long long _locationMode;
	NSString* _name;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) PPLocationNamedEntities * pg_locationNamedEntity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long locationMode; 
@property (nonatomic,readonly) BOOL isImproved; 
@property (nonatomic,readonly) BOOL isOcean; 
@property (nonatomic,readonly) BOOL isCoarse; 
@property (nonatomic,readonly) BOOL isPrecise; 
@property (nonatomic,readonly) CLLocation * location; 
+(id)filter;
+(id)homeOfAddress;
+(id)workOfAddress;
+(id)homeWorkOfAddress;
+(id)cityOfAddress;
-(id)UUID;
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(CLLocation *)location;
-(unsigned short)domain;
-(NSString *)name;
-(NSString *)description;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)cityNode;
-(void)setLocalProperties:(id)arg1 ;
-(id)districtNode;
-(id)areaNodes;
-(BOOL)isCoarse;
-(void)enumeratePersonHomeOrWorkNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isPersonHomeOrWorkAddress;
-(BOOL)isPrecise;
-(id)propertyDictionary;
-(id)countryNode;
-(long long)locationMode;
-(id)momentNodes;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isOcean;
-(PPLocationNamedEntities *)pg_locationNamedEntity;
-(BOOL)isImproved;
-(id)stateNode;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAreaNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)streetNode;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

