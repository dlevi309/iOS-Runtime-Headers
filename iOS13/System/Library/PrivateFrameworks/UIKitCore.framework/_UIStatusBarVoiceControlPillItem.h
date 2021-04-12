/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVoiceControlItem.h>

@class _UIStatusBarPillView;

@interface _UIStatusBarVoiceControlPillItem : _UIStatusBarVoiceControlItem {

	_UIStatusBarPillView* _pillView;
	CGSize _pillSize;

}

@property (nonatomic,retain) _UIStatusBarPillView * pillView;              //@synthesize pillView=_pillView - In the implementation block
@property (assign,nonatomic) CGSize pillSize;                              //@synthesize pillSize=_pillSize - In the implementation block
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(double)imageOpacityForVoiceControlType:(long long)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(CGSize)pillSize;
-(_UIStatusBarPillView *)pillView;
-(id)_backgroundColorForVoiceControlType:(long long)arg1 styleAttributes:(id)arg2 ;
-(BOOL)_pulsingForVoiceControlType:(long long)arg1 ;
-(void)_create_pillView;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setPillSize:(CGSize)arg1 ;
-(void)setPillView:(_UIStatusBarPillView *)arg1 ;
@end

