/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SXDocumentMetadataProviding>)documentMetadataProvider;
-(void)setCurrentNode:(SXTransitionDataSourceNode *)arg1 ;
-(id)initWithComponentController:(id)arg1 scrollView:(id)arg2 documentMetadataProvider:(id)arg3 ;
-(SXTransitionDataSourceNode *)currentNode;
-(UIScrollView *)scrollView;
-(id<SXComponentController>)componentController;
-(id)transitionDataSourceForType:(unsigned long long)arg1 ;
@end

