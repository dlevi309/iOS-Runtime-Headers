/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

