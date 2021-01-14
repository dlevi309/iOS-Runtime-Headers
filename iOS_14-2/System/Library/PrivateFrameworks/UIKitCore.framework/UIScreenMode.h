/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_displayMode;
-(id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(CGSize)size;
-(BOOL)_isMainScreen;
-(double)pixelAspectRatio;
-(id)description;
-(CGSize)_sizeWithLevel:(unsigned long long)arg1 ;
-(void)_setMainScreen:(BOOL)arg1 ;
@end

