/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerStyleSheetURLs:(id)arg1 forTemplateName:(id)arg2 basedOnTemplateName:(id)arg3 ;
-(void)_createDefaultRootNodes;
-(void)commitStyleSheets;
-(void)_commitTemplateTreeNode:(id)arg1 withParentStyleSheetURLs:(id)arg2 ;
-(NSMutableArray *)rootNodes;
-(void)setRootNodes:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)nodesByTemplateName;
-(void)setNodesByTemplateName:(NSMutableDictionary *)arg1 ;
@end

