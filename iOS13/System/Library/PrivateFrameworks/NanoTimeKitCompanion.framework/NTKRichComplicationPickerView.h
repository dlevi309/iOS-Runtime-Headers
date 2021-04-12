/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKEditOptionContainerView.h>

@class NSMutableDictionary, NSString;

@interface NTKRichComplicationPickerView : UIView <NTKEditOptionContainerView> {

	NSMutableDictionary* _sideViews;
	double _fraction;
	unsigned long long _fromSide;
	unsigned long long _toSide;
	long long _animationType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long numberOfSides; 
@property (nonatomic,readonly) unsigned long long numberOfVisibleSides; 
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)_updateViews;
-(id)initWithMaskImage:(id)arg1 animationType:(long long)arg2 ;
-(void)enumerateSideViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2 ;
-(void)transitionToSideAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSides;
-(id)viewForSideAtIndex:(unsigned long long)arg1 ;
-(void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3 ;
-(unsigned long long)numberOfVisibleSides;
@end

