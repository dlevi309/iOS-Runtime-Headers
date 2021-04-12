/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphLocationNaming.h>
#import <libobjc.A.dylib/PGGraphLocationCoordinates.h>

@class NSString, PGGraphLocationNode;

@interface PGGraphAreaNode : PGGraphNode <PGGraphLocationNaming, PGGraphLocationCoordinates> {

	CLLocationCoordinate2D _centroidCoordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D centroidCoordinate;                  //@synthesize centroidCoordinate=_centroidCoordinate - In the implementation block
@property (readonly) BOOL isBlacklisted; 
@property (readonly) NSString * fullname; 
@property (readonly) PGGraphLocationNode * stateOrBiggerParentLocationNode; 
@property (readonly) NSString * shortenedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocationCoordinate2D)coordinate;
-(BOOL)isBlacklisted;
-(NSString *)fullname;
-(id)addressNodes;
-(PGGraphLocationNode *)stateOrBiggerParentLocationNode;
-(BOOL)diameterIsLargerThanDiameter:(double)arg1 ;
-(NSString *)shortenedName;
-(CLLocationCoordinate2D)centroidCoordinate;
-(void)setCentroidCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

