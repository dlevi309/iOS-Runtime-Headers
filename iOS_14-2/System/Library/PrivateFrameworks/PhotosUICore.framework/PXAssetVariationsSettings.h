/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXAssetVariationsSettings : PXSettings {

	BOOL _addSimulatedProgressComponent;
	BOOL _simulateLoadingFailure;
	BOOL _simulateSavingFailure;
	BOOL _useNeutrinoRendering;
	BOOL _showStatusInDisclosureLabel;
	BOOL _showLoopBadges;
	BOOL _invalidateCachedPreviews;
	BOOL _useLiveRenderedPreviews;
	double _selectionDetailsDismissalDelay;
	long long _suggestionsScheme;
	long long _layoutStyle;

}

@property (assign,nonatomic) double selectionDetailsDismissalDelay;              //@synthesize selectionDetailsDismissalDelay=_selectionDetailsDismissalDelay - In the implementation block
@property (assign,nonatomic) long long suggestionsScheme;                        //@synthesize suggestionsScheme=_suggestionsScheme - In the implementation block
@property (assign,nonatomic) BOOL addSimulatedProgressComponent;                 //@synthesize addSimulatedProgressComponent=_addSimulatedProgressComponent - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                              //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL simulateLoadingFailure;                        //@synthesize simulateLoadingFailure=_simulateLoadingFailure - In the implementation block
@property (assign,nonatomic) BOOL simulateSavingFailure;                         //@synthesize simulateSavingFailure=_simulateSavingFailure - In the implementation block
@property (assign,nonatomic) BOOL useNeutrinoRendering;                          //@synthesize useNeutrinoRendering=_useNeutrinoRendering - In the implementation block
@property (assign,nonatomic) BOOL showStatusInDisclosureLabel;                   //@synthesize showStatusInDisclosureLabel=_showStatusInDisclosureLabel - In the implementation block
@property (assign,nonatomic) BOOL showLoopBadges;                                //@synthesize showLoopBadges=_showLoopBadges - In the implementation block
@property (assign,nonatomic) BOOL invalidateCachedPreviews;                      //@synthesize invalidateCachedPreviews=_invalidateCachedPreviews - In the implementation block
@property (assign,nonatomic) BOOL useLiveRenderedPreviews;                       //@synthesize useLiveRenderedPreviews=_useLiveRenderedPreviews - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)useLiveRenderedPreviews;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)setShowStatusInDisclosureLabel:(BOOL)arg1 ;
-(long long)layoutStyle;
-(long long)suggestionsScheme;
-(void)setAddSimulatedProgressComponent:(BOOL)arg1 ;
-(void)setSuggestionsScheme:(long long)arg1 ;
-(void)setUseLiveRenderedPreviews:(BOOL)arg1 ;
-(BOOL)addSimulatedProgressComponent;
-(void)setInvalidateCachedPreviews:(BOOL)arg1 ;
-(BOOL)invalidateCachedPreviews;
-(double)selectionDetailsDismissalDelay;
-(BOOL)simulateSavingFailure;
-(void)setSimulateSavingFailure:(BOOL)arg1 ;
-(BOOL)showStatusInDisclosureLabel;
-(BOOL)showLoopBadges;
-(BOOL)useNeutrinoRendering;
-(BOOL)simulateLoadingFailure;
-(void)setShowLoopBadges:(BOOL)arg1 ;
-(void)setSelectionDetailsDismissalDelay:(double)arg1 ;
-(void)setUseNeutrinoRendering:(BOOL)arg1 ;
-(void)setSimulateLoadingFailure:(BOOL)arg1 ;
@end

