/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithWindow:(id)arg1 ;
-(unsigned long long)_supportedOrientations;
-(BOOL)update;
-(UIWindow *)window;
-(CGSize)adjustedWindowSize;
-(BOOL)_shouldSwapDimensions;
@end

