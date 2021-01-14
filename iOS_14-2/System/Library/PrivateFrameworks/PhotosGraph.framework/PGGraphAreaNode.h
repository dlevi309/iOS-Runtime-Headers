/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocationOrArea.h>
#import <libobjc.A.dylib/PGGraphLocationNaming.h>
#import <libobjc.A.dylib/PGGraphLocationCoordinates.h>

@class NSString, PGGraphLocationNode;

@interface PGGraphAreaNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates> {

	unsigned _isBlacklisted : 1;
	NSString* _name;
	CLLocationCoordinate2D _centroidCoordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D centroidCoordinate;                  //@synthesize centroidCoordinate=_centroidCoordinate - In the implementation block
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isBlacklisted;                                         //@synthesize isBlacklisted=_isBlacklisted - In the implementation block
@property (readonly) NSString * fullname; 
@property (readonly) PGGraphLocationNode * stateOrBiggerParentLocationNode; 
@property (readonly) NSString * shortenedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(unsigned short)domain;
-(NSString *)name;
-(CLLocationCoordinate2D)centroidCoordinate;
-(NSString *)description;
-(BOOL)diameterIsLargerThanDiameter:(double)arg1 ;
-(NSString *)fullname;
-(void)setLocalProperties:(id)arg1 ;
-(void)setCentroidCoordinate:(CLLocationCoordinate2D)arg1 ;
-(NSString *)shortenedName;
-(id)propertyDictionary;
-(void)setName:(NSString *)arg1 ;
-(PGGraphLocationNode *)stateOrBiggerParentLocationNode;
-(BOOL)isBlacklisted;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)addressNodes;
-(id)label;
-(void)setIsBlacklisted:(BOOL)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
@end

