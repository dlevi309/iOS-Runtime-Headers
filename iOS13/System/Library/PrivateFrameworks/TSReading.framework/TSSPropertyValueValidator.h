/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSSPropertyValueValidator
@required
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+(id)propertiesAllowingNSNull;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
-(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
-(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
-(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
-(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

@end

