/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <libobjc.A.dylib/WFComponentNavigationContext.h>

@class UIViewController, NSHashTable, NSString;

@interface WFComponentNavigationContextImpl : NSObject <WFComponentNavigationContext> {

	UIViewController* _componentHostingViewController;
	NSHashTable* _componentEditingSessions;

}

@property (nonatomic,readonly) NSHashTable * componentEditingSessions;                                //@synthesize componentEditingSessions=_componentEditingSessions - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * componentHostingViewController;              //@synthesize componentHostingViewController=_componentHostingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewController:(id)arg1 ;
-(UIViewController *)componentHostingViewController;
-(void)componentWillBeginEditingSession:(id)arg1 ;
-(void)componentDidEndEditingSession:(id)arg1 ;
-(void)cancelEditingSessionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSHashTable *)componentEditingSessions;
@end

