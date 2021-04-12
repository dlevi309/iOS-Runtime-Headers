/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableArray, NSString;

@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate> {

	NSMutableArray* _windowCallbacks;

}

@property (nonatomic,retain) NSMutableArray * windowCallbacks;              //@synthesize windowCallbacks=_windowCallbacks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addOutsideTouchCallbackForView:(id)arg1 outsideTapBlock:(/*^block*/id)arg2 ;
+(void)removeOutsideTouchCallbackForView:(id)arg1 ;
+(id)_detectorSingleton;
-(id)init;
-(id)_callbacksForWindow:(id)arg1 ;
-(void)_removeCallbacksForView:(id)arg1 ;
-(NSMutableArray *)windowCallbacks;
-(void)setWindowCallbacks:(NSMutableArray *)arg1 ;
@end

