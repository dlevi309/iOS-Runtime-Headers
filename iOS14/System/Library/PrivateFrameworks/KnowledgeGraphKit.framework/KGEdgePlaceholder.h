/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGEdge.h>

@protocol KGNode;
@class NSArray, NSDictionary, NSString;

@interface KGEdgePlaceholder : NSObject <KGEdge> {

	float _weight;
	unsigned long long _identifier;
	NSArray* _labels;
	NSDictionary* _properties;
	id<KGNode> _sourceNode;
	id<KGNode> _targetNode;

}

@property (nonatomic,readonly) unsigned long long identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<KGNode> targetNode;                       //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) id<KGNode> sourceNode;                       //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) float weight;                                //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * labels;                       //@synthesize labels=_labels - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isResolved;
-(NSDictionary *)properties;
-(NSArray *)labels;
-(id<KGNode>)sourceNode;
-(float)weight;
-(id<KGNode>)targetNode;
-(void)_setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6 ;
-(id)oppositeNodeFromNode:(id)arg1 ;
@end

