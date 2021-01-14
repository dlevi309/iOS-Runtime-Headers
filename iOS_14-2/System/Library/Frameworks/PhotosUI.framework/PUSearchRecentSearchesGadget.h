/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, NSArray, NSOrderedSet, NSLayoutConstraint, NSString;

@interface PUSearchRecentSearchesGadget : UITableViewController <PXGadget> {

	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	unsigned long long _accessoryButtonType;
	NSArray* _recentSearchesNew;
	NSOrderedSet* _recentSearches;
	NSLayoutConstraint* _separatorRegularTrailingConstraint;
	NSLayoutConstraint* _separatorCompactWidthConstraint;

}

@property (nonatomic,copy) NSArray * recentSearchesNew;                                            //@synthesize recentSearchesNew=_recentSearchesNew - In the implementation block
@property (nonatomic,copy) NSOrderedSet * recentSearches;                                          //@synthesize recentSearches=_recentSearches - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorRegularTrailingConstraint;              //@synthesize separatorRegularTrailingConstraint=_separatorRegularTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorCompactWidthConstraint;                 //@synthesize separatorCompactWidthConstraint=_separatorCompactWidthConstraint - In the implementation block
@property (nonatomic,readonly) unsigned long long accessoryButtonType;                             //@synthesize accessoryButtonType=_accessoryButtonType - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                            //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXGadgetSpec *)gadgetSpec;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(CGSize)contentSize;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_reloadData;
-(void)userDidSelectAccessoryButton:(id)arg1 ;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(unsigned long long)accessoryButtonType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(void)setRecentSearches:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)recentSearches;
-(void)resetLineSeparatorInsets;
-(NSArray *)recentSearchesNew;
-(void)setRecentSearchesNew:(NSArray *)arg1 ;
-(NSLayoutConstraint *)separatorRegularTrailingConstraint;
-(void)setSeparatorRegularTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)separatorCompactWidthConstraint;
-(void)setSeparatorCompactWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)headerStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateTableViewLayoutMargins;
-(void)dealloc;
@end

