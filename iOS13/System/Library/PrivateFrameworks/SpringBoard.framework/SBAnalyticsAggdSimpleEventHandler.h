/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class NSString;

@interface SBAnalyticsAggdSimpleEventHandler : NSObject <SBFAnalyticsBackendEventHandling> {

	unsigned long long _eventType;
	/*^block*/id _emitBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)latchForEvent:(unsigned long long)arg1 aggdKey:(id)arg2 ;
+(id)monotonicallyIncreasingForEvent:(unsigned long long)arg1 aggdKey:(id)arg2 ;
+(id)setScalarForEvent:(unsigned long long)arg1 aggdKey:(id)arg2 valueBlock:(/*^block*/id)arg3 ;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(id)initWithEvent:(unsigned long long)arg1 emitBlock:(/*^block*/id)arg2 ;
@end

