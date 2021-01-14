/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMCoreSpotlightUtilities : NSObject
+(BOOL)needsDeferredIndexing;
+(unsigned long long)lastIndexedRowID;
+(void)setNeedsDeferredIndexing;
+(unsigned long long)currentIndexVersion;
+(unsigned long long)expectedIndexVersion;
+(unsigned long long)messageIndexBatchSize:(BOOL)arg1 ;
+(BOOL)bypassIndexVersionCheck;
+(id)descriptionForReindexReason:(unsigned long long)arg1 ;
+(BOOL)needsIndexing;
@end

