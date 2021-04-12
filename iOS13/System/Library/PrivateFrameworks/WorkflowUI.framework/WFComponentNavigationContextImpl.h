/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFComponentNavigationContext.h>

@class UIViewController, NSHashTable, NSString;

@interface WFComponentNavigationContextImpl : NSObject <WFComponentNavigationContext> {

	UIViewController* _componentHostingViewController;
	NSHashTable* _componentEditingSessions;

}

@property (nonatomic,readonly) NSHashTable * componentEditingSessions;                                //@synthesize componentEditingSessions=_componentEditingSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIViewController * componentHostingViewController;              //@synthesize componentHostingViewController=_componentHostingViewController - In the implementation block
-(id)initWithViewController:(id)arg1 ;
-(void)componentWillBeginEditingSession:(id)arg1 ;
-(void)componentDidEndEditingSession:(id)arg1 ;
-(UIViewController *)componentHostingViewController;
-(void)cancelEditingSessionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSHashTable *)componentEditingSessions;
@end

