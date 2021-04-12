/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol BSXPCEncoding <NSObject>
@required
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2;
-(void)encodeObject:(id)arg1 forKey:(id)arg2;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2;

@end

