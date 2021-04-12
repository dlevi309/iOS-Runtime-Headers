/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSMutableDictionary;

@interface KGEntityDescription : NSObject {

	NSMutableDictionary* _classByNodeLabels;
	NSMutableDictionary* _classByEdgeLabels;
	Class _defaultNodeClass;
	Class _defaultEdgeClass;

}

@property (nonatomic,retain) Class defaultNodeClass;              //@synthesize defaultNodeClass=_defaultNodeClass - In the implementation block
@property (nonatomic,retain) Class defaultEdgeClass;              //@synthesize defaultEdgeClass=_defaultEdgeClass - In the implementation block
-(id)init;
-(Class)defaultEdgeClass;
-(Class)defaultNodeClass;
-(void)setDefaultEdgeClass:(Class)arg1 ;
-(void)setDefaultNodeClass:(Class)arg1 ;
-(void)registerNodeClass:(Class)arg1 forLabels:(id)arg2 ;
-(void)registerEdgeClass:(Class)arg1 forLabels:(id)arg2 ;
-(id)_generateAllPossibleLabelSetsForLabels:(id)arg1 labelSetsCache:(id)arg2 ;
-(Class)_selectClassFromPossibleLabels:(id)arg1 dictionary:(id)arg2 ;
-(Class)classForEdgeLabels:(id)arg1 ;
-(Class)classForNodeLabels:(id)arg1 ;
@end

