/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class FBSDisplayMode;

@interface UIScreenMode : NSObject {

	FBSDisplayMode* _mode;
	BOOL _mainScreen;

}

@property (setter=_setMainScreen:,getter=_isMainScreen) BOOL _mainScreen;              //@synthesize mainScreen=_mainScreen - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double pixelAspectRatio; 
+(id)_screenModeForDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(id)description;
-(CGSize)size;
-(BOOL)_isMainScreen;
-(id)_displayMode;
-(void)_setMainScreen:(BOOL)arg1 ;
-(id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(CGSize)_sizeWithLevel:(unsigned long long)arg1 ;
-(double)pixelAspectRatio;
@end

