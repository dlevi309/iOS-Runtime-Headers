/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIContentRatingArtworkLoaderObserver.h>

@class SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIProductInformationView, SKUIProductPageItem, SKUIProductPageProductInfo, NSOperationQueue, NSString;

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {

	SKUIClientContext* _clientContext;
	SKUIContentRatingArtworkResourceLoader* _contentRatingArtworkLoader;
	SKUIProductInformationView* _informationView;
	SKUIProductPageItem* _item;
	SKUIProductPageProductInfo* _productInfo;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIProductPageItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(SKUIProductPageItem *)item;
-(SKUIClientContext *)clientContext;
-(void)loadView;
-(void)dealloc;
-(void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductInformation:(id)arg1 clientContext:(id)arg2 ;
-(id)_contentRatingResourceLoader;
-(void)_updateLinesWithRatingImage:(id)arg1 ;
-(id)_informationLinesWithProductInfo:(id)arg1 ;
-(id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2 ;
@end

