/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUDevice.h>

@class UIScreen, UIViewController, NSString;

@interface NUExtensionDevice : NSObject <NUDevice> {

	UIScreen* _screen;
	UIViewController* _hostViewController;

}

@property (nonatomic,readonly) UIScreen * screen;                                         //@synthesize screen=_screen - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (getter=isSplitScreen,nonatomic,readonly) BOOL splitScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)hostViewController;
-(UIScreen *)screen;
-(BOOL)isSplitScreen;
-(id)initWithScreen:(id)arg1 hostViewController:(id)arg2 ;
@end

