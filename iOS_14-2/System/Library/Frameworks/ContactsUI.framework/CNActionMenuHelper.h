/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSArray, UIDeferredMenuElement;

@interface CNActionMenuHelper : NSObject {

	BOOL _isMenuDisplayed;
	NSArray* _currentMenuItems;
	NSArray* _displayedMenuItems;
	UIDeferredMenuElement* _deferredMenuItem;
	/*^block*/id _deferredMenuElementCompletionBlock;

}

@property (nonatomic,retain) NSArray * currentMenuItems;                            //@synthesize currentMenuItems=_currentMenuItems - In the implementation block
@property (nonatomic,retain) NSArray * displayedMenuItems;                          //@synthesize displayedMenuItems=_displayedMenuItems - In the implementation block
@property (assign,nonatomic) BOOL isMenuDisplayed;                                  //@synthesize isMenuDisplayed=_isMenuDisplayed - In the implementation block
@property (nonatomic,retain) UIDeferredMenuElement * deferredMenuItem;              //@synthesize deferredMenuItem=_deferredMenuItem - In the implementation block
@property (nonatomic,copy) id deferredMenuElementCompletionBlock;                   //@synthesize deferredMenuElementCompletionBlock=_deferredMenuElementCompletionBlock - In the implementation block
-(/*^block*/id)configurationActionProviderWithActionBlock:(/*^block*/id)arg1 ;
-(id)targetedPreviewForSourceView:(id)arg1 ;
-(void)updateWithMenuItems:(id)arg1 contextMenuInteraction:(id)arg2 ;
-(void)updateVisibleMenuWithMenuItems:(id)arg1 contextMenuInteraction:(id)arg2 ;
-(void)setupDeferredMenuItem;
-(void)replaceDeferredMenuItemWithMenuItems:(id)arg1 ;
-(void)willDisplayMenuWithContextMenuInteraction:(id)arg1 ;
-(NSArray *)currentMenuItems;
-(void)setCurrentMenuItems:(NSArray *)arg1 ;
-(NSArray *)displayedMenuItems;
-(void)setDisplayedMenuItems:(NSArray *)arg1 ;
-(BOOL)isMenuDisplayed;
-(void)setIsMenuDisplayed:(BOOL)arg1 ;
-(UIDeferredMenuElement *)deferredMenuItem;
-(void)setDeferredMenuItem:(UIDeferredMenuElement *)arg1 ;
-(id)deferredMenuElementCompletionBlock;
-(void)setDeferredMenuElementCompletionBlock:(id)arg1 ;
-(void)willDismissMenu;
@end

