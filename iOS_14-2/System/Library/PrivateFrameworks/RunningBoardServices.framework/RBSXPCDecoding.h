/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol RBSXPCDecoding <NSObject>
@required
-(BOOL)containsValueForKey:(id)arg1;
-(long long)decodeInt64ForKey:(id)arg1;
-(BOOL)decodeBoolForKey:(id)arg1;
-(id)decodeStringForKey:(id)arg1;
-(double)decodeDoubleForKey:(id)arg1;
-(unsigned long long)decodeUInt64ForKey:(id)arg1;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
-(id)decodeXPCObjectOfType:(const xpc_type_sRef)arg1 forKey:(id)arg2;

@end

