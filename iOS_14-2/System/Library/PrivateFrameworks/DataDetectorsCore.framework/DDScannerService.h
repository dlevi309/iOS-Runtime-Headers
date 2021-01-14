/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDScannerService : NSObject
+(void)cancelJob:(long long)arg1 ;
+(id)scanString:(id)arg1 ;
+(long long)scanString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)appendWatchOSLinksToString:(id)arg1 ;
+(id)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 ;
+(id)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 ;
+(long long)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
+(long long)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

