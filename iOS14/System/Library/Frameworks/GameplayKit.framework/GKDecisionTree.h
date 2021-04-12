/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLGKDecisionTree, GKDecisionNode, GKRandomSource;

@interface GKDecisionTree : NSObject <NSSecureCoding> {

	GKCDecisionTree* _decisionTree;
	BOOL _isInduced;
	MLGKDecisionTree* mlkitDecisionTree;
	GKDecisionNode* _rootNode;
	GKRandomSource* _randomSource;

}

@property (nonatomic,retain) GKDecisionNode * rootNode;                //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,copy) GKRandomSource * randomSource;              //@synthesize randomSource=_randomSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 error:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(GKDecisionNode *)rootNode;
-(void)setRootNode:(GKDecisionNode *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(GKRandomSource *)randomSource;
-(void)setRandomSource:(GKRandomSource *)arg1 ;
-(id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 maxDepth:(unsigned long long)arg4 minSamplesSplit:(unsigned long long)arg5 ;
-(id)findActionForAnswers:(id)arg1 ;
-(id)initWithAttribute:(id)arg1 ;
-(id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 ;
-(BOOL)exportToURL:(id)arg1 error:(id)arg2 ;
-(id)getFlattenedTree;
-(id)findAccuracyWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 ;
@end

