/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXGPPTSettings : PXSettings {

	BOOL _useAssetBadgeDecoration;
	long long _numberOfItems;
	long long _numberOfSections;
	long long _numberOfColumns;
	long long _selectionDecorationStlye;

}

@property (assign,nonatomic) long long numberOfItems;                         //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) long long numberOfSections;                      //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;                       //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) BOOL useAssetBadgeDecoration;                    //@synthesize useAssetBadgeDecoration=_useAssetBadgeDecoration - In the implementation block
@property (assign,nonatomic) long long selectionDecorationStlye;              //@synthesize selectionDecorationStlye=_selectionDecorationStlye - In the implementation block
+(id)allPresetNames;
+(id)sharedInstance;
+(id)scrollingPresetNames;
+(id)settingsControllerModule;
-(void)setNumberOfColumns:(long long)arg1 ;
-(id)parentSettings;
-(void)setDefaultValues;
-(long long)numberOfItems;
-(long long)numberOfSections;
-(void)setDefaultValuesWithPresetName:(id)arg1 ;
-(long long)selectionDecorationStlye;
-(long long)numberOfColumns;
-(void)setUseAssetBadgeDecoration:(BOOL)arg1 ;
-(void)setSelectionDecorationStlye:(long long)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(void)setNumberOfSections:(long long)arg1 ;
-(id)createLayout;
-(BOOL)useAssetBadgeDecoration;
@end

