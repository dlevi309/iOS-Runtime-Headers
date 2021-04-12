/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphLocationNaming.h>
#import <libobjc.A.dylib/PGGraphLocationCoordinates.h>

@class NSString;

@interface PGGraphLocationNode : PGGraphNode <PGGraphLocationNaming, PGGraphLocationCoordinates> {

	PGGraphLocationNode* _densestCloseLocationNode;
	CLLocationCoordinate2D _centroidCoordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D centroidCoordinate;                  //@synthesize centroidCoordinate=_centroidCoordinate - In the implementation block
@property (readonly) NSString * fullname; 
@property (__weak,readonly) PGGraphLocationNode * densestCloseLocationNode;              //@synthesize densestCloseLocationNode=_densestCloseLocationNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocationCoordinate2D)coordinate;
-(NSString *)fullname;
-(id)associatedNodesForRemoval;
-(id)addressNodes;
-(id)keywordDescription;
-(CLLocationCoordinate2D)centroidCoordinate;
-(void)setCentroidCoordinate:(CLLocationCoordinate2D)arg1 ;
-(PGGraphLocationNode *)densestCloseLocationNode;
-(unsigned long long)locationMask;
-(id)anyAddressNode;
-(id)parentLocationNodeWithLabel:(id)arg1 ;
-(id)childLocationNodesWithLabel:(id)arg1 ;
-(void)enumerateChildLocationNodesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)deepParentLocationNodes;
@end

