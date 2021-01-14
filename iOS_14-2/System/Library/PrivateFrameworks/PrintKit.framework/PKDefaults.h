/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


#import <PrintKit/PrintKit-Structs.h>
@interface PKDefaults : NSObject
+(id)lastUsedPrintersForPhoto:(BOOL)arg1 ;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 forPhoto:(BOOL)arg4 ;
+(id)lastUsedPrinters;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 ;
+(long long)printerLookupWithArray:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

