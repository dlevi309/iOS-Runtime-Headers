/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestBaby.h>

@class NSSet, NSMutableSet, NSString;

@interface PGBaby : NSObject <PGGraphIngestBaby> {

	NSMutableSet* _momentNodes;
	NSMutableSet* _caretakerNodes;

}

@property (nonatomic,readonly) NSMutableSet * momentNodes;                 //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * caretakerNodes;              //@synthesize caretakerNodes=_caretakerNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)momentNodes;
-(NSMutableSet *)caretakerNodes;
-(id)initWithMomentNodes:(id)arg1 caretakerNodes:(id)arg2 ;
@end

