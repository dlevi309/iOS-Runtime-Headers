/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol BSDescriptionFormatting
@required
-(void)appendString:(id)arg1 withName:(id)arg2;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
-(id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
-(id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
-(id)appendObject:(id)arg1 withName:(id)arg2;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3;
-(void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
-(id)appendInt:(int)arg1 withName:(id)arg2;
-(id)appendInteger:(long long)arg1 withName:(id)arg2;
-(id)appendUnsignedInt:(unsigned)arg1 withName:(id)arg2;
-(id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2;
-(id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(BOOL)arg3;
-(id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
-(id)appendCString:(const char*)arg1 withName:(id)arg2;
-(void)appendProem:(id)arg1 block:(/*^block*/id)arg2;
-(id)appendFlag:(long long)arg1 withName:(id)arg2;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
-(id)appendInt64:(long long)arg1 withName:(id)arg2;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
-(id)appendFloat:(double)arg1 withName:(id)arg2;
-(id)appendPointer:(void*)arg1 withName:(id)arg2;
-(id)appendPoint:(CGPoint)arg1 withName:(id)arg2;
-(id)appendSize:(CGSize)arg1 withName:(id)arg2;
-(id)appendRect:(CGRect)arg1 withName:(id)arg2;
-(id)appendSelector:(SEL)arg1 withName:(id)arg2;
-(id)appendQueue:(id)arg1 withName:(id)arg2;
-(id)appendClass:(Class)arg1 withName:(id)arg2;
-(void)appendCustomFormatWithName:(id)arg1 block:(/*^block*/id)arg2;

@end

