/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

