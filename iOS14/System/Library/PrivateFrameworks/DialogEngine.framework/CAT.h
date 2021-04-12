/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@interface CAT : NSObject
+(void)preload;
+(id)getMorphunPaths;
+(void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(/*^block*/id)arg7 ;
+(void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)evaluate:(id)arg1 propName:(id)arg2 parameters:(id)arg3 globals:(id)arg4 ;
+(id)resolve:(id)arg1 propName:(id)arg2 parameters:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)downloadMorphunDataByLocale:(id)arg1 ;
+(BOOL)downloadMorphunDataByLocales:(id)arg1 ;
+(id)getMorphunPath:(id)arg1 ;
@end

