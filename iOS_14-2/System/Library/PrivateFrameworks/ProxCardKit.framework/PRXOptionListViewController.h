/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <ProxCardKit/PRXCardContentViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSArray, UICollectionView, NSString;

@interface PRXOptionListViewController : PRXCardContentViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	NSArray* _options;
	/*^block*/id _formatterBlock;
	/*^block*/id _selectionHandler;
	UICollectionView* _collectionView;

}

@property (nonatomic,copy) NSArray * options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id formatterBlock;                                  //@synthesize formatterBlock=_formatterBlock - In the implementation block
@property (nonatomic,copy) NSArray * selectedOptions; 
@property (nonatomic,copy) id selectionHandler;                                //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)formatterBlock;
-(UICollectionView *)collectionView;
-(NSArray *)options;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)initWithContentView:(id)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)viewDidLoad;
-(id)selectionHandler;
-(void)setSelectionHandler:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setSelectedOptions:(NSArray *)arg1 ;
-(NSArray *)selectedOptions;
-(void)_createCollectionViewLayout;
-(void)setFormatterBlock:(id)arg1 ;
@end

