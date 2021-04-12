/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)requiresConstraintBasedLayout;
+(id)descriptorForRequiredKeys;
+(id)defaultCategories;
+(BOOL)hasActionsForContact:(id)arg1 ;
+(id)actionsManagerForContact:(id)arg1 ;
-(id<CNQuickActionsViewDelegate>)delegate;
-(void)setDelegate:(id<CNQuickActionsViewDelegate>)arg1 ;
-(void)performAction:(id)arg1 ;
-(void)updateContentSize;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(NSArray *)actions;
-(UICollectionView *)collectionView;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(double)maximumWidth;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSArray *)categories;
-(void)setActions:(NSArray *)arg1 ;
-(double)interspace;
-(void)setInterspace:(double)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)setSortsWithDuet:(BOOL)arg1 ;
-(BOOL)sortsWithDuet;
-(BOOL)useDuetIfAvailable;
-(void)setUseDuetIfAvailable:(BOOL)arg1 ;
-(CNContactActionsController *)actionsController;
-(void)contactActionsController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setActionsController:(CNContactActionsController *)arg1 ;
-(BOOL)quickActionButton:(id)arg1 performAction:(id)arg2 ;
-(void)actionsManager:(id)arg1 actionDidPerform:(id)arg2 ;
-(id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2 ;
-(void)_updateActions;
-(double)_widthForButtonCount:(long long)arg1 itemSize:(CGSize*)arg2 ;
-(void)showDisambiguationControllerWithDataSource:(id)arg1 actionType:(id)arg2 onController:(id)arg3 sourceView:(id)arg4 ;
-(BOOL)showTitles;
-(void)setShowTitles:(BOOL)arg1 ;
-(BOOL)showBackgroundPlatters;
-(void)setShowBackgroundPlatters:(BOOL)arg1 ;
-(UICollectionViewFlowLayout *)collectionLayout;
-(void)setCollectionLayout:(UICollectionViewFlowLayout *)arg1 ;
-(CGSize)cachedContentSize;
-(void)setCachedContentSize:(CGSize)arg1 ;
-(CNQuickAction *)performingAction;
-(void)setPerformingAction:(CNQuickAction *)arg1 ;
-(CNQuickActionsManager *)actionsManager;
-(void)setActionsManager:(CNQuickActionsManager *)arg1 ;
@end

