/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate;
@class AVTAvatarAttributeEditorColorSection;

@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject {

	AVTAvatarAttributeEditorColorSection* _colorSection;
	id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> _delegate;
	long long _selectedPrimaryColorIndex;
	long long _selectedExtendedColorIndex;
	long long _displayMode;

}

@property (assign,nonatomic) long long selectedPrimaryColorIndex;                                              //@synthesize selectedPrimaryColorIndex=_selectedPrimaryColorIndex - In the implementation block
@property (assign,nonatomic) long long selectedExtendedColorIndex;                                             //@synthesize selectedExtendedColorIndex=_selectedExtendedColorIndex - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                            //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) long long selectedItemIndex; 
@property (nonatomic,retain) AVTAvatarAttributeEditorColorSection * colorSection;                              //@synthesize colorSection=_colorSection - In the implementation block
@property (nonatomic,readonly) BOOL isShowingSlider; 
@property (nonatomic,readonly) BOOL isShowingExtended; 
@property (assign,nonatomic) id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)selectedItemFromItems:(id)arg1 ;
+(long long)indexOfItem:(id)arg1 inItems:(id)arg2 ;
-(id)init;
-(id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate>)delegate;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)displayMode;
-(void)setDelegate:(id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate>)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)selectedItemIndex;
-(void)resetToDefaultDisplayMode;
-(BOOL)isShowingExtended;
-(id)indexPathOfExtendedIcon;
-(void)updateSelectedIndexesSelectingItem:(id)arg1 fromUserInteraction:(BOOL)arg2 ;
-(long long)selectedExtendedColorIndex;
-(long long)selectedPrimaryColorIndex;
-(void)setSelectedPrimaryColorIndex:(long long)arg1 ;
-(void)setSelectedExtendedColorIndex:(long long)arg1 ;
-(AVTAvatarAttributeEditorColorSection *)colorSection;
-(BOOL)isShowingSlider;
-(void)toggleSliderMode;
-(void)toggleExtendedMode;
-(id)sectionItemAtIndex:(long long)arg1 ;
-(void)setColorSection:(AVTAvatarAttributeEditorColorSection *)arg1 ;
-(void)selectSectionItemAtIndexPath:(id)arg1 ;
@end

