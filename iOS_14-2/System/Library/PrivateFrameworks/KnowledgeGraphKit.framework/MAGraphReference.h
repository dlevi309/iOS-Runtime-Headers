/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class MABaseGraph;

@interface MAGraphReference : NSObject {

	unsigned long long _hash;
	MABaseGraph* _graph;
	MABaseGraph* _concreteGraph;

}

@property (__weak,readonly) MABaseGraph * graph;              //@synthesize graph=_graph - In the implementation block
@property (__weak) MABaseGraph * concreteGraph;               //@synthesize concreteGraph=_concreteGraph - In the implementation block
-(MABaseGraph *)graph;
-(id)initWithGraph:(id)arg1 ;
-(unsigned long long)hash;
-(void)setConcreteGraph:(MABaseGraph *)arg1 ;
-(MABaseGraph *)concreteGraph;
@end

