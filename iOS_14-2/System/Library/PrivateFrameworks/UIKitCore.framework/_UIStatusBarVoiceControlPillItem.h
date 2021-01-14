/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_backgroundColorForVoiceControlType:(long long)arg1 styleAttributes:(id)arg2 ;
-(_UIStatusBarPillView *)pillView;
-(CGSize)pillSize;
-(id)viewForIdentifier:(id)arg1 ;
-(BOOL)_pulsingForVoiceControlType:(long long)arg1 ;
-(void)setPillSize:(CGSize)arg1 ;
-(double)imageOpacityForVoiceControlType:(long long)arg1 ;
-(void)_create_pillView;
-(void)setPillView:(_UIStatusBarPillView *)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
@end

