/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(unsigned long long)cycleIndex;
-(void)setCycleIndex:(unsigned long long)arg1 ;
-(void)endCycling;
-(void)_updateForCycleIndex;
-(void)_makeNextViewVisible;
-(BOOL)isMakingNextViewVisible;
-(void)setShouldSkipMakingNextViewVisible:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)beginCycling;
-(NSArray *)viewsInCycle;
-(void)setIsMakingNextViewVisible:(BOOL)arg1 ;
-(BOOL)shouldSkipMakingNextViewVisible;
@end

