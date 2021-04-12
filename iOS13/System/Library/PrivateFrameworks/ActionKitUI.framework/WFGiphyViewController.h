/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol WFGiphyViewControllerDelegate;
@class NSString, UIView, UICollectionView, UICollectionViewFlowLayout, WFGiphySessionManager, NSArray;

@interface WFGiphyViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UISearchBarDelegate> {

	BOOL _selectMultiple;
	NSString* _query;
	id<WFGiphyViewControllerDelegate> _delegate;
	UIView* _emptyListView;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	WFGiphySessionManager* _sessionManager;
	NSArray* _objects;

}

@property (nonatomic,__weak,readonly) UIView * emptyListView;                                  //@synthesize emptyListView=_emptyListView - In the implementation block
@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) WFGiphySessionManager * sessionManager;                         //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,copy) NSArray * objects;                                                  //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) BOOL selectMultiple;                                              //@synthesize selectMultiple=_selectMultiple - In the implementation block
@property (nonatomic,copy) NSString * query;                                                   //@synthesize query=_query - In the implementation block
@property (assign,nonatomic,__weak) id<WFGiphyViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFGiphyViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFGiphyViewControllerDelegate>)arg1 ;
-(NSString *)query;
-(void)cancel;
-(void)setQuery:(NSString *)arg1 ;
-(NSArray *)objects;
-(void)done;
-(void)loadView;
-(BOOL)accessibilityPerformEscape;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setObjects:(NSArray *)arg1 ;
-(WFGiphySessionManager *)sessionManager;
-(BOOL)selectMultiple;
-(void)setSelectMultiple:(BOOL)arg1 ;
-(UIView *)emptyListView;
@end

