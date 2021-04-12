/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSMutableDictionary;

@interface TUTestState : NSObject {

	NSMutableDictionary* _objects;
	int _signalCount;

}

@property (nonatomic,readonly) int signalCount;              //@synthesize signalCount=_signalCount - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(int)waitWithTimeout:(double)arg1 ;
-(id)description;
-(int)signalCount;
-(void)incrementIntegerForKey:(id)arg1 ;
-(void)signal;
@end

