/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSMutableDictionary;

@interface TUTestState : NSObject {

	NSMutableDictionary* _objects;
	int _signalCount;

}

@property (nonatomic,readonly) int signalCount;              //@synthesize signalCount=_signalCount - In the implementation block
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)signal;
-(void)incrementIntegerForKey:(id)arg1 ;
-(int)waitWithTimeout:(double)arg1 ;
-(int)signalCount;
@end

