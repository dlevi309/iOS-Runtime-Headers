/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKBKeyViewContentView.h>

@class NSMutableArray, UIView, UIStackView, UIKeyboardEmojiWellView, NSIndexPath, NSString, NSArray, UIKBTree;

@interface UIKeyboardEmojiFamilyConfigurationView : UIView <UIKBKeyViewContentView> {

	double _metachronalRhythmAnimationStartTime;
	BOOL _usesDarkStyle;
	NSMutableArray* _familyMemberStackViews;
	UIView* _separatorView;
	UIStackView* _previewWellStackView;
	UIKeyboardEmojiWellView* _neutralWellView;
	UIKeyboardEmojiWellView* _configuredWellView;
	NSIndexPath* _lastSelectedIndexPath;
	NSString* _baseEmojiString;
	NSMutableArray* _selectedVariantIndices;
	NSArray* _skinToneVariantRows;
	UIKBTree* _representedKey;

}

@property (assign,nonatomic) BOOL usesDarkStyle;                                        //@synthesize usesDarkStyle=_usesDarkStyle - In the implementation block
@property (nonatomic,retain) NSMutableArray * familyMemberStackViews;                   //@synthesize familyMemberStackViews=_familyMemberStackViews - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                    //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIStackView * previewWellStackView;                        //@synthesize previewWellStackView=_previewWellStackView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiWellView * neutralWellView;                 //@synthesize neutralWellView=_neutralWellView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiWellView * configuredWellView;              //@synthesize configuredWellView=_configuredWellView - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastSelectedIndexPath;                       //@synthesize lastSelectedIndexPath=_lastSelectedIndexPath - In the implementation block
@property (nonatomic,retain) NSString * baseEmojiString;                                //@synthesize baseEmojiString=_baseEmojiString - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedVariantIndices;                   //@synthesize selectedVariantIndices=_selectedVariantIndices - In the implementation block
@property (nonatomic,retain) NSArray * skinToneVariantRows;                             //@synthesize skinToneVariantRows=_skinToneVariantRows - In the implementation block
@property (nonatomic,retain) UIKBTree * representedKey;                                 //@synthesize representedKey=_representedKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2 ;
+(id)_selectionAndSeparatorColorForDarkMode:(BOOL)arg1 ;
-(UIView *)separatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)layoutSubviews;
-(NSMutableArray *)selectedVariantIndices;
-(void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)usesDarkStyle;
-(void)setFamilyMemberStackViews:(NSMutableArray *)arg1 ;
-(void)setNeutralWellView:(UIKeyboardEmojiWellView *)arg1 ;
-(UIKeyboardEmojiWellView *)neutralWellView;
-(void)setConfiguredWellView:(UIKeyboardEmojiWellView *)arg1 ;
-(NSString *)baseEmojiString;
-(UIKeyboardEmojiWellView *)configuredWellView;
-(void)setPreviewWellStackView:(UIStackView *)arg1 ;
-(UIStackView *)previewWellStackView;
-(NSMutableArray *)familyMemberStackViews;
-(UIKBTree *)representedKey;
-(void)setBaseEmojiString:(NSString *)arg1 ;
-(void)setSkinToneVariantRows:(NSArray *)arg1 ;
-(void)_configureFamilyMemberWellStackViews;
-(NSArray *)skinToneVariantRows;
-(void)setRepresentedKey:(UIKBTree *)arg1 ;
-(void)_updatePreviewWellForCurrentSelection;
-(id)_wellViewForSection:(long long)arg1 item:(long long)arg2 ;
-(void)_updateBottomRowForSelections:(id)arg1 ;
-(void)setLastSelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)setUsesDarkStyle:(BOOL)arg1 ;
-(id)_currentlySelectedSkinToneConfiguration;
-(BOOL)_hasCompletelyConfiguredSkinToneConfiguration;
-(void)_colorConfigurationDidChange;
-(void)updateRenderConfig:(id)arg1 ;
-(void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;
-(void)_beginFamilyMetachronalRhythmAnimation;
-(void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg1 ;
-(void)_setCurrentlySelectedSkinToneConfiguration:(id)arg1 ;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(NSIndexPath *)lastSelectedIndexPath;
-(void)setSelectedVariantIndices:(NSMutableArray *)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
@end

