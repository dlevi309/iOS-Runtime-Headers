/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class CLKDevice, NTKBigNumeralsTimeComponentLabel, NSDate, NSNumber, NSString;

@interface NTKBigNumeralsDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView> {

	CLKDevice* _device;
	NTKBigNumeralsTimeComponentLabel* _topLabel;
	NTKBigNumeralsTimeComponentLabel* _bottomLabel;
	NSDate* _overrideDate;
	NSNumber* _timerToken;
	BOOL _frozen;
	BOOL _showingStatus;
	unsigned long long _style;
	unsigned long long _typeface;
	unsigned long long _color;

}

@property (assign,nonatomic) BOOL showingStatus;                         //@synthesize showingStatus=_showingStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long typeface;              //@synthesize typeface=_typeface - In the implementation block
@property (nonatomic,readonly) unsigned long long color;                 //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                //@synthesize frozen=_frozen - In the implementation block
-(void)dealloc;
-(unsigned long long)style;
-(unsigned long long)color;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isFrozen;
-(void)layoutSubviews;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(void)applyStyle:(unsigned long long)arg1 ;
-(void)_updateLabels;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)setShowingStatus:(BOOL)arg1 ;
-(unsigned long long)typeface;
-(void)applyTypeface:(unsigned long long)arg1 ;
-(void)applyColor:(unsigned long long)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ;
-(void)cleanupTransition;
-(BOOL)showingStatus;
@end

