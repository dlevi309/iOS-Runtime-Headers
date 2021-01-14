/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNContactPhotoViewDelegate.h>
#import <libobjc.A.dylib/CNUIReusableView.h>

@protocol CNPresenterDelegate, CNContactHeaderViewDelegate;
@class NSDictionary, UILabel, NSArray, NSLayoutConstraint, CNContactHeaderViewSizeAttributes, CNContactPhotoView, NSString;

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView> {

	BOOL _needsReload;
	BOOL _needsLabelSizeCalculation;
	BOOL _shouldUseConstrainedMaxHeight;
	BOOL _alwaysShowsMonogram;
	BOOL _visibleToScrollViews;
	BOOL _showMonogramsOnly;
	BOOL _shouldShowBelowNavigationTitle;
	NSDictionary* _nameTextAttributes;
	id<CNPresenterDelegate> _presenterDelegate;
	id<CNContactHeaderViewDelegate> _delegate;
	UILabel* _nameLabel;
	NSArray* _activatedConstraints;
	NSArray* _contacts;
	NSLayoutConstraint* _photoTopConstraint;
	NSLayoutConstraint* _photoHeightConstraint;
	CNContactHeaderViewSizeAttributes* _sizeAttributes;
	double _lastViewWidth;
	double _constrainedMaxHeight;
	CNContactPhotoView* _photoView;

}

@property (nonatomic,retain) UILabel * nameLabel;                                             //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                                  //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                              //@synthesize contacts=_contacts - In the implementation block
@property (retain) NSLayoutConstraint * photoTopConstraint;                                   //@synthesize photoTopConstraint=_photoTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * photoHeightConstraint;                                //@synthesize photoHeightConstraint=_photoHeightConstraint - In the implementation block
@property (nonatomic,retain) CNContactHeaderViewSizeAttributes * sizeAttributes;              //@synthesize sizeAttributes=_sizeAttributes - In the implementation block
@property (assign,nonatomic) BOOL needsLabelSizeCalculation;                                  //@synthesize needsLabelSizeCalculation=_needsLabelSizeCalculation - In the implementation block
@property (assign,nonatomic) double lastViewWidth;                                            //@synthesize lastViewWidth=_lastViewWidth - In the implementation block
@property (assign,nonatomic) double constrainedMaxHeight;                                     //@synthesize constrainedMaxHeight=_constrainedMaxHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldUseConstrainedMaxHeight;                              //@synthesize shouldUseConstrainedMaxHeight=_shouldUseConstrainedMaxHeight - In the implementation block
@property (nonatomic,readonly) CNContactPhotoView * photoView;                                //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowsMonogram;                                        //@synthesize alwaysShowsMonogram=_alwaysShowsMonogram - In the implementation block
@property (assign,nonatomic) BOOL visibleToScrollViews;                                       //@synthesize visibleToScrollViews=_visibleToScrollViews - In the implementation block
@property (assign,nonatomic) BOOL showMonogramsOnly;                                          //@synthesize showMonogramsOnly=_showMonogramsOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBelowNavigationTitle;                             //@synthesize shouldShowBelowNavigationTitle=_shouldShowBelowNavigationTitle - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                                 //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presenterDelegate;                //@synthesize presenterDelegate=_presenterDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactHeaderViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double minHeight; 
@property (nonatomic,readonly) double maxHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3 monogramOnly:(BOOL)arg4 ;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(id)sizeAttributesShowingNavBar:(BOOL)arg1 ;
+(CGSize)defaultPhotoSize;
+(BOOL)requiresConstraintBasedLayout;
-(id)descriptorForRequiredKeys;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowTakePhotoAction:(BOOL)arg4 shouldAllowImageDrops:(BOOL)arg5 showingNavBar:(BOOL)arg6 monogramOnly:(BOOL)arg7 delegate:(id)arg8 ;
-(void)updateWithContacts:(id)arg1 ;
-(void)updateFontSizes;
-(id<CNContactHeaderViewDelegate>)delegate;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(id)contactStyle;
-(BOOL)alwaysShowsMonogram;
-(void)setAlwaysShowsMonogram:(BOOL)arg1 ;
-(NSDictionary *)nameTextAttributes;
-(void)setNeedsReload;
-(void)prepareForReuse;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<CNContactHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)reloadDataIfNeeded;
-(id)contactViewCache;
-(double)minHeight;
-(double)safeAreaTop;
-(void)photoViewDidUpdate:(id)arg1 ;
-(void)updateForShowingNavBar:(BOOL)arg1 ;
-(void)photoView:(id)arg1 didSaveImageDropToContact:(id)arg2 ;
-(id)viewControllerForPhotoView:(id)arg1 ;
-(double)defaultMaxHeight;
-(void)setPresenterDelegate:(id<CNPresenterDelegate>)arg1 ;
-(double)safeAreaPhotoOffset;
-(double)defaultMaxBaseHeight;
-(void)didFinishUsing;
-(void)setConstrainedMaxHeight:(double)arg1 enabled:(BOOL)arg2 ;
-(void)updateWithNewContact:(id)arg1 ;
-(NSArray *)activatedConstraints;
-(void)calculateLabelSizesIfNeeded;
-(double)currentHeightPercentMaximized;
-(id<CNPresenterDelegate>)presenterDelegate;
-(double)currentHeightPercentMaximizedForPhoto;
-(double)currentHeightPercentMaximizedForMaxHeight:(double)arg1 ;
-(void)updateSizeDependentAttributes;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)photoTopConstraint;
-(void)setPhotoTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)photoHeightConstraint;
-(void)setPhotoHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(CNContactHeaderViewSizeAttributes *)sizeAttributes;
-(void)setSizeAttributes:(CNContactHeaderViewSizeAttributes *)arg1 ;
-(BOOL)needsLabelSizeCalculation;
-(double)lastViewWidth;
-(void)setNeedsLabelSizeCalculation:(BOOL)arg1 ;
-(void)setLastViewWidth:(double)arg1 ;
-(double)constrainedMaxHeight;
-(void)setConstrainedMaxHeight:(double)arg1 ;
-(BOOL)shouldUseConstrainedMaxHeight;
-(BOOL)visibleToScrollViews;
-(void)setShouldUseConstrainedMaxHeight:(BOOL)arg1 ;
-(void)setVisibleToScrollViews:(BOOL)arg1 ;
-(BOOL)showMonogramsOnly;
-(void)setShowMonogramsOnly:(BOOL)arg1 ;
-(BOOL)shouldShowBelowNavigationTitle;
-(void)setShouldShowBelowNavigationTitle:(BOOL)arg1 ;
-(UILabel *)nameLabel;
-(double)maxHeight;
-(CNContactPhotoView *)photoView;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

