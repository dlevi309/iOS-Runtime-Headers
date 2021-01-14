/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestPet.h>

@class NSSet, NSMutableSet, NSString;

@interface PGPet : NSObject <PGGraphIngestPet> {

	NSMutableSet* _momentNodes;
	NSMutableSet* _ownerNodes;

}

@property (nonatomic,readonly) NSMutableSet * momentNodes;              //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * ownerNodes;               //@synthesize ownerNodes=_ownerNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)momentNodes;
-(NSMutableSet *)ownerNodes;
-(id)initWithMomentNodes:(id)arg1 ownerNodes:(id)arg2 ;
@end

