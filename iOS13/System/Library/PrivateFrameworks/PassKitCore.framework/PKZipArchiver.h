/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKZipArchiver : NSObject
+(void)noteBOMCopier:(BOMCopierRef)arg1 succeeded:(BOOL)arg2 ;
+(void)associateBOMCopier:(BOMCopierRef)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)disassociateBOMCopier:(BOMCopierRef)arg1 ;
-(void)unzipStream:(id)arg1 toURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)zippedDataForURL:(id)arg1 ;
@end

