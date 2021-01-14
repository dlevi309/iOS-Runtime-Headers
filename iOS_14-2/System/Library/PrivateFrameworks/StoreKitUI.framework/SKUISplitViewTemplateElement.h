/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIJSDOMFeatureNavigationDocument, SKUIViewElement;

@interface SKUISplitViewTemplateElement : SKUIViewElement {

	SKUIJSDOMFeatureNavigationDocument* _leftNavigationDocument;
	long long _preferredDisplayMode;
	SKUIJSDOMFeatureNavigationDocument* _rightNavigationDocument;

}

@property (nonatomic,readonly) long long preferredDisplayMode;                                  //@synthesize preferredDisplayMode=_preferredDisplayMode - In the implementation block
@property (readonly) SKUIJSDOMFeatureNavigationDocument * leftNavigationDocument; 
@property (readonly) SKUIJSDOMFeatureNavigationDocument * rightNavigationDocument; 
@property (nonatomic,readonly) SKUIViewElement * leftSplitElement; 
@property (nonatomic,readonly) SKUIViewElement * rightSplitElement; 
@property (nonatomic,readonly) BOOL usesInlineSplitContent; 
+(id)supportedFeatures;
-(long long)preferredDisplayMode;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(id)_splitElementForIndex:(long long)arg1 ;
-(SKUIViewElement *)leftSplitElement;
-(SKUIViewElement *)rightSplitElement;
-(SKUIJSDOMFeatureNavigationDocument *)leftNavigationDocument;
-(SKUIJSDOMFeatureNavigationDocument *)rightNavigationDocument;
-(BOOL)usesInlineSplitContent;
@end

