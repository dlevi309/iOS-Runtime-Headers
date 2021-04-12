/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/IKAppMenuBarDocumentDelegate.h>

@protocol SKUIMenuBarViewElementConfigurationDelegate, _SKUIMenuBarViewElementConfigurationReloadDelegate;
@class IKAppMenuBarDocument, NSArray, SKUIMenuItemViewElement, NSString;

@interface SKUIMenuBarViewElementConfiguration : NSObject <IKAppMenuBarDocumentDelegate> {

	IKAppMenuBarDocument* _menuBarDocument;
	long long _menuBarStyle;
	NSArray* _menuItemViewElements;
	BOOL _scrollEnabled;
	SKUIMenuItemViewElement* _selectedMenuItemViewElement;
	BOOL _needsReload;
	id<SKUIMenuBarViewElementConfigurationDelegate> _delegate;
	id<_SKUIMenuBarViewElementConfigurationReloadDelegate> _reloadDelegate;

}

@property (assign,setter=_setNeedsReload:,getter=_needsReload,nonatomic) BOOL needsReload;                                                                                //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,setter=_setReloadDelegate:,getter=_reloadDelegate,nonatomic,__weak) id<_SKUIMenuBarViewElementConfigurationReloadDelegate> reloadDelegate;              //@synthesize reloadDelegate=_reloadDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIMenuBarViewElementConfigurationDelegate> delegate;                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long menuBarStyle; 
@property (nonatomic,readonly) unsigned long long numberOfMenuItems; 
@property (nonatomic,readonly) BOOL scrollEnabled;                                                                                                                        //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (nonatomic,readonly) SKUIMenuItemViewElement * selectedMenuItemViewElement;                                                                                     //@synthesize selectedMenuItemViewElement=_selectedMenuItemViewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIMenuBarViewElementConfigurationDelegate>)delegate;
-(void)setDelegate:(id<SKUIMenuBarViewElementConfigurationDelegate>)arg1 ;
-(BOOL)_needsReload;
-(BOOL)scrollEnabled;
-(void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2 ;
-(void)menuBarDocument:(id)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg2 ;
-(id)documentForEntityUniqueIdentifier:(id)arg1 ;
-(id)documentOptionsForEntityUniqueIdentifier:(id)arg1 ;
-(void)_ensureDataLoaded;
-(id)_initWithMenuBarDocument:(id)arg1 ;
-(long long)menuBarStyle;
-(unsigned long long)numberOfMenuItems;
-(SKUIMenuItemViewElement *)selectedMenuItemViewElement;
-(id)documentForMenuItemAtIndex:(unsigned long long)arg1 ;
-(id)documentOptionsForMenuItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfMenuItemViewElement:(id)arg1 ;
-(void)contentWillAppearForMenuItemAtIndex:(unsigned long long)arg1 withEntityValueProvider:(id)arg2 clientContext:(id)arg3 ;
-(void)_reloadWithMenuBarStyle:(long long)arg1 menuItemViewElements:(id)arg2 scrollEnabled:(BOOL)arg3 ;
-(void)_setNeedsReload:(BOOL)arg1 ;
-(id)_reloadDelegate;
-(void)_setReloadDelegate:(id)arg1 ;
@end

