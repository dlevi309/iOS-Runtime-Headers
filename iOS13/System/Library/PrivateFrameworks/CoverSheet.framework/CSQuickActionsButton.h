/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <UIKitCore/UICoverSheetButton.h>

@class _UILegibilitySettings;

@interface CSQuickActionsButton : UICoverSheetButton {

	BOOL _permitted;
	long long _type;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL permitted;                                          //@synthesize permitted=_permitted - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)_updateStyle;
-(void)setSelected:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)_buttonImageNameForSelected:(BOOL)arg1 ;
-(id)_imageWithName:(id)arg1 ;
-(id)_accessoryTitleForType;
-(id)_statisticsIdentifierForType;
-(void)setPermitted:(BOOL)arg1 ;
-(BOOL)permitted;
@end

