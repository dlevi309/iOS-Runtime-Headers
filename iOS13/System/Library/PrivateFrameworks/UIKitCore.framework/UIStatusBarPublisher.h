/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {

	CFMachPortRef _machPort;
	int _styleOverrides;
	NSMutableSet* _statusBarItems;

}
-(void)dealloc;
-(void)addStatusBarItem:(int)arg1 ;
-(void)removeStatusBarItem:(int)arg1 ;
-(unsigned)publisherPort;
-(id)initWithCFMachPort:(CFMachPortRef)arg1 ;
-(id)statusBarItems;
-(int)styleOverrides;
-(int)addStyleOverrides:(int)arg1 ;
-(int)removeStyleOverrides:(int)arg1 ;
@end

