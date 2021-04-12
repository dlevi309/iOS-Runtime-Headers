/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UICollectionViewListCell.h>

@class NSArray, UILayoutGuide;

@interface _UICollectionViewListCell : UICollectionViewListCell {

	long long __backgroundViewConfigurationGrouping;

}

@property (assign,nonatomic) long long selectionStyle; 
@property (assign,setter=_setBackgroundViewConfigurationGrouping:,nonatomic) long long _backgroundViewConfigurationGrouping;              //@synthesize _backgroundViewConfigurationGrouping=__backgroundViewConfigurationGrouping - In the implementation block
@property (assign,nonatomic) BOOL expanded; 
@property (nonatomic,copy) NSArray * leadingAccessoryConfigurations; 
@property (nonatomic,copy) NSArray * trailingAccessoryConfigurations; 
@property (nonatomic,copy) NSArray * leadingEditingAccessoryConfigurations; 
@property (nonatomic,copy) NSArray * trailingEditingAccessoryConfigurations; 
@property (assign,nonatomic) BOOL indentsLeadingAccessories; 
@property (nonatomic,readonly) UILayoutGuide * _separatorLayoutGuide; 
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)_setBackgroundViewConfigurationGrouping:(long long)arg1 ;
-(long long)_backgroundViewConfigurationGrouping;
-(long long)accessoryTypeForAxis:(long long)arg1 ;
-(id)_configurationForListAccessoryType:(long long)arg1 ;
-(void)_setAccessoryConfigurations:(id)arg1 forAxis:(long long)arg2 ;
-(id)_customViewForAccessoryConfiguration:(id)arg1 ;
-(id)accessoryViewForAxis:(long long)arg1 ;
-(void)setAccessoryType:(long long)arg1 forAxis:(long long)arg2 ;
-(void)setAccessoryView:(id)arg1 forAxis:(long long)arg2 ;
-(void)_setShowingCompactContextMenu:(BOOL)arg1 ;
-(UILayoutGuide *)_separatorLayoutGuide;
-(unsigned long long)_maskedCornersForSystemBackgroundView;
-(void)setIndentsLeadingAccessories:(BOOL)arg1 ;
-(BOOL)indentsLeadingAccessories;
@end

