/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UISDisplayContext;

@interface _UIScreenInitialDisplayConfigurationLoader : NSObject {

	UISDisplayContext* _context;
	BOOL _hasRequestedPreload;

}

@property (nonatomic,readonly) UISDisplayContext * initialDisplayContext; 
+(id)sharedLoader;
-(void)_startPreloadInitialDisplayContext;
-(UISDisplayContext *)initialDisplayContext;
@end

