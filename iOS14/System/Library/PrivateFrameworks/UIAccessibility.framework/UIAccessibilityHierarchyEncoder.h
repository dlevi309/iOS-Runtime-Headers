/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


#import <UIAccessibility/UIAccessibility-Structs.h>
@class UIAccessibilityElementTraversalOptions;

@interface UIAccessibilityHierarchyEncoder : NSObject {

	BOOL _shouldResolveRemoteElements;
	id _rootElement;
	UIAccessibilityElementTraversalOptions* _traversalOptions;

}

@property (nonatomic,retain) id rootElement;                                                         //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,retain) UIAccessibilityElementTraversalOptions * traversalOptions;              //@synthesize traversalOptions=_traversalOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldResolveRemoteElements;                                       //@synthesize shouldResolveRemoteElements=_shouldResolveRemoteElements - In the implementation block
-(void)setRootElement:(id)arg1 ;
-(UIAccessibilityElementTraversalOptions *)traversalOptions;
-(void)setTraversalOptions:(UIAccessibilityElementTraversalOptions *)arg1 ;
-(BOOL)shouldResolveRemoteElements;
-(void)setShouldResolveRemoteElements:(BOOL)arg1 ;
-(id)encodeWithError:(id*)arg1 ;
-(void)_resolveLeafElementsForRemoteElement:(id)arg1 rootElement:(id)arg2 addingToLeafElementDescriptions:(id)arg3 ;
-(CGRect)_convertAccessibilityFrameOfElement:(id)arg1 toViewSpaceOfContainer:(id)arg2 remoteParent:(id)arg3 ;
-(id)initWithRootElement:(id)arg1 traversalOptions:(id)arg2 ;
-(id)rootElement;
@end

