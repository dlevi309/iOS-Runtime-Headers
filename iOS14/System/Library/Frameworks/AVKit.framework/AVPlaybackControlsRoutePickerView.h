/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVRoutePickerView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class AVButton, AVLayoutItemAttributes, NSString;

@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView <AVPlaybackControlsViewItem> {

	AVButton* _customButton;
	BOOL _removed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	AVLayoutItemAttributes* _layoutAttributes;
	NSString* _currentMicaPackageName;

}

@property (nonatomic,retain) NSString * currentMicaPackageName;                                    //@synthesize currentMicaPackageName=_currentMicaPackageName - In the implementation block
@property (nonatomic,readonly) AVButton * customButton; 
@property (assign,nonatomic) CGSize extrinsicContentSize; 
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (assign,getter=isIncluded,nonatomic) BOOL included; 
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                        //@synthesize removed=_removed - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                          //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                         //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (nonatomic,readonly) AVLayoutItemAttributes * layoutAttributes;                          //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCollapsed;
-(void)setRemoved:(BOOL)arg1 ;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(BOOL)isRemoved;
-(CGSize)intrinsicContentSize;
-(AVLayoutItemAttributes *)layoutAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)extrinsicContentSize;
-(void)_updateLayoutItem;
-(BOOL)isIncluded;
-(void)layoutAttributesDidChange;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(AVButton *)customButton;
-(void)setPrioritizesVideoDevices:(BOOL)arg1 ;
-(void)setCurrentMicaPackageName:(NSString *)arg1 ;
-(void)_updateCustomButtonMicaPackage;
-(void)updateButtonAppearance;
-(NSString *)currentMicaPackageName;
-(void)setIncluded:(BOOL)arg1 ;
-(BOOL)hasAlternateAppearance;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(BOOL)hasFullScreenAppearance;
@end

