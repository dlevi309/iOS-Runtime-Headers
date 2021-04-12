/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class NSMutableArray, NSMutableDictionary;

@interface TVStyleSheetRegistry : NSObject {

	NSMutableArray* _rootNodes;
	NSMutableDictionary* _nodesByTemplateName;

}

@property (nonatomic,retain) NSMutableArray * rootNodes;                             //@synthesize rootNodes=_rootNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nodesByTemplateName;              //@synthesize nodesByTemplateName=_nodesByTemplateName - In the implementation block
+(id)_urlForStyleSheetName:(id)arg1 ;
-(id)init;
-(void)_createDefaultRootNodes;
-(void)commitStyleSheets;
-(void)_commitTemplateTreeNode:(id)arg1 withParentStyleSheetURLs:(id)arg2 ;
-(NSMutableArray *)rootNodes;
-(void)registerStyleSheetURLs:(id)arg1 forTemplateName:(id)arg2 basedOnTemplateName:(id)arg3 ;
-(void)setRootNodes:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)nodesByTemplateName;
-(void)setNodesByTemplateName:(NSMutableDictionary *)arg1 ;
@end

