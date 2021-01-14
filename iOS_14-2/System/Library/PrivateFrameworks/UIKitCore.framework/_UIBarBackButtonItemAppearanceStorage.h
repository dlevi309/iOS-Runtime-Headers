/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(NSValue *)titlePositionOffset;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
-(void)setTitlePositionOffset:(NSValue *)arg1 ;
-(id)anyBackgroundImage;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(void)setMiniTitlePositionOffset:(NSValue *)arg1 ;
@end

