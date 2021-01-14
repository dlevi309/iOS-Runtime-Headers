/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFDefaultShortcutPersonalizationContext;

@interface WFDefaultShortcutPersonalization : NSObject {

	WFDefaultShortcutPersonalizationContext* _context;

}

@property (nonatomic,readonly) WFDefaultShortcutPersonalizationContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(WFDefaultShortcutPersonalizationContext *)context;
-(void)generateDefaultShortcutsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)personalizeDefaultShortcuts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

