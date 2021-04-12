/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDScannerService : NSObject
+(id)scanString:(id)arg1 ;
+(long long)scanString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)cancelJob:(long long)arg1 ;
+(id)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 ;
+(void)appendWatchOSLinksToString:(id)arg1 ;
+(id)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 ;
+(long long)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
+(long long)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

