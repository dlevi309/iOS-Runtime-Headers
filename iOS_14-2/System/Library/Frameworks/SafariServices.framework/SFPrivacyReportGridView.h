/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/SFPrivacyReportGridItemDelegate.h>

@protocol SFPrivacyReportGridViewDelegate;
@class UICollectionView, UICollectionViewFlowLayout, NSMutableArray, NSArray, NSString;

@interface SFPrivacyReportGridView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SFPrivacyReportGridItemDelegate> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSMutableArray* _cachedRowInfo;
	double _previousCollectionViewWidth;
	BOOL _isAccessibilitySize;
	NSArray* _itemViews;
	id<SFPrivacyReportGridViewDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * itemViews;                                                //@synthesize itemViews=_itemViews - In the implementation block
@property (assign,nonatomic,__weak) id<SFPrivacyReportGridViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double interItemSpacing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)interItemSpacing;
-(void)layoutMarginsDidChange;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id<SFPrivacyReportGridViewDelegate>)delegate;
-(unsigned long long)_gridPositionForItemAtIndexPath:(id)arg1 ;
-(void)_rebuildRowLayoutInfoIfNeeded;
-(void)itemDidChangeContentSize:(id)arg1 ;
-(void)setItemViews:(NSArray *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDelegate:(id<SFPrivacyReportGridViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)invalidateIntrinsicContentSize;
-(NSArray *)itemViews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateInterItemSpacing;
-(void)didUpdateInterItemSpacing:(double)arg1 ;
-(BOOL)itemViewCanUseCompactWidth:(id)arg1 ;
@end

