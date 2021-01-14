/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary;

@interface _UISegmentedControlAppearanceStorage : NSObject {

	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _miniBackgroundImages;
	NSMutableDictionary* _dividerImages;
	NSMutableDictionary* _miniDividerImages;
	NSMutableDictionary* _textAttributesForState;
	NSMutableDictionary* _backgroundPositionAdjustmentsForBarMetrics;
	NSMutableDictionary* _contentPositionOffsets;
	NSMutableDictionary* _miniContentPositionOffsets;
	BOOL _legacyDontHighlight;
	BOOL _legacySuppressOptionsBackground;
	BOOL _isTiled;
	unsigned long long _leftCapWidth;
	unsigned long long _rightCapWidth;

}
-(id)textAttributesForState:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)wantsTrackingSuppressed;
-(id)anyDividerImageForMini:(BOOL)arg1 ;
-(double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
-(void)setIsTiled:(BOOL)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3 ;
-(void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(BOOL)arg3 ;
-(BOOL)legacySuppressOptionsBackground;
-(id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(BOOL)arg2 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)takeTextAttributesFrom:(SCD_Struct_UI63)arg1 forState:(unsigned long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(void)setDetail:(SCD_Struct_UI64*)arg1 ;
-(void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(BOOL)arg2 noFallback:(BOOL)arg3 ;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 withFallback:(BOOL)arg3 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(BOOL)arg4 ;
-(id)anyDividerImage;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(BOOL)arg3 withFallback:(BOOL)arg4 ;
@end

