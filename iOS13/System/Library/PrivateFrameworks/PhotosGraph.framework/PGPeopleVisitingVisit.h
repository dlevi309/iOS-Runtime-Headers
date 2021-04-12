/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableArray, PGGraphNode, NSArray;

@interface PGPeopleVisitingVisit : NSObject {

	NSMutableArray* _momentNodes;
	BOOL _hasVeryCloseMoments;
	PGGraphNode* _addressNode;

}

@property (readonly) PGGraphNode * addressNode;                   //@synthesize addressNode=_addressNode - In the implementation block
@property (readonly) NSArray * momentNodes;                       //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) BOOL isValid; 
@property (readonly) BOOL matchesFarVisitCriteria; 
@property (readonly) BOOL matchesCloseVisitCriteria; 
-(id)description;
-(BOOL)isValid;
-(NSArray *)momentNodes;
-(PGGraphNode *)addressNode;
-(BOOL)matchesFarVisitCriteria;
-(void)addMomentNode:(id)arg1 isVeryClose:(BOOL)arg2 ;
-(id)initWithAddressNode:(id)arg1 ;
-(BOOL)matchesCloseVisitCriteria;
@end

