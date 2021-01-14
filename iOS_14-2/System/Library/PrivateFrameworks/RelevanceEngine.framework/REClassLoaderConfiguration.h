/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REClassLoaderConfiguration <NSObject>
@optional
-(BOOL)shouldLoadBundleClass:(Class)arg1 forKey:(id)arg2;

@required
-(Class)desiredClassForLoader;
-(Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;

@end

