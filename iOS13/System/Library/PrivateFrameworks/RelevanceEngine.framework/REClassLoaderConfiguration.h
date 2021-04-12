/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REClassLoaderConfiguration <NSObject>
@optional
-(BOOL)shouldLoadBundleClass:(Class)arg1 forKey:(id)arg2;

@required
-(Class)desiredClassForLoader;
-(Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;

@end

