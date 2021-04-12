/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIClientContext, NSOperationQueue, UIViewController, SKUIResourceLoader, SKUILayoutCache;

@interface SKUINavigationBarContext : NSObject {

	SKUIClientContext* _clientContext;
	double _maximumNavigationBarWidth;
	NSOperationQueue* _operationQueue;
	UIViewController* _parentViewController;
	SKUIResourceLoader* _resourceLoader;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) double maximumNavigationBarWidth;                            //@synthesize maximumNavigationBarWidth=_maximumNavigationBarWidth - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                         //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;                           //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUILayoutCache *)textLayoutCache;
-(double)maximumNavigationBarWidth;
-(void)setMaximumNavigationBarWidth:(double)arg1 ;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
@end

