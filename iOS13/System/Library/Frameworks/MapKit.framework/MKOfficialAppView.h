/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKOfficialAppViewDelegate;
@class UIImageView, UIView, _MKUILabel, UIButton, NSMutableArray, SSLookupItem, UIImage;

@interface MKOfficialAppView : MKPlaceSectionRowView {

	UIImageView* _storeAppImageView;
	UIView* _labelContainerView;
	_MKUILabel* _appNameLabel;
	_MKUILabel* _descriptionLabel;
	UIButton* _punchOutButton;
	NSMutableArray* _constraintArray;
	BOOL _layoutShouldStack;
	BOOL _isAppInstalled;
	SSLookupItem* _storeItem;
	UIImage* _storeItemImage;
	id<MKOfficialAppViewDelegate> _delegate;

}

@property (nonatomic,retain) SSLookupItem * storeItem;                                   //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,retain) UIImage * storeItemImage;                                   //@synthesize storeItemImage=_storeItemImage - In the implementation block
@property (assign,nonatomic,__weak) id<MKOfficialAppViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAppInstalled;                                        //@synthesize isAppInstalled=_isAppInstalled - In the implementation block
-(id<MKOfficialAppViewDelegate>)delegate;
-(void)setDelegate:(id<MKOfficialAppViewDelegate>)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_createConstraints;
-(void)_updateFonts;
-(SSLookupItem *)storeItem;
-(void)infoCardThemeChanged;
-(void)_updateShouldLayoutStack;
-(void)_punchOutButtonSelected:(id)arg1 ;
-(void)_contentSizeDidChangeNotificationHandler;
-(BOOL)isAppInstalled;
-(void)updateButtonText;
-(void)_updateLabelText;
-(void)setStoreItemImage:(UIImage *)arg1 ;
-(void)setStoreItem:(SSLookupItem *)arg1 ;
-(UIImage *)storeItemImage;
-(void)setIsAppInstalled:(BOOL)arg1 ;
@end

