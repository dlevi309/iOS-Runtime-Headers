/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class UIWindow;

@interface _TVWindowSizeAdaptor : NSObject {

	unsigned long long _allowedInterfaceOrientations;
	UIWindow* _window;

}

@property (nonatomic,__weak,readonly) UIWindow * window;               //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGSize adjustedWindowSize; 
-(BOOL)update;
-(UIWindow *)window;
-(id)initWithWindow:(id)arg1 ;
-(unsigned long long)_supportedOrientations;
-(CGSize)adjustedWindowSize;
-(BOOL)_shouldSwapDimensions;
@end

