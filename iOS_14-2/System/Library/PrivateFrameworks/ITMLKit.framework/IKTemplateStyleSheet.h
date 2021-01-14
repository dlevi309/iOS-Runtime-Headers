/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKStyleFactory, NSDictionary, NSMutableDictionary, NSString;

@interface IKTemplateStyleSheet : NSObject <NSCopying> {

	IKStyleFactory* _styleFactory;
	NSDictionary* _templateTree;
	NSMutableDictionary* _styleComposersByKeypath;
	NSString* _templateName;

}

@property (nonatomic,retain,readonly) IKStyleFactory * styleFactory;                              //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * templateTree;                                  //@synthesize templateTree=_templateTree - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * styleComposersByKeypath;              //@synthesize styleComposersByKeypath=_styleComposersByKeypath - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateName;                                      //@synthesize templateName=_templateName - In the implementation block
+(void)loadStyleSheets;
+(id)styleSheetForTemplateName:(id)arg1 ;
+(void)registerStyleSheetURL:(id)arg1 parentStyleSheets:(id)arg2 forTemplateName:(id)arg3 ;
+(id)_styleSheetForTemplateName:(id)arg1 ;
+(xmlDoc*)_xmlTreeForTemplateName:(id)arg1 ;
+(void)_resolveEmbeddedTemplatesInXmlTree:(xmlNode*)arg1 ;
+(xmlDoc*)_xmlTreeWithData:(id)arg1 error:(id*)arg2 ;
+(void)_coalesceTrees:(xmlNode*)arg1 overridingTree:(xmlNode*)arg2 forcedTemplateName:(id)arg3 ;
+(id)_coalesceNode:(xmlNode*)arg1 overridingNode:(xmlNode*)arg2 forcedTemplateName:(id)arg3 ;
+(void)_findNodesInXmlTree:(xmlDoc*)arg1 styleNode:(xmlNode*)arg2 templateNode:(xmlNode*)arg3 ;
+(id)_templateTreeWithXMLTree:(xmlNode*)arg1 parentNode:(id)arg2 ;
+(id)_templateNodeWithXMLNode:(xmlNode*)arg1 parentNode:(id)arg2 ;
+(void)registerStyleSheetURL:(id)arg1 forTemplateName:(id)arg2 ;
-(NSString *)templateName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKStyleFactory *)styleFactory;
-(void)setViewElementStylesDirty;
-(NSDictionary *)templateTree;
-(NSMutableDictionary *)styleComposersByKeypath;
-(id)_styleComposerForNode:(id)arg1 ;
-(id)styleComposerForElement:(id)arg1 ;
-(id)_initWithXMLDoc:(xmlDoc*)arg1 templateName:(id)arg2 error:(id*)arg3 ;
@end

