/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHPhotoLibraryExecutionContext.h>

@class NSString;

@interface PHSynchronousPhotoLibraryExecutionContext : NSObject <PHPhotoLibraryExecutionContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)synchronousExecutionContext;
-(void)callTransactionCompletionHandler:(/*^block*/id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)sendChangesRequest:(id)arg1 onClient:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dispatchOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

