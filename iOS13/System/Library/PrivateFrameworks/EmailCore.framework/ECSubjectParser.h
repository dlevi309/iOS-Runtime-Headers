/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@interface ECSubjectParser : NSObject
+(unsigned long long)prefixLengthForSubject:(id)arg1 ;
+(id)subjectWithoutPrefixForSubject:(id)arg1 ;
+(id)subjectWithoutPrefixForSubject:(id)arg1 prefix:(id*)arg2 ;
+(BOOL)subjectHasReplyPrefix:(id)arg1 ;
+(unsigned long long)prefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(unsigned long long)_lastPrefixDelimiterLocationForSubject:(id)arg1 ;
+(unsigned long long)_fastPrefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(unsigned long long)_prefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(id)subjectWithoutPrefixIncludingListMarkersForSubject:(id)arg1 prefix:(id*)arg2 ;
@end

