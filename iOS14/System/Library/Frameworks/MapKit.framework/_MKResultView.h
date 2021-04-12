/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@protocol _MKResultViewDelegate;
@class NSArray, CLLocation, NSMutableArray, MKLocationManager, NSString, NSTimer, _MKUILabel, UIColor, UIImageView, MKMapItem;

@interface _MKResultView : UIView <MKLocationManagerObserver> {

	NSArray* _mapItems;
	CLLocation* _referenceLocation;
	BOOL _alwaysUsesBusinessLayout;
	int _layoutType;
	id<_MKResultViewDelegate> delegate;
	BOOL _selected;
	BOOL _showsDistance;
	NSMutableArray* _resultConstraints;
	MKLocationManager* _locManager;
	NSString* _primaryLabelText;
	NSString* _secondaryLabelText;
	NSTimer* _refLocationTimer;
	BOOL _useSpotlightVibrancy;
	int _iconFormat;
	_MKUILabel* _nameLabel;
	_MKUILabel* _secondaryLabel;
	_MKUILabel* _tertiaryLabel;
	id<_MKResultViewDelegate> _delegate;
	double _fallbackDistance;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	UIImageView* _imageView;

}

@property (nonatomic,retain) _MKUILabel * nameLabel;                                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * secondaryLabel;                            //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * tertiaryLabel;                             //@synthesize tertiaryLabel=_tertiaryLabel - In the implementation block
@property (assign,nonatomic) BOOL useSpotlightVibrancy;                              //@synthesize useSpotlightVibrancy=_useSpotlightVibrancy - In the implementation block
@property (assign,nonatomic) double fallbackDistance;                                //@synthesize fallbackDistance=_fallbackDistance - In the implementation block
@property (assign,nonatomic) BOOL alwaysUsesBusinessLayout;                          //@synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) int iconFormat;                                         //@synthesize iconFormat=_iconFormat - In the implementation block
@property (assign,nonatomic,__weak) id<_MKResultViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double preferredHeight; 
@property (nonatomic,retain) UIColor * primaryTextColor;                             //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                           //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) NSString * primaryLabelText; 
@property (nonatomic,retain) NSString * secondaryLabelText; 
@property (nonatomic,retain) NSArray * mapItems; 
@property (nonatomic,retain) CLLocation * referenceLocation;                         //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showsDistance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)updateLayout;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateColors;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIImageView *)imageView;
-(id<_MKResultViewDelegate>)delegate;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(NSArray *)mapItems;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(void)setSelected:(BOOL)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)selected;
-(void)_locationApprovalDidChange;
-(void)setDelegate:(id<_MKResultViewDelegate>)arg1 ;
-(CGSize)_imageSize;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)layoutSubviews;
-(_MKUILabel *)tertiaryLabel;
-(void)updateConstraints;
-(double)preferredHeight;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setMapItems:(NSArray *)arg1 ;
-(void)setPrimaryLabelText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 highlightsOnTouch:(BOOL)arg2 ;
-(void)setIconFormat:(int)arg1 ;
-(void)_updateFontSizing;
-(void)setShowsDistance:(BOOL)arg1 ;
-(void)setUseSpotlightVibrancy:(BOOL)arg1 ;
-(id)_labelWithFontSize:(double)arg1 ;
-(void)_updatePrimaryColors;
-(void)_updateSecondaryColors;
-(int)iconFormat;
-(void)updateSubviews;
-(double)_expectedHeightForLabels;
-(BOOL)useSpotlightVibrancy;
-(void)addLabelIfNecessary:(id)arg1 ;
-(unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1 ;
-(unsigned long long)_maxNameLengthForEndingString:(id)arg1 ;
-(id)_defaultPrimaryLabel;
-(id)_defaultSecondaryCategoryLabel;
-(BOOL)showsDistance;
-(double)fallbackDistance;
-(void)_updateLayoutForAddress;
-(void)_updateLayoutForBusinessOrCategory;
-(void)updateImageView;
-(void)_cancelReferenceLocationTimer;
-(void)_fireReferenceLocationTimer;
-(id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2 ;
-(NSString *)primaryLabelText;
-(NSString *)secondaryLabelText;
-(void)setSecondaryLabelText:(NSString *)arg1 ;
-(void)setTertiaryLabel:(_MKUILabel *)arg1 ;
-(BOOL)alwaysUsesBusinessLayout;
-(void)setAlwaysUsesBusinessLayout:(BOOL)arg1 ;
-(void)setNeedsUpdateConstraints;
-(void)setFallbackDistance:(double)arg1 ;
-(CLLocation *)referenceLocation;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)handleTap:(id)arg1 ;
-(void)_commonInit;
-(_MKUILabel *)nameLabel;
-(void)setSecondaryLabel:(_MKUILabel *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(void)setNameLabel:(_MKUILabel *)arg1 ;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(_MKUILabel *)secondaryLabel;
-(void)dealloc;
@end

