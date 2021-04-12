/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>

@class NSMapTable, SKUIProductPageTableSeparatorView, SKUIProductPageTableHeaderView, NSArray, SKUIMissingItemLoader, UIImage, SKUIStyledImageDataConsumer, SKUIResourceLoader, NSString;

@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {

	NSMapTable* _artworkRequests;
	SKUIProductPageTableSeparatorView* _footerView;
	SKUIProductPageTableHeaderView* _headerView;
	NSArray* _lockups;
	SKUIMissingItemLoader* _missingItemLoader;
	UIImage* _placeholderImage;
	SKUIStyledImageDataConsumer* _productImageDataConsumer;
	SKUIResourceLoader* _resourceLoader;

}

@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SKUIResourceLoader *)resourceLoader;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)footerViewForTableView:(id)arg1 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(id)initWithLockups:(id)arg1 title:(id)arg2 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_productImageForItem:(id)arg1 ;
@end

