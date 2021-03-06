/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>
#import <libobjc.A.dylib/SKUISwooshViewControllerDelegate.h>

@class SKUILockupSwooshArtworkLoader, SKUIMissingItemLoader, SKUIResourceLoader, SKUISwooshPageComponent, SKUILockupSwooshViewController, SKUIColorScheme, UIViewController, NSString;

@interface SKUIProductPageTableSwooshSection : SKUIProductPageTableSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {

	/*^block*/id _actionBlock;
	SKUILockupSwooshArtworkLoader* _artworkLoader;
	SKUIMissingItemLoader* _missingItemLoader;
	SKUIResourceLoader* _resourceLoader;
	SKUISwooshPageComponent* _swooshComponent;
	SKUILockupSwooshViewController* _swooshViewController;

}

@property (nonatomic,copy) id actionBlock;                                           //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme; 
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                    //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,readonly) UIViewController * swooshViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SKUIResourceLoader *)resourceLoader;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(UIViewController *)swooshViewController;
-(id)_swooshViewController;
-(id)_artworkLoader;
-(id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2 ;
-(id)initWithLockups:(id)arg1 title:(id)arg2 ;
-(id)initWithItems:(id)arg1 title:(id)arg2 ;
@end

