/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSArray, WFActionDrawerCoordinator, UICollectionView, NSString;

@interface WFActionDrawerAppsTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	NSArray* _appSections;
	WFActionDrawerCoordinator* _coordinator;
	UICollectionView* _appsCollectionView;
	NSArray* _appItems;

}

@property (nonatomic,retain) NSArray * appSections;                                       //@synthesize appSections=_appSections - In the implementation block
@property (assign,nonatomic,__weak) WFActionDrawerCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) UICollectionView * appsCollectionView;                       //@synthesize appsCollectionView=_appsCollectionView - In the implementation block
@property (nonatomic,retain) NSArray * appItems;                                          //@synthesize appItems=_appItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCoordinator:(WFActionDrawerCoordinator *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WFActionDrawerCoordinator *)coordinator;
-(NSArray *)appItems;
-(void)setAppItems:(NSArray *)arg1 ;
-(void)configureWithActionDrawerSections:(id)arg1 coordinator:(id)arg2 ;
-(NSArray *)appSections;
-(void)setAppSections:(NSArray *)arg1 ;
-(UICollectionView *)appsCollectionView;
-(void)setAppsCollectionView:(UICollectionView *)arg1 ;
@end

