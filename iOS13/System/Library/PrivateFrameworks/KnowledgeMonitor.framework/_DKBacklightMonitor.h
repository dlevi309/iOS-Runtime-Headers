/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBacklightMonitor : _DKMonitor {

	int notifyToken;

}
+(id)entitlements;
+(id)eventStream;
+(id)_eventWithState:(id)arg1 ;
+(BOOL)shouldMergeUnchangedEvents;
+(BOOL)indicatesScreenOnWithNotificationState:(id)arg1 ;
+(void)setIsBacklit:(BOOL)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(void)obtainCurrentValue;
@end

