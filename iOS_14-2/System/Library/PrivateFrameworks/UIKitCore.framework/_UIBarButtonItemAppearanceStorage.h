/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor, NSValue, _UIBarBackButtonItemAppearanceStorage;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	UIColor* tintColor;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;
	_UIBarBackButtonItemAppearanceStorage* backButtonAppearance;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
@property (nonatomic,retain) NSValue * backButtonTitlePositionOffset; 
@property (nonatomic,retain) NSValue * miniBackButtonTitlePositionOffset; 
-(double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSValue *)miniTitlePositionOffset;
-(void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(NSValue *)titlePositionOffset;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 isMini:(BOOL)arg4 ;
-(void)setMiniBackButtonTitlePositionOffset:(NSValue *)arg1 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
-(void)setBackButtonTitlePositionOffset:(NSValue *)arg1 ;
-(NSValue *)miniBackButtonTitlePositionOffset;
-(id)anyBackButtonBackgroundImage;
-(void)setTitlePositionOffset:(NSValue *)arg1 ;
-(NSValue *)backButtonTitlePositionOffset;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(id)anyBackgroundImage;
-(double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(BOOL)arg3 ;
-(void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(UIColor *)tintColor;
-(void)setMiniTitlePositionOffset:(NSValue *)arg1 ;
@end

