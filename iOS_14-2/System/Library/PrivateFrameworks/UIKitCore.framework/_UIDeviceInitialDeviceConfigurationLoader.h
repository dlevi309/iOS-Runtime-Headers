/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

