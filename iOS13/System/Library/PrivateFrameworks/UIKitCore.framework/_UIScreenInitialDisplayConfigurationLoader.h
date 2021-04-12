/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UISDisplayContext;

@interface _UIScreenInitialDisplayConfigurationLoader : NSObject {

	UISDisplayContext* _context;
	BOOL _hasRequestedPreload;

}

@property (nonatomic,readonly) UISDisplayContext * initialDisplayContext; 
+(id)sharedLoader;
-(UISDisplayContext *)initialDisplayContext;
-(void)_startPreloadInitialDisplayContext;
-(id)initialDisplayConfiguration;
@end

