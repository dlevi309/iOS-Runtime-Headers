/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>
#import <libobjc.A.dylib/HUAccessoryViewCellProtocol.h>

@protocol NACancelable;
@class HFItem, UIView, UIColor, HUIconView, HUGridServiceCellTextView, UILabel, UIVisualEffectView, UIActivityIndicatorView, HUVisualEffectContainerView, HUGridServiceCellLayoutOptions, NSString;

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol> {

	BOOL _shouldColorDescription;
	BOOL _shouldShowLoadingState;
	BOOL _shouldShowRoomName;
	BOOL _hasUpdatedUISinceLastReuse;
	BOOL _showingUpdatingState;
	BOOL _showingProgressIndicator;
	HFItem* _serviceItem;
	UIView* _accessoryView;
	UIColor* _defaultDescriptionColor;
	HUIconView* _iconView;
	HUGridServiceCellTextView* _serviceTextView;
	UILabel* _coloredDescriptionLabel;
	UIVisualEffectView* _descriptionLabelEffectView;
	id<NACancelable> _showUpdatingStateAfterDelayToken;
	id<NACancelable> _showProgressIndicatorAfterDelayToken;
	UIView* _overrideAccessoryView;
	UIActivityIndicatorView* _activityIndicator;
	HUVisualEffectContainerView* _exclamationView;

}

@property (nonatomic,retain) HUIconView * iconView;                                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HUGridServiceCellTextView * serviceTextView;                        //@synthesize serviceTextView=_serviceTextView - In the implementation block
@property (nonatomic,retain) UILabel * coloredDescriptionLabel;                                  //@synthesize coloredDescriptionLabel=_coloredDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * descriptionLabelEffectView;                    //@synthesize descriptionLabelEffectView=_descriptionLabelEffectView - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedUISinceLastReuse;                                    //@synthesize hasUpdatedUISinceLastReuse=_hasUpdatedUISinceLastReuse - In the implementation block
@property (assign,nonatomic) BOOL showingUpdatingState;                                          //@synthesize showingUpdatingState=_showingUpdatingState - In the implementation block
@property (assign,nonatomic) BOOL showUpdatingStateAfterDelay; 
@property (nonatomic,retain) id<NACancelable> showUpdatingStateAfterDelayToken;                  //@synthesize showUpdatingStateAfterDelayToken=_showUpdatingStateAfterDelayToken - In the implementation block
@property (assign,nonatomic) BOOL showingProgressIndicator;                                      //@synthesize showingProgressIndicator=_showingProgressIndicator - In the implementation block
@property (assign,nonatomic) BOOL showProgressIndicatorAfterDelay; 
@property (nonatomic,retain) id<NACancelable> showProgressIndicatorAfterDelayToken;              //@synthesize showProgressIndicatorAfterDelayToken=_showProgressIndicatorAfterDelayToken - In the implementation block
@property (nonatomic,retain) UIView * overrideAccessoryView;                                     //@synthesize overrideAccessoryView=_overrideAccessoryView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                        //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * exclamationView;                      //@synthesize exclamationView=_exclamationView - In the implementation block
@property (nonatomic,retain) HFItem * serviceItem;                                               //@synthesize serviceItem=_serviceItem - In the implementation block
@property (nonatomic,retain) HUGridServiceCellLayoutOptions * layoutOptions; 
@property (nonatomic,retain) UIView * accessoryView;                                             //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL shouldColorDescription;                                        //@synthesize shouldColorDescription=_shouldColorDescription - In the implementation block
@property (nonatomic,retain) UIColor * defaultDescriptionColor;                                  //@synthesize defaultDescriptionColor=_defaultDescriptionColor - In the implementation block
@property (assign,nonatomic) BOOL disableContinuousIconAnimation; 
@property (assign,nonatomic) BOOL shouldShowLoadingState;                                        //@synthesize shouldShowLoadingState=_shouldShowLoadingState - In the implementation block
@property (assign,nonatomic) BOOL shouldShowRoomName;                                            //@synthesize shouldShowRoomName=_shouldShowRoomName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layoutOptionsClass;
+(id)_iconTintColor;
-(id)initWithCoder:(id)arg1 ;
-(id)item;
-(void)setItem:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)_updateAccessoryView;
-(void)_updateText;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setShowingProgressIndicator:(BOOL)arg1 ;
-(HFItem *)serviceItem;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(id)_textConfiguration;
-(HUVisualEffectContainerView *)exclamationView;
-(void)layoutOptionsDidChange;
-(void)setExclamationView:(HUVisualEffectContainerView *)arg1 ;
-(void)setShouldColorDescription:(BOOL)arg1 ;
-(void)setServiceItem:(HFItem *)arg1 ;
-(BOOL)shouldShowRoomName;
-(void)setShouldShowRoomName:(BOOL)arg1 ;
-(BOOL)shouldShowLoadingState;
-(void)setShouldShowLoadingState:(BOOL)arg1 ;
-(void)setDisableContinuousIconAnimation:(BOOL)arg1 ;
-(void)displayStyleDidChange;
-(void)_setupServiceCell;
-(void)setShowProgressIndicatorAfterDelay:(BOOL)arg1 ;
-(void)setShowUpdatingStateAfterDelay:(BOOL)arg1 ;
-(void)setHasUpdatedUISinceLastReuse:(BOOL)arg1 ;
-(void)setDefaultDescriptionColor:(UIColor *)arg1 ;
-(void)setServiceTextView:(HUGridServiceCellTextView *)arg1 ;
-(HUGridServiceCellTextView *)serviceTextView;
-(void)setColoredDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)coloredDescriptionLabel;
-(void)setDescriptionLabelEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)descriptionLabelEffectView;
-(void)setOverrideAccessoryView:(UIView *)arg1 ;
-(BOOL)showingUpdatingState;
-(id<NACancelable>)showUpdatingStateAfterDelayToken;
-(void)setShowingUpdatingState:(BOOL)arg1 ;
-(void)setShowUpdatingStateAfterDelayToken:(id<NACancelable>)arg1 ;
-(BOOL)showingProgressIndicator;
-(id<NACancelable>)showProgressIndicatorAfterDelayToken;
-(void)setShowProgressIndicatorAfterDelayToken:(id<NACancelable>)arg1 ;
-(void)_updateIconAnimated:(BOOL)arg1 ;
-(BOOL)hasUpdatedUISinceLastReuse;
-(void)_updateSecondaryContentDisplayStyle;
-(id)_descriptionTextAttributesWithColor:(id)arg1 ;
-(UIColor *)defaultDescriptionColor;
-(BOOL)shouldColorDescription;
-(UIView *)overrideAccessoryView;
-(void)_createExclamationViewIfNecessary;
-(void)_updateExclamationViewColor;
-(BOOL)showUpdatingStateAfterDelay;
-(BOOL)showProgressIndicatorAfterDelay;
-(BOOL)disableContinuousIconAnimation;
@end

