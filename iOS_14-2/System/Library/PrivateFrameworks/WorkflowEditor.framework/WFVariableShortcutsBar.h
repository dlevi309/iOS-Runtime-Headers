/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol WFVariableShortcutsBarDelegate, WFVariableProvider;
@class NSString, NSArray, UIButton, UIView, CAGradientLayer, UICollectionView, NSMutableDictionary, WFVariableShortcutsBarButtonCell;

@interface WFVariableShortcutsBar : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	BOOL _showsDoneButton;
	BOOL _showsVariables;
	BOOL _showsUserDefinedVariables;
	BOOL _showsMagicVariableButton;
	BOOL _variablesButtonSelected;
	id<WFVariableShortcutsBarDelegate> _delegate;
	id<WFVariableProvider> _variableProvider;
	NSString* _customButtonTitle;
	NSArray* _userDefinedVariableNames;
	NSArray* _specialVariables;
	NSArray* _suggestedVariables;
	UIButton* _doneButton;
	UIView* _maskingView;
	CAGradientLayer* _maskLayer;
	UICollectionView* _collectionView;
	NSMutableDictionary* _cellWidthCache;
	WFVariableShortcutsBarButtonCell* _variablesButton;

}

@property (assign,nonatomic,__weak) UIButton * doneButton;                                    //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) UIView * maskingView;                                     //@synthesize maskingView=_maskingView - In the implementation block
@property (assign,nonatomic,__weak) CAGradientLayer * maskLayer;                              //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cellWidthCache;                          //@synthesize cellWidthCache=_cellWidthCache - In the implementation block
@property (nonatomic,retain) WFVariableShortcutsBarButtonCell * variablesButton;              //@synthesize variablesButton=_variablesButton - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableShortcutsBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                  //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                            //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) BOOL showsVariables;                                             //@synthesize showsVariables=_showsVariables - In the implementation block
@property (assign,nonatomic) BOOL showsUserDefinedVariables;                                  //@synthesize showsUserDefinedVariables=_showsUserDefinedVariables - In the implementation block
@property (assign,nonatomic) BOOL showsMagicVariableButton;                                   //@synthesize showsMagicVariableButton=_showsMagicVariableButton - In the implementation block
@property (assign,nonatomic) BOOL variablesButtonSelected;                                    //@synthesize variablesButtonSelected=_variablesButtonSelected - In the implementation block
@property (nonatomic,copy) NSString * customButtonTitle;                                      //@synthesize customButtonTitle=_customButtonTitle - In the implementation block
@property (nonatomic,copy) NSArray * userDefinedVariableNames;                                //@synthesize userDefinedVariableNames=_userDefinedVariableNames - In the implementation block
@property (nonatomic,copy) NSArray * specialVariables;                                        //@synthesize specialVariables=_specialVariables - In the implementation block
@property (nonatomic,copy) NSArray * suggestedVariables;                                      //@synthesize suggestedVariables=_suggestedVariables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)doneButton;
-(void)setDoneButton:(UIButton *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(BOOL)showsDoneButton;
-(void)doneButtonPressed;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<WFVariableShortcutsBarDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setMaskLayer:(CAGradientLayer *)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)setCustomButtonTitle:(NSString *)arg1 ;
-(void)setDelegate:(id<WFVariableShortcutsBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(CAGradientLayer *)maskLayer;
-(UIView *)maskingView;
-(void)setMaskingView:(UIView *)arg1 ;
-(NSString *)customButtonTitle;
-(id<WFVariableProvider>)variableProvider;
-(void)setSuggestedVariables:(NSArray *)arg1 ;
-(void)setUserDefinedVariableNames:(NSArray *)arg1 ;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(NSArray *)suggestedVariables;
-(NSArray *)userDefinedVariableNames;
-(BOOL)showsUserDefinedVariables;
-(NSArray *)specialVariables;
-(void)setVariablesButtonSelected:(BOOL)arg1 ;
-(void)setShowsMagicVariableButton:(BOOL)arg1 ;
-(void)setShowsVariables:(BOOL)arg1 ;
-(BOOL)showsVariables;
-(void)setShowsUserDefinedVariables:(BOOL)arg1 ;
-(void)setSpecialVariables:(NSArray *)arg1 ;
-(BOOL)showsMagicVariableButton;
-(NSMutableDictionary *)cellWidthCache;
-(BOOL)shouldShowVariablesButton;
-(BOOL)shouldShowCustomButton;
-(void)barButtonPressed:(id)arg1 ;
-(BOOL)variablesButtonSelected;
-(WFVariableShortcutsBarButtonCell *)variablesButton;
-(void)setVariablesButton:(WFVariableShortcutsBarButtonCell *)arg1 ;
@end

