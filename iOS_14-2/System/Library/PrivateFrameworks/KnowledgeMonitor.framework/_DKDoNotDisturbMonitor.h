/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/DNDStateUpdateListener.h>

@class DNDStateService, NSString;

@interface _DKDoNotDisturbMonitor : _DKMonitor <DNDStateUpdateListener> {

	DNDStateService* _dndStateService;

}

@property (nonatomic,retain) DNDStateService * dndStateService;              //@synthesize dndStateService=_dndStateService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(id)_eventWithState:(BOOL)arg1 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)setDndStateService:(DNDStateService *)arg1 ;
-(void)start;
-(void)stop;
-(DNDStateService *)dndStateService;
@end

