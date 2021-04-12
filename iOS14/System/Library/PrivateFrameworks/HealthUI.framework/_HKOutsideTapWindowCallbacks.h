/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UIWindow, NSMutableArray, NSString;

@interface _HKOutsideTapWindowCallbacks : NSObject <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _recognizer;
	UIWindow* _window;
	NSMutableArray* _callbacks;

}

@property (nonatomic,retain) UITapGestureRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * window;                         //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;                       //@synthesize callbacks=_callbacks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWindow:(UIWindow *)arg1 ;
-(NSMutableArray *)callbacks;
-(id)initWithWindow:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(UIWindow *)window;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(void)addCallbackForView:(id)arg1 outsideTapBlock:(/*^block*/id)arg2 ;
-(BOOL)matchesWindow:(id)arg1 ;
-(void)removeCallbackForView:(id)arg1 ;
-(void)_installTapGestureRecognizerIfNeeded;
-(void)_removeTapGestureRecognizerIfNeeded;
-(UITapGestureRecognizer *)recognizer;
-(void)setRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

