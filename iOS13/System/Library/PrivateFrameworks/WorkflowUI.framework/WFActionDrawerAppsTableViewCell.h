/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol WFActionDrawerAppsTableViewCellDelegate;
@class NSArray, UICollectionView, NSString;

@interface WFActionDrawerAppsTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	NSArray* _appSections;
	id<WFActionDrawerAppsTableViewCellDelegate> _delegate;
	UICollectionView* _appsCollectionView;
	NSArray* _appItems;

}

@property (nonatomic,retain) UICollectionView * appsCollectionView;                                    //@synthesize appsCollectionView=_appsCollectionView - In the implementation block
@property (nonatomic,retain) NSArray * appItems;                                                       //@synthesize appItems=_appItems - In the implementation block
@property (nonatomic,retain) NSArray * appSections;                                                    //@synthesize appSections=_appSections - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerAppsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionDrawerAppsTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerAppsTableViewCellDelegate>)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)configureWithActionDrawerSections:(id)arg1 ;
-(NSArray *)appSections;
-(void)setAppSections:(NSArray *)arg1 ;
-(UICollectionView *)appsCollectionView;
-(void)setAppsCollectionView:(UICollectionView *)arg1 ;
-(NSArray *)appItems;
-(void)setAppItems:(NSArray *)arg1 ;
@end

