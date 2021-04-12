/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol SFPersonCollectionViewCellDelegate;
@class SFAirDropNode, NSProgress, NSString, NSObject, SFPersonImageView, UIView, SFCircleProgressView, NSArray, UILabel, UIColor, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UIImpactFeedbackGenerator, NSLayoutConstraint;

@interface SFPersonCollectionViewCell : UICollectionViewCell {

	BOOL _darkStyleOnLegacyApp;
	BOOL _stateBeingRestored;
	SFAirDropNode* _person;
	NSProgress* _progress;
	long long _cellState;
	NSString* _sessionID;
	NSObject*<SFPersonCollectionViewCellDelegate> _delegate;
	double _activitySheetWidth;
	SFPersonImageView* _imageView;
	UIView* _badgedContactView;
	SFCircleProgressView* _circleProgressView;
	id _progressToken;
	NSArray* _progressKeyPaths;
	UILabel* _secondLabel;
	NSArray* _secondLabelVisibleConstraintsArray;
	UIColor* _fadedSecondLabelColor;
	UILabel* _labelForPositioning;
	UINotificationFeedbackGenerator* _notificationHaptic;
	UISelectionFeedbackGenerator* _selectionHaptic;
	UIImpactFeedbackGenerator* _impactHaptic;
	NSLayoutConstraint* _secondLabelFBConstraint;
	NSLayoutConstraint* _cellWidthConstraint;
	NSLayoutConstraint* _chickletToTitleSpacingConstraint;
	NSLayoutConstraint* _nameFirstBaselineConstraint;
	NSLayoutConstraint* _largeTextNameCenterYConstraint;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) SFPersonImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * badgedContactView;                                                 //@synthesize badgedContactView=_badgedContactView - In the implementation block
@property (nonatomic,retain) SFCircleProgressView * circleProgressView;                                  //@synthesize circleProgressView=_circleProgressView - In the implementation block
@property (nonatomic,retain) id progressToken;                                                           //@synthesize progressToken=_progressToken - In the implementation block
@property (nonatomic,retain) NSArray * progressKeyPaths;                                                 //@synthesize progressKeyPaths=_progressKeyPaths - In the implementation block
@property (nonatomic,retain) UILabel * secondLabel;                                                      //@synthesize secondLabel=_secondLabel - In the implementation block
@property (nonatomic,retain) NSArray * secondLabelVisibleConstraintsArray;                               //@synthesize secondLabelVisibleConstraintsArray=_secondLabelVisibleConstraintsArray - In the implementation block
@property (nonatomic,retain) UIColor * fadedSecondLabelColor;                                            //@synthesize fadedSecondLabelColor=_fadedSecondLabelColor - In the implementation block
@property (nonatomic,retain) UILabel * labelForPositioning;                                              //@synthesize labelForPositioning=_labelForPositioning - In the implementation block
@property (nonatomic,retain) UINotificationFeedbackGenerator * notificationHaptic;                       //@synthesize notificationHaptic=_notificationHaptic - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionHaptic;                             //@synthesize selectionHaptic=_selectionHaptic - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactHaptic;                                   //@synthesize impactHaptic=_impactHaptic - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondLabelFBConstraint;                               //@synthesize secondLabelFBConstraint=_secondLabelFBConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cellWidthConstraint;                                   //@synthesize cellWidthConstraint=_cellWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * chickletToTitleSpacingConstraint;                      //@synthesize chickletToTitleSpacingConstraint=_chickletToTitleSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameFirstBaselineConstraint;                           //@synthesize nameFirstBaselineConstraint=_nameFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * largeTextNameCenterYConstraint;                        //@synthesize largeTextNameCenterYConstraint=_largeTextNameCenterYConstraint - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                                               //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                                             //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                                  //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (nonatomic,retain) SFAirDropNode * person;                                                     //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long cellState;                                                        //@synthesize cellState=_cellState - In the implementation block
@property (assign,nonatomic) BOOL stateBeingRestored;                                                    //@synthesize stateBeingRestored=_stateBeingRestored - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SFPersonCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double activitySheetWidth;                                                  //@synthesize activitySheetWidth=_activitySheetWidth - In the implementation block
+(CGSize)_cachedPreferredItemSizeForViewWidth:(double)arg1 sizeCategory:(id)arg2 ;
+(CGSize)_cachedPreferredItemSizeForString:(id)arg1 viewWidth:(double)arg2 sizeCategory:(id)arg3 ;
-(void)dealloc;
-(NSObject*<SFPersonCollectionViewCellDelegate>)delegate;
-(void)setDelegate:(NSObject*<SFPersonCollectionViewCellDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)prepareForReuse;
-(long long)cellState;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(SFPersonImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImageView:(SFPersonImageView *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(id)progressToken;
-(void)setProgressToken:(id)arg1 ;
-(void)setupConstraints;
-(SFAirDropNode *)person;
-(void)setPerson:(SFAirDropNode *)arg1 ;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(UILabel *)secondLabel;
-(void)setLabelForPositioning:(UILabel *)arg1 ;
-(UILabel *)labelForPositioning;
-(void)setCircleProgressView:(SFCircleProgressView *)arg1 ;
-(SFCircleProgressView *)circleProgressView;
-(void)setupConstraintsYukon;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(NSArray *)largeTextConstraints;
-(NSArray *)regularConstraints;
-(void)_updateForCurrentSizeCategory;
-(BOOL)stateBeingRestored;
-(void)setStateBeingRestored:(BOOL)arg1 ;
-(NSArray *)secondLabelVisibleConstraintsArray;
-(void)setSecondLabelVisibleConstraintsArray:(NSArray *)arg1 ;
-(void)userDidCancel;
-(void)setCellState:(long long)arg1 ;
-(void)updateNameLabel;
-(void)resetTransferState;
-(void)userDidSelect;
-(void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setActivitySheetWidth:(double)arg1 ;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(void)restoreCellStateFromFinalTransferState:(long long)arg1 ;
-(BOOL)darkStyleOnLegacyApp;
-(CGSize)calculatedContentSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 ;
-(void)prepareHapticsPreWarm:(BOOL)arg1 ;
-(void)setLargeTextNameCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)largeTextNameCenterYConstraint;
-(void)setFadedSecondLabelColor:(UIColor *)arg1 ;
-(void)deactivateHaptics;
-(void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)updatePersonIconView;
-(void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2 ;
-(void)setCellState:(long long)arg1 animated:(BOOL)arg2 silent:(BOOL)arg3 ;
-(void)prepareHaptics;
-(void)fireHapticsForState:(long long)arg1 ;
-(UIColor *)fadedSecondLabelColor;
-(void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2 ;
-(void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2 ;
-(double)activitySheetWidth;
-(UIView *)badgedContactView;
-(void)setBadgedContactView:(UIView *)arg1 ;
-(NSArray *)progressKeyPaths;
-(void)setProgressKeyPaths:(NSArray *)arg1 ;
-(UINotificationFeedbackGenerator *)notificationHaptic;
-(void)setNotificationHaptic:(UINotificationFeedbackGenerator *)arg1 ;
-(UISelectionFeedbackGenerator *)selectionHaptic;
-(void)setSelectionHaptic:(UISelectionFeedbackGenerator *)arg1 ;
-(UIImpactFeedbackGenerator *)impactHaptic;
-(void)setImpactHaptic:(UIImpactFeedbackGenerator *)arg1 ;
-(NSLayoutConstraint *)secondLabelFBConstraint;
-(void)setSecondLabelFBConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)cellWidthConstraint;
-(void)setCellWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)chickletToTitleSpacingConstraint;
-(void)setChickletToTitleSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nameFirstBaselineConstraint;
-(void)setNameFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
@end

