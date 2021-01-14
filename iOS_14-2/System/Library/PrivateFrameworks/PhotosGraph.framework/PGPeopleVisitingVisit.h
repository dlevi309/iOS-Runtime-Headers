/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableArray, PGGraphAddressNode, NSArray;

@interface PGPeopleVisitingVisit : NSObject {

	NSMutableArray* _momentNodes;
	BOOL _hasVeryCloseMoments;
	PGGraphAddressNode* _addressNode;

}

@property (readonly) PGGraphAddressNode * addressNode;              //@synthesize addressNode=_addressNode - In the implementation block
@property (readonly) NSArray * momentNodes;                         //@synthesize momentNodes=_momentNodes - In the implementation block
@property (readonly) BOOL isValid; 
@property (readonly) BOOL matchesFarVisitCriteria; 
@property (readonly) BOOL matchesCloseVisitCriteria; 
-(id)description;
-(BOOL)isValid;
-(NSArray *)momentNodes;
-(PGGraphAddressNode *)addressNode;
-(BOOL)matchesFarVisitCriteria;
-(void)addMomentNode:(id)arg1 isVeryClose:(BOOL)arg2 ;
-(id)initWithAddressNode:(id)arg1 ;
-(BOOL)matchesCloseVisitCriteria;
@end

