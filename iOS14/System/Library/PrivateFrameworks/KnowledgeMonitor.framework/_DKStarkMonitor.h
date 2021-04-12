/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CARSessionObserving.h>

@class CARSessionStatus, NSString;

@interface _DKStarkMonitor : _DKMonitor <CARSessionObserving> {

	CARSessionStatus* _sessionStatus;

}

@property (nonatomic,retain) CARSessionStatus * sessionStatus;              //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
+(id)_eventWithState:(BOOL)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)sessionDidConnect:(id)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(void)start;
-(void)stop;
-(void)deactivate;
-(CARSessionStatus *)sessionStatus;
-(void)setSessionStatus:(CARSessionStatus *)arg1 ;
-(void)updateCurrentState;
-(void)dealloc;
@end

