/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKOfficialAppViewDelegate;
@class UIImageView, UIView, _MKUILabel, UIButton, NSMutableArray, GEOAppStoreApp, UIImage;

@interface MKOfficialAppView : MKPlaceSectionRowView {

	UIImageView* _storeAppImageView;
	UIView* _labelContainerView;
	_MKUILabel* _appNameLabel;
	_MKUILabel* _descriptionLabel;
	UIButton* _punchOutButton;
	NSMutableArray* _constraintArray;
	BOOL _layoutShouldStack;
	BOOL _isAppInstalled;
	GEOAppStoreApp* _appStoreApp;
	UIImage* _image;
	id<MKOfficialAppViewDelegate> _delegate;

}

@property (nonatomic,retain) GEOAppStoreApp * appStoreApp;                               //@synthesize appStoreApp=_appStoreApp - In the implementation block
@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic,__weak) id<MKOfficialAppViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAppInstalled;                                        //@synthesize isAppInstalled=_isAppInstalled - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKOfficialAppViewDelegate>)delegate;
-(void)_updateShouldLayoutStack;
-(void)_punchOutButtonSelected:(id)arg1 ;
-(void)_contentSizeDidChangeNotificationHandler;
-(void)updateButtonText;
-(void)_updateLabelText;
-(void)setAppStoreApp:(GEOAppStoreApp *)arg1 ;
-(void)setIsAppInstalled:(BOOL)arg1 ;
-(void)_createConstraints;
-(UIImage *)image;
-(void)setDelegate:(id<MKOfficialAppViewDelegate>)arg1 ;
-(void)_updateFonts;
-(void)infoCardThemeChanged;
-(void)_commonInit;
-(BOOL)isAppInstalled;
-(GEOAppStoreApp *)appStoreApp;
@end

