/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PUSearchResultsFooterViewDelegate;
@class UILabel, PUSearchResultsIndexingProgressView, UIButton, NSLayoutConstraint, NSString;

@interface PUSearchResultsFooterView : UIView <PXSettingsKeyObserver> {

	id<PUSearchResultsFooterViewDelegate> _delegate;
	UILabel* _noResultsLabel;
	PUSearchResultsIndexingProgressView* _indexingProgressView;
	UILabel* _descriptionLabel;
	UIButton* _tapToRadarButton;
	NSLayoutConstraint* _indexingViewToNoResultsConstraint;
	NSLayoutConstraint* _indexingViewToSelfConstraint;
	NSLayoutConstraint* _fileRadarToIndexViewConstraint;
	NSLayoutConstraint* _fileRadarToNoResultsConstraint;
	NSLayoutConstraint* _fileRadarToSelfConstraint;

}

@property (nonatomic,retain) UILabel * noResultsLabel;                                                //@synthesize noResultsLabel=_noResultsLabel - In the implementation block
@property (nonatomic,retain) PUSearchResultsIndexingProgressView * indexingProgressView;              //@synthesize indexingProgressView=_indexingProgressView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * tapToRadarButton;                                             //@synthesize tapToRadarButton=_tapToRadarButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * indexingViewToNoResultsConstraint;                  //@synthesize indexingViewToNoResultsConstraint=_indexingViewToNoResultsConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * indexingViewToSelfConstraint;                       //@synthesize indexingViewToSelfConstraint=_indexingViewToSelfConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fileRadarToIndexViewConstraint;                     //@synthesize fileRadarToIndexViewConstraint=_fileRadarToIndexViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fileRadarToNoResultsConstraint;                     //@synthesize fileRadarToNoResultsConstraint=_fileRadarToNoResultsConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fileRadarToSelfConstraint;                          //@synthesize fileRadarToSelfConstraint=_fileRadarToSelfConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<PUSearchResultsFooterViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isIndexingViewHidden,nonatomic) BOOL indexingViewHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_preferredCalloutFont;
+(id)_preferredBoldLabelFont;
-(id)init;
-(id<PUSearchResultsFooterViewDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setDelegate:(id<PUSearchResultsFooterViewDelegate>)arg1 ;
-(CGSize)minimumSize;
-(BOOL)isIndexingViewHidden;
-(void)setIndexingViewHidden:(BOOL)arg1 ;
-(void)hideNoResultsContent;
-(UILabel *)noResultsLabel;
-(void)showNoResultsContentForString:(id)arg1 suggestionsVisible:(BOOL)arg2 ;
-(BOOL)isNoResultsContentHidden;
-(void)_didSelectTapToRadarButton:(id)arg1 ;
-(void)_updateTapRadarConstraints;
-(void)setNoResultsLabel:(UILabel *)arg1 ;
-(PUSearchResultsIndexingProgressView *)indexingProgressView;
-(void)setIndexingProgressView:(PUSearchResultsIndexingProgressView *)arg1 ;
-(UIButton *)tapToRadarButton;
-(void)setTapToRadarButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)indexingViewToNoResultsConstraint;
-(void)setIndexingViewToNoResultsConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)indexingViewToSelfConstraint;
-(void)setIndexingViewToSelfConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)fileRadarToIndexViewConstraint;
-(NSLayoutConstraint *)fileRadarToSelfConstraint;
-(void)setFileRadarToIndexViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)fileRadarToNoResultsConstraint;
-(void)setFileRadarToNoResultsConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFileRadarToSelfConstraint:(NSLayoutConstraint *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
@end

