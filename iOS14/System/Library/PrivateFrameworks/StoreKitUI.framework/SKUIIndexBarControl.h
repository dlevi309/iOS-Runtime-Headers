/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate;
@class SKUIIndexBarEntry, NSArray, NSMapTable, NSIndexPath, NSDictionary;

@interface SKUIIndexBarControl : UIControl {

	SKUIIndexBarEntry* _combinedEntry;
	BOOL _didSendPastBottom;
	BOOL _didSendPastTop;
	NSArray* _displayEntries;
	BOOL _hasValidCombinedEntry;
	BOOL _hasValidDisplayEntries;
	BOOL _hasValidNumberOfSections;
	BOOL _hasValidTotalEntryCount;
	BOOL _hasValidTotalSize;
	NSMapTable* _indexPathToEntryMapTable;
	NSIndexPath* _lastSelectedIndexPath;
	double _lineSpacing;
	long long _numberOfSections;
	NSMapTable* _sectionIndexToNumberOfEntriesMapTable;
	long long _totalEntryCount;
	CGSize _totalSize;
	struct {
		unsigned dataSourceRespondsToCombinedEntry : 1;
		unsigned dataSourceRespondsToNumberOfSections : 1;
		unsigned delegateRespondsToDidSelectEntryAtIndexPath : 1;
		unsigned delegateRespondsToDidSelectBeyondBottom : 1;
		unsigned delegateRespondsToDidSelectBeyondTop : 1;
	}  _dataSourceDelegateFlags;
	id<SKUIIndexBarControlDataSource> _dataSource;
	NSDictionary* _defaultTextAttributes;
	id<SKUIIndexBarControlDelegate> _delegate;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                   //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;                                   //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIIndexBarControlDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTextAttributes;                               //@synthesize defaultTextAttributes=_defaultTextAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIIndexBarControlDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfSections; 
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<SKUIIndexBarControlDelegate>)delegate;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(long long)numberOfSections;
-(id)_allEntries;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SKUIIndexBarControlDataSource>)dataSource;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setDefaultTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultTextAttributes;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)_visibleBounds;
-(void)setDelegate:(id<SKUIIndexBarControlDelegate>)arg1 ;
-(void)setDataSource:(id<SKUIIndexBarControlDataSource>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(long long)_numberOfSections;
-(CGSize)_totalSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_displayEntries;
-(void)reloadCombinedEntry;
-(void)reloadEntryAtIndexPath:(id)arg1 ;
-(void)_invalidateForChangedLayoutProperties;
-(void)_sendSelectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_invalidateDisplayEntries;
-(long long)_numberOfEntriesInSection:(long long)arg1 ;
-(id)_entryAtIndexPath:(id)arg1 ;
-(void)_enumerateEntryIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(void)_configureNewEntry:(id)arg1 ;
-(CGSize)_sizeForEntries:(id)arg1 ;
-(id)_combinedEntry;
-(id)_displayEntriesThatFitInViewForGroupedEntries;
-(id)_allRequiredEntries;
-(BOOL)_reloadLineSpacing;
-(long long)_totalEntryCount;
-(CGSize)_sizeForEntryAtIndexPath:(id)arg1 ;
-(long long)numberOfEntriesInSection:(long long)arg1 ;
@end

