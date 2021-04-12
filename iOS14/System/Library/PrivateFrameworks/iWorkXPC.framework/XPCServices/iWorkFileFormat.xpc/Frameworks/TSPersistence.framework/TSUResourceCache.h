/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSUResourceCache <NSObject>
@required
-(void)purge;
-(void)cacheResourceAtURL:(id)arg1 forInfo:(id)arg2 copy:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(BOOL)cachedResourceExistsForInfo:(id)arg1;

@end

