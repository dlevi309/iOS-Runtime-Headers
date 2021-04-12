/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSValue;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;

}

@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
-(double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(NSValue *)miniTitlePositionOffset;
-(NSValue *)titlePositionOffset;
-(id)anyBackgroundImage;
-(void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setMiniTitlePositionOffset:(NSValue *)arg1 ;
-(void)setTitlePositionOffset:(NSValue *)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
@end

