/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXCapsuleButton, NSString, UILabel, UIVisualEffectView, PXUpdater, NSArray;

@interface PXCMMPosterBannerView : UIView {

	NSRange _headlineBoldRange;
	PXCapsuleButton* _actionButton;
	NSString* _actionButtonTitle;
	/*^block*/id _actionButtonAction;
	UILabel* _headlineLabel;
	UILabel* _subheadlineLabel;
	UIVisualEffectView* _visualEffectView;
	PXUpdater* _updater;
	BOOL _containsUnverifiedPersons;
	BOOL _loadingPeopleSuggestions;
	NSString* _headline;
	NSString* _subheadline;
	NSArray* _localizedNamesForHeadline;

}

@property (nonatomic,copy) NSString * headline;                                                            //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy) NSString * subheadline;                                                         //@synthesize subheadline=_subheadline - In the implementation block
@property (nonatomic,copy) NSArray * localizedNamesForHeadline;                                            //@synthesize localizedNamesForHeadline=_localizedNamesForHeadline - In the implementation block
@property (assign,nonatomic) BOOL containsUnverifiedPersons;                                               //@synthesize containsUnverifiedPersons=_containsUnverifiedPersons - In the implementation block
@property (assign,getter=isLoadingPeopleSuggestions,nonatomic) BOOL loadingPeopleSuggestions;              //@synthesize loadingPeopleSuggestions=_loadingPeopleSuggestions - In the implementation block
+(id)_headlineLabelBoldFont;
+(id)_headlineLabelFont;
+(id)_subheadlineLabelFont;
-(NSString *)headline;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)subheadline;
-(void)setLoadingPeopleSuggestions:(BOOL)arg1 ;
-(void)setSubheadline:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setHeadline:(id)arg1 boldRange:(NSRange)arg2 ;
-(void)setLocalizedNamesForHeadline:(NSArray *)arg1 ;
-(void)setActionButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)_updateLoadingPeopleSuggestions;
-(void)_updateActionButton;
-(void)_updateTitles;
-(void)_actionButtonTapped:(id)arg1 ;
-(id)_headlineStringAttributes;
-(id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(BOOL)arg3 ;
-(id)_attributedStringWithString:(id)arg1 boldRange:(NSRange)arg2 ;
-(NSArray *)localizedNamesForHeadline;
-(void)setContainsUnverifiedPersons:(BOOL)arg1 ;
-(BOOL)isLoadingPeopleSuggestions;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)containsUnverifiedPersons;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
@end

