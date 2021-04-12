/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIFocusSystem, UIFocusUpdateContext;

@interface _UIFocusUpdateReport : NSObject {

	UIFocusSystem* _focusSystem;
	UIFocusUpdateContext* _context;

}

@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,retain) UIFocusUpdateContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldLog; 
-(id)init;
-(UIFocusUpdateContext *)context;
-(void)setContext:(UIFocusUpdateContext *)arg1 ;
-(UIFocusSystem *)focusSystem;
-(id)initWithFocusSystem:(id)arg1 ;
-(BOOL)shouldLog;
@end

