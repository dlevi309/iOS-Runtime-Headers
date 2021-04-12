/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate;
@class UIViewController, NSArray, UICollectionView, WFAction, INIntent, NSString;

@interface WFActionDrawerSiriSuggestionsCollectionViewManager : NSObject <UICollectionViewDelegateFlowLayout, MPMediaPickerControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _configuredForDailyRoutines;
	id<WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> _delegate;
	long long _cellType;
	UIViewController* _containingViewController;
	NSArray* _donations;
	UICollectionView* _collectionView;
	NSArray* _actions;
	WFAction* _genericAction;
	INIntent* _genericIntent;
	NSString* _genericActionParameterTitle;

}

@property (nonatomic,copy) NSArray * donations;                                                                           //@synthesize donations=_donations - In the implementation block
@property (assign,nonatomic) long long cellType;                                                                          //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                                                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) WFAction * genericAction;                                                                    //@synthesize genericAction=_genericAction - In the implementation block
@property (nonatomic,retain) INIntent * genericIntent;                                                                    //@synthesize genericIntent=_genericIntent - In the implementation block
@property (nonatomic,copy) NSString * genericActionParameterTitle;                                                        //@synthesize genericActionParameterTitle=_genericActionParameterTitle - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * containingViewController;                                          //@synthesize containingViewController=_containingViewController - In the implementation block
@property (assign,nonatomic) BOOL configuredForDailyRoutines;                                                             //@synthesize configuredForDailyRoutines=_configuredForDailyRoutines - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate>)arg1 ;
-(NSArray *)actions;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)setActions:(NSArray *)arg1 ;
-(long long)cellType;
-(void)setCellType:(long long)arg1 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(NSArray *)donations;
-(void)setDonations:(NSArray *)arg1 ;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(UIViewController *)containingViewController;
-(id)initWithCollectionView:(id)arg1 cellType:(long long)arg2 donations:(id)arg3 actions:(id)arg4 ;
-(void)setConfiguredForDailyRoutines:(BOOL)arg1 ;
-(void)showMusicPicker;
-(void)showPodcastPicker;
-(void)_configureCell:(id)arg1 withDonation:(id)arg2 cellType:(long long)arg3 ;
-(void)_configureCell:(id)arg1 withGenericIntent:(id)arg2 cellType:(long long)arg3 genericParameterTitle:(id)arg4 ;
-(BOOL)configuredForDailyRoutines;
-(WFAction *)genericAction;
-(void)setGenericAction:(WFAction *)arg1 ;
-(INIntent *)genericIntent;
-(void)setGenericIntent:(INIntent *)arg1 ;
-(NSString *)genericActionParameterTitle;
-(void)setGenericActionParameterTitle:(NSString *)arg1 ;
@end

