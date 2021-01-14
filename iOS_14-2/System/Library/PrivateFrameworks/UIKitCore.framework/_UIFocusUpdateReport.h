/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIFocusSystem *)focusSystem;
-(id)init;
-(UIFocusUpdateContext *)context;
-(BOOL)shouldLog;
-(id)initWithFocusSystem:(id)arg1 ;
-(void)setContext:(UIFocusUpdateContext *)arg1 ;
@end

