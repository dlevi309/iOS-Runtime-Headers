/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFPrivacy : NSObject
+(id)ec_partiallyRedactedStringForSubjectOrSummary:(id)arg1 ;
+(id)ec_redactedStringForMailboxURL:(id)arg1 ;
+(id)ec_partiallyRedactedStringForAddress:(id)arg1 localPart:(id)arg2 domain:(id)arg3 ;
+(id)partiallyRedactedStringForString:(id)arg1 ;
+(id)fullyRedactedStringForString:(id)arg1 ;
+(long long)weeksSinceDate:(id)arg1 ;
+(id)partiallyRedactedStringForString:(id)arg1 maximumUnredactedLength:(unsigned long long)arg2 ;
+(id)dateByRemovingTimeComponentsFromDate:(id)arg1 ;
+(unsigned)bucketMessageCount:(unsigned long long)arg1 ;
@end

