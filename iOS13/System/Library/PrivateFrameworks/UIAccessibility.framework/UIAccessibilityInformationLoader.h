/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject {

	NSTimer* _coalesceTimer;

}
+(id)sharedInstance;
-(id)_init;
-(void)setNeedsLoadAccessibilityInformation;
-(void)_loadAccessibilityInformationOnMainThread:(BOOL)arg1 ;
-(void)_setNeedsLoadAccessibilityInformationOnMainThread;
-(void)_coalesceTimerFired:(id)arg1 ;
-(void)loadAccessibilityInformation;
@end

