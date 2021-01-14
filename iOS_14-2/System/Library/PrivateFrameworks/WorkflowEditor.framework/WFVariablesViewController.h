/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol WFVariablesViewControllerDelegate, WFVariableProvider;
@class NSArray, UICollectionView, UICollectionViewFlowLayout, NSMutableDictionary, NSString;

@interface WFVariablesViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	BOOL _showsUserDefinedVariables;
	BOOL _showsMagicVariableButton;
	id<WFVariablesViewControllerDelegate> _delegate;
	id<WFVariableProvider> _variableProvider;
	NSArray* _userDefinedVariableNames;
	NSArray* _specialVariables;
	NSArray* _suggestedVariables;
	long long _scrollDirection;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSMutableDictionary* _cellWidthCache;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cellWidthCache;                                //@synthesize cellWidthCache=_cellWidthCache - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariablesViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                        //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic) BOOL showsUserDefinedVariables;                                        //@synthesize showsUserDefinedVariables=_showsUserDefinedVariables - In the implementation block
@property (assign,nonatomic) BOOL showsMagicVariableButton;                                         //@synthesize showsMagicVariableButton=_showsMagicVariableButton - In the implementation block
@property (nonatomic,copy) NSArray * userDefinedVariableNames;                                      //@synthesize userDefinedVariableNames=_userDefinedVariableNames - In the implementation block
@property (nonatomic,copy) NSArray * specialVariables;                                              //@synthesize specialVariables=_specialVariables - In the implementation block
@property (nonatomic,copy) NSArray * suggestedVariables;                                            //@synthesize suggestedVariables=_suggestedVariables - In the implementation block
@property (nonatomic,readonly) long long scrollDirection;                                           //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id<WFVariablesViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)scrollDirection;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFVariablesViewControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)reloadData;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(void)loadView;
-(id<WFVariableProvider>)variableProvider;
-(void)setSuggestedVariables:(NSArray *)arg1 ;
-(void)setUserDefinedVariableNames:(NSArray *)arg1 ;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(NSArray *)suggestedVariables;
-(NSArray *)userDefinedVariableNames;
-(BOOL)showsUserDefinedVariables;
-(NSArray *)specialVariables;
-(void)setShowsMagicVariableButton:(BOOL)arg1 ;
-(void)setShowsUserDefinedVariables:(BOOL)arg1 ;
-(void)setSpecialVariables:(NSArray *)arg1 ;
-(id)initWithScrollDirection:(long long)arg1 ;
-(id)availableUserDefinedVariableNames;
-(void)magicVariableButtonPressed:(id)arg1 ;
-(id)variableAtIndexPath:(id)arg1 ;
-(BOOL)showsMagicVariableButton;
-(NSMutableDictionary *)cellWidthCache;
@end

