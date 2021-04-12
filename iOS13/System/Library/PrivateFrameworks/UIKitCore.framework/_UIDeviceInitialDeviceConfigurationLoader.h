/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UISDeviceContext;

@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject {

	UISDeviceContext* _context;
	BOOL _hasRequestedPreload;

}

@property (nonatomic,readonly) UISDeviceContext * initialDeviceContext; 
+(id)sharedLoader;
-(UISDeviceContext *)initialDeviceContext;
-(void)_startPreloadInitialDeviceContext;
@end

