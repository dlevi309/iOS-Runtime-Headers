/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardMessagesViewDelegate.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPassGroupView, PKDashboardMessagesView, NSMutableArray, UIScrollView, NSString;

@interface PKDashboardPassMessagePresenter : NSObject <PKDashboardMessagesViewDelegate, PKDashboardItemPresenter> {

	PKPassGroupView* _groupView;
	PKDashboardMessagesView* _sampleMessageView;
	NSMutableArray* _tablesViews;
	UIScrollView* _scrollView;
	unsigned long long _currentIndex;
	NSString* _currentIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)itemClass;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(id)initWithPassGroupView:(id)arg1 ;
-(void)messagesView:(id)arg1 scrolledToMessageWithIdentifier:(id)arg2 ;
-(id)_identifierForItem:(id)arg1 ;
-(unsigned long long)_indexForIdentifier:(id)arg1 inMessages:(id)arg2 ;
@end

