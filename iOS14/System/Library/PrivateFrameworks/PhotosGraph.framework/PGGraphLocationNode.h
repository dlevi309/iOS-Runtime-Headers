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

@class NSString;

@interface PGGraphLocationNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates> {

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
-(id)associatedNodesForRemoval;
-(CLLocationCoordinate2D)coordinate;
-(CLLocationCoordinate2D)centroidCoordinate;
-(NSString *)fullname;
-(void)setCentroidCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)addressNodes;
-(id)keywordDescription;
-(PGGraphLocationNode *)densestCloseLocationNode;
-(unsigned long long)locationMask;
-(id)anyAddressNode;
-(id)parentLocationNodeWithLabel:(id)arg1 ;
-(id)childLocationNodesWithLabel:(id)arg1 ;
-(void)enumerateChildLocationNodesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)deepParentLocationNodes;
@end

