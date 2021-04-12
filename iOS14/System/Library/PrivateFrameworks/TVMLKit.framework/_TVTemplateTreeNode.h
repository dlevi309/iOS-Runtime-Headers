/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class NSMutableArray, NSString, NSArray;

@interface _TVTemplateTreeNode : NSObject {

	NSMutableArray* _derivedTemplateNodes;
	BOOL _isAbstract;
	NSString* _templateName;
	NSArray* _styleSheetURLs;
	NSArray* _finalURLs;

}

@property (nonatomic,copy,readonly) NSString * templateName;                     //@synthesize templateName=_templateName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * styleSheetURLs;                    //@synthesize styleSheetURLs=_styleSheetURLs - In the implementation block
@property (nonatomic,readonly) BOOL isAbstract;                                  //@synthesize isAbstract=_isAbstract - In the implementation block
@property (nonatomic,copy) NSArray * finalURLs;                                  //@synthesize finalURLs=_finalURLs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * derivedTemplateNodes; 
-(NSString *)templateName;
-(BOOL)isAbstract;
-(id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2 abstract:(BOOL)arg3 ;
-(id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2 ;
-(NSArray *)derivedTemplateNodes;
-(void)addDerivedTemplateNode:(id)arg1 ;
-(NSArray *)styleSheetURLs;
-(NSArray *)finalURLs;
-(void)setFinalURLs:(NSArray *)arg1 ;
@end

