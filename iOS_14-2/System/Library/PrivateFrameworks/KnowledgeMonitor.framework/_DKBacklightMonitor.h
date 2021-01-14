/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBacklightMonitor : _DKMonitor {

	int notifyToken;

}
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(void)setIsBacklit:(BOOL)arg1 ;
+(id)_eventWithState:(id)arg1 ;
+(BOOL)indicatesScreenOnWithNotificationState:(id)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)obtainCurrentValue;
-(void)dealloc;
@end

