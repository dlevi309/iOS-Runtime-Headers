/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
*/


@interface MCMContainerManager : NSObject
+(id)defaultManager;
-(id)init;
-(id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 createIfNecessary:(BOOL)arg3 existed:(BOOL*)arg4 error:(id*)arg5 ;
-(id)temporaryContainerWithContentClass:(long long)arg1 identifier:(id)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
-(id)containersWithClass:(long long)arg1 error:(id*)arg2 ;
-(id)temporaryContainersWithClass:(long long)arg1 error:(id*)arg2 ;
-(id)deleteContainers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 ;
-(BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_containersWithClass:(long long)arg1 temporary:(BOOL)arg2 error:(id*)arg3 ;
@end

