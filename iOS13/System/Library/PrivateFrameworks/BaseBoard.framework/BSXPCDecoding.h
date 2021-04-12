/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol BSXPCDecoding <NSObject>
@required
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
-(long long)decodeInt64ForKey:(id)arg1;
-(BOOL)containsValueForKey:(id)arg1;
-(double)decodeDoubleForKey:(id)arg1;
-(BOOL)decodeBoolForKey:(id)arg1;
-(id)decodeXPCObjectOfType:(const xpc_type_sRef)arg1 forKey:(id)arg2;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
-(unsigned long long)decodeUInt64ForKey:(id)arg1;
-(id)decodeStringForKey:(id)arg1;
-(CGPoint*)decodeCGPointForKey:(id)arg1;
-(CGSize*)decodeCGSizeForKey:(id)arg1;
-(CGRect*)decodeCGRectForKey:(id)arg1;

@end

