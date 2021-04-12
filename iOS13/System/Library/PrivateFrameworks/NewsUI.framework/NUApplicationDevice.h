/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUDevice.h>

@class UIApplication, UIScreen, NSString;

@interface NUApplicationDevice : NSObject <NUDevice> {

	UIApplication* _application;
	UIScreen* _screen;

}

@property (nonatomic,readonly) UIApplication * application;                        //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                  //@synthesize screen=_screen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSplitScreen,nonatomic,readonly) BOOL splitScreen; 
-(UIScreen *)screen;
-(UIApplication *)application;
-(BOOL)isSplitScreen;
-(id)initWithApplication:(id)arg1 screen:(id)arg2 ;
@end

