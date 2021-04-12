/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASSqliteTransaction : NSObject
+(void)readTransactionWithHandle:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)writeTransactionWithHandle:(id)arg1 block:(/*^block*/id)arg2 ;
+(PASDBTransactionCompletion_)readTransactionWithHandle:(id)arg1 failableBlock:(/*^block*/id)arg2 ;
+(PASDBTransactionCompletion_)writeTransactionWithHandle:(id)arg1 failableBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

