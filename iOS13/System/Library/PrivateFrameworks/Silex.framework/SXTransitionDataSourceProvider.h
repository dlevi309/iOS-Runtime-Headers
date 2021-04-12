/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTransitionDataSourceProvider.h>

@protocol SXTransitionDataSourceProvider <NSObject>
@required
-(id)transitionDataSourceForType:(unsigned long long)arg1;

@end


@protocol SXComponentController, SXDocumentMetadataProviding;
@class UIScrollView, SXTransitionDataSourceNode, NSString;

@interface SXTransitionDataSourceProvider : NSObject <SXTransitionDataSourceProvider> {

	id<SXComponentController> _componentController;
	UIScrollView* _scrollView;
	id<SXDocumentMetadataProviding> _documentMetadataProvider;
	SXTransitionDataSourceNode* _currentNode;

}

@property (nonatomic,readonly) id<SXComponentController> componentController;                         //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                             //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) id<SXDocumentMetadataProviding> documentMetadataProvider;              //@synthesize documentMetadataProvider=_documentMetadataProvider - In the implementation block
@property (nonatomic,retain) SXTransitionDataSourceNode * currentNode;                                //@synthesize currentNode=_currentNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScrollView *)scrollView;
-(SXTransitionDataSourceNode *)currentNode;
-(void)setCurrentNode:(SXTransitionDataSourceNode *)arg1 ;
-(id)transitionDataSourceForType:(unsigned long long)arg1 ;
-(id<SXComponentController>)componentController;
-(id)initWithComponentController:(id)arg1 scrollView:(id)arg2 documentMetadataProvider:(id)arg3 ;
-(id<SXDocumentMetadataProviding>)documentMetadataProvider;
@end

