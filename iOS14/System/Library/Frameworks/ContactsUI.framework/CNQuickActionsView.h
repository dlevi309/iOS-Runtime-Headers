/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/CNQuickActionsManagerDelegate.h>
#import <libobjc.A.dylib/CNQuickActionButtonDelegate.h>
#import <libobjc.A.dylib/CNContactActionsControllerDelegate.h>
#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>

@protocol CNQuickActionsViewDelegate;
@class CNContact, NSArray, NSDictionary, UICollectionViewFlowLayout, UICollectionView, UIAlertController, CNContactActionsController, CNQuickAction, CNQuickActionsManager, NSString;

@interface CNQuickActionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CNQuickActionsManagerDelegate, CNQuickActionButtonDelegate, CNContactActionsControllerDelegate, CNUIUserActionListConsumer> {

	BOOL _sortsWithDuet;
	BOOL _useDuetIfAvailable;
	BOOL _showTitles;
	BOOL _showBackgroundPlatters;
	CNContact* _contact;
	NSArray* _categories;
	NSDictionary* _titleTextAttributes;
	id<CNQuickActionsViewDelegate> _delegate;
	NSArray* _actions;
	UICollectionViewFlowLayout* _collectionLayout;
	UICollectionView* _collectionView;
	UIAlertController* _alertController;
	CNContactActionsController* _actionsController;
	CNQuickAction* _performingAction;
	CNQuickActionsManager* _actionsManager;
	CGSize _cachedContentSize;

}

@property (nonatomic,retain) NSArray * actions;                                           //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionLayout;               //@synthesize collectionLayout=_collectionLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) CGSize cachedContentSize;                                    //@synthesize cachedContentSize=_cachedContentSize - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                         //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) CNContactActionsController * actionsController;              //@synthesize actionsController=_actionsController - In the implementation block
@property (nonatomic,retain) CNQuickAction * performingAction;                            //@synthesize performingAction=_performingAction - In the implementation block
@property (nonatomic,retain) CNQuickActionsManager * actionsManager;                      //@synthesize actionsManager=_actionsManager - In the implementation block
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,retain) CNContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                          //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) BOOL sortsWithDuet;                                          //@synthesize sortsWithDuet=_sortsWithDuet - In the implementation block
@property (nonatomic,copy) NSDictionary * titleTextAttributes;                            //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
@property (assign,nonatomic) double interspace; 
@property (assign,nonatomic) BOOL useDuetIfAvailable;                                     //@synthesize useDuetIfAvailable=_useDuetIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL showTitles;                                             //@synthesize showTitles=_showTitles - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatters;                                 //@synthesize showBackgroundPlatters=_showBackgroundPlatters - In the implementation block
@property (assign,nonatomic,__weak) id<CNQuickActionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(BOOL)hasActionsForContact:(id)arg1 ;
+(id)actionsManagerForContact:(id)arg1 ;
+(id)defaultCategories;
+(BOOL)requiresConstraintBasedLayout;
-(void)setActions:(NSArray *)arg1 ;
-(double)maximumWidth;
-(void)setCategories:(NSArray *)arg1 ;
-(CNContact *)contact;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)setContact:(CNContact *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)actions;
-(id<CNQuickActionsViewDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)showTitles;
-(NSArray *)categories;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setSortsWithDuet:(BOOL)arg1 ;
-(BOOL)sortsWithDuet;
-(BOOL)useDuetIfAvailable;
-(void)setUseDuetIfAvailable:(BOOL)arg1 ;
-(CNContactActionsController *)actionsController;
-(BOOL)quickActionButton:(id)arg1 performAction:(id)arg2 ;
-(void)_updateActions;
-(void)setShowTitles:(BOOL)arg1 ;
-(void)actionsManager:(id)arg1 actionDidPerform:(id)arg2 ;
-(id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2 ;
-(double)_widthForButtonCount:(long long)arg1 itemSize:(CGSize*)arg2 ;
-(BOOL)showBackgroundPlatters;
-(void)setShowBackgroundPlatters:(BOOL)arg1 ;
-(void)showDisambiguationControllerWithDataSource:(id)arg1 actionType:(id)arg2 onController:(id)arg3 sourceView:(id)arg4 ;
-(UICollectionViewFlowLayout *)collectionLayout;
-(void)setCollectionLayout:(UICollectionViewFlowLayout *)arg1 ;
-(CGSize)cachedContentSize;
-(void)setCachedContentSize:(CGSize)arg1 ;
-(CNQuickAction *)performingAction;
-(void)setPerformingAction:(CNQuickAction *)arg1 ;
-(CNQuickActionsManager *)actionsManager;
-(void)setActionsManager:(CNQuickActionsManager *)arg1 ;
-(void)setInterspace:(double)arg1 ;
-(UIAlertController *)alertController;
-(void)setDelegate:(id<CNQuickActionsViewDelegate>)arg1 ;
-(void)reloadData;
-(id)initWithContact:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
-(double)interspace;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)updateContentSize;
-(void)performAction:(id)arg1 ;
@end

