/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMCoreSpotlightUtilities : NSObject
+(BOOL)needsIndexing;
+(BOOL)needsDeferredIndexing;
+(void)setNeedsDeferredIndexing;
+(unsigned long long)lastIndexedRowID;
+(unsigned long long)currentIndexVersion;
+(unsigned long long)expectedIndexVersion;
+(unsigned long long)messageIndexBatchSize:(BOOL)arg1 ;
+(BOOL)bypassIndexVersionCheck;
+(id)descriptionForReindexReason:(unsigned long long)arg1 ;
@end

