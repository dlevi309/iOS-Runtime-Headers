/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class NSMutableArray, NSString;

@interface SBAnalyticsStateMachineEventHandler : NSObject <SBFAnalyticsBackendEventHandling> {

	unsigned long long _currentState;
	NSMutableArray* _edges;

}

@property (nonatomic,readonly) unsigned long long currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)currentState;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(void)addEdge:(id)arg1 ;
@end

