/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


#import <PrintKit/PrintKit-Structs.h>
@interface PKDefaults : NSObject
+(id)lastUsedPrinters;
+(id)lastUsedPrintersForPhoto:(BOOL)arg1 ;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 forPhoto:(BOOL)arg4 ;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 ;
+(long long)printerLookupWithArray:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

