/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface AXCyclingView : UIView {

	BOOL _isMakingNextViewVisible;
	BOOL _shouldSkipMakingNextViewVisible;
	unsigned long long _cycleIndex;

}

@property (assign,nonatomic) unsigned long long cycleIndex;                     //@synthesize cycleIndex=_cycleIndex - In the implementation block
@property (assign,nonatomic) BOOL isMakingNextViewVisible;                      //@synthesize isMakingNextViewVisible=_isMakingNextViewVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipMakingNextViewVisible;              //@synthesize shouldSkipMakingNextViewVisible=_shouldSkipMakingNextViewVisible - In the implementation block
@property (nonatomic,readonly) NSArray * viewsInCycle; 
-(void)didMoveToWindow;
-(void)endCycling;
-(void)beginCycling;
-(NSArray *)viewsInCycle;
-(void)_updateForCycleIndex;
-(void)_makeNextViewVisible;
-(void)setCycleIndex:(unsigned long long)arg1 ;
-(BOOL)isMakingNextViewVisible;
-(void)setShouldSkipMakingNextViewVisible:(BOOL)arg1 ;
-(unsigned long long)cycleIndex;
-(void)setIsMakingNextViewVisible:(BOOL)arg1 ;
-(BOOL)shouldSkipMakingNextViewVisible;
@end

