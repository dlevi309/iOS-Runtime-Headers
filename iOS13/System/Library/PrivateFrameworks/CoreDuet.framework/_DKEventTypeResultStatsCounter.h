/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKEventStatsCounterInternalProperty.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {

	_DKEventStatsCounterInternal* _internal;

}

@property (retain) _DKEventStatsCounterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 ;
-(id)eventName;
-(_DKEventStatsCounterInternal *)internal;
-(void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(BOOL)arg3 ;
-(unsigned long long)countWithTypeValue:(id)arg1 success:(BOOL)arg2 ;
-(id)eventType;
-(id)typeValues;
-(void)setInternal:(_DKEventStatsCounterInternal *)arg1 ;
-(void)incrementCountWithTypeValue:(id)arg1 success:(BOOL)arg2 ;
@end

