/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/MRUMediaSuggestionsControllerObserver.h>

@protocol MRUMediaSuggestionsViewControllerDelegate;
@class MRUMediaSuggestionsController, MRUVisualStylingProvider, NSString, UICollectionViewDiffableDataSource, NSDictionary, MRUMediaSuggestionsView;

@interface MRUMediaSuggestionsViewController : UIViewController <UICollectionViewDelegate, MRUMediaSuggestionsControllerObserver> {

	BOOL _supportsHorizontalLayout;
	MRUMediaSuggestionsController* _suggestionsController;
	id<MRUMediaSuggestionsViewControllerDelegate> _delegate;
	MRUVisualStylingProvider* _stylingProvider;
	long long _layout;
	NSString* _suggestionContext;
	UICollectionViewDiffableDataSource* _dataSource;
	NSDictionary* _suggestions;
	NSString* _selectedIndentifier;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) MRUMediaSuggestionsView * view; 
@property (nonatomic,retain) MRUMediaSuggestionsView * viewIfLoaded; 
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSDictionary * suggestions;                                                 //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSString * selectedIndentifier;                                             //@synthesize selectedIndentifier=_selectedIndentifier - In the implementation block
@property (nonatomic,readonly) MRUMediaSuggestionsController * suggestionsController;                    //@synthesize suggestionsController=_suggestionsController - In the implementation block
@property (assign,nonatomic,__weak) id<MRUMediaSuggestionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                                 //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long layout;                                                           //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSString * suggestionContext;                                               //@synthesize suggestionContext=_suggestionContext - In the implementation block
@property (assign,nonatomic) BOOL supportsHorizontalLayout;                                              //@synthesize supportsHorizontalLayout=_supportsHorizontalLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                             //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(NSDictionary *)suggestions;
-(void)setSuggestions:(NSDictionary *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)init;
-(id<MRUMediaSuggestionsViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setDelegate:(id<MRUMediaSuggestionsViewControllerDelegate>)arg1 ;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)updateSuggestions;
-(UIEdgeInsets)contentEdgeInsets;
-(void)loadView;
-(void)setLayout:(long long)arg1 ;
-(long long)layout;
-(void)setSupportsHorizontalLayout:(BOOL)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)mediaSuggestionsController:(id)arg1 didUpdateSuggestions:(id)arg2 ;
-(void)updateCell:(id)arg1 forIdentifier:(id)arg2 ;
-(BOOL)supportsHorizontalLayout;
-(id)initWithSuggestionsController:(id)arg1 ;
-(NSString *)suggestionContext;
-(void)setSuggestionContext:(NSString *)arg1 ;
-(MRUMediaSuggestionsController *)suggestionsController;
-(NSString *)selectedIndentifier;
-(void)setSelectedIndentifier:(NSString *)arg1 ;
@end

