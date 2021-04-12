/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)requiresConstraintBasedLayout;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(BOOL)arg2 shouldAllowImageDrops:(BOOL)arg3 monogramOnly:(BOOL)arg4 ;
+(CGSize)defaultPhotoSize;
-(void)dealloc;
-(id<CNContactHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<CNContactHeaderViewDelegate>)arg1 ;
-(void)prepareForReuse;
-(double)minHeight;
-(double)maxHeight;
-(NSArray *)contacts;
-(void)layoutSubviews;
-(void)updateConstraints;
-(BOOL)canBecomeFirstResponder;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(id)descriptorForRequiredKeys;
-(void)updateWithContacts:(id)arg1 ;
-(void)updateFontSizes;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(CNContactPhotoView *)photoView;
-(BOOL)alwaysShowsMonogram;
-(void)setAlwaysShowsMonogram:(BOOL)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSDictionary *)nameTextAttributes;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(id)contactViewCache;
-(void)photoViewDidUpdate:(id)arg1 ;
-(void)photoView:(id)arg1 didSaveImageDropToContact:(id)arg2 ;
-(id)viewControllerForPhotoView:(id)arg1 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowTakePhotoAction:(BOOL)arg4 shouldAllowImageDrops:(BOOL)arg5 monogramOnly:(BOOL)arg6 delegate:(id)arg7 ;
-(void)setPresenterDelegate:(id<CNPresenterDelegate>)arg1 ;
-(id)contactStyle;
-(double)safeAreaTop;
-(double)safeAreaPhotoOffset;
-(double)defaultMaxBaseHeight;
-(double)defaultMaxHeight;
-(void)setConstrainedMaxHeight:(double)arg1 enabled:(BOOL)arg2 ;
-(void)updateWithNewContact:(id)arg1 ;
-(void)calculateLabelSizesIfNeeded;
-(void)setNeedsReload;
-(void)reloadDataIfNeeded;
-(double)currentHeightPercentMaximized;
-(double)currentHeightPercentMaximizedForPhoto;
-(double)currentHeightPercentMaximizedForMaxHeight:(double)arg1 ;
-(void)updateSizeDependentAttributes;
-(id<CNPresenterDelegate>)presenterDelegate;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)photoTopConstraint;
-(void)setPhotoTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)photoHeightConstraint;
-(void)setPhotoHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(CNContactHeaderViewSizeAttributes *)sizeAttributes;
-(void)setSizeAttributes:(CNContactHeaderViewSizeAttributes *)arg1 ;
-(BOOL)needsLabelSizeCalculation;
-(void)setNeedsLabelSizeCalculation:(BOOL)arg1 ;
-(double)lastViewWidth;
-(void)setLastViewWidth:(double)arg1 ;
-(double)constrainedMaxHeight;
-(void)setConstrainedMaxHeight:(double)arg1 ;
-(BOOL)shouldUseConstrainedMaxHeight;
-(void)setShouldUseConstrainedMaxHeight:(BOOL)arg1 ;
-(BOOL)visibleToScrollViews;
-(void)setVisibleToScrollViews:(BOOL)arg1 ;
-(BOOL)showMonogramsOnly;
-(void)setShowMonogramsOnly:(BOOL)arg1 ;
-(BOOL)shouldShowBelowNavigationTitle;
-(void)setShouldShowBelowNavigationTitle:(BOOL)arg1 ;
@end

