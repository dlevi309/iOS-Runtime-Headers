/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@interface ECSubjectParser : NSObject
+(id)subjectWithoutPrefixForSubject:(id)arg1 ;
+(unsigned long long)prefixLengthForSubject:(id)arg1 ;
+(id)subjectWithoutPrefixForSubject:(id)arg1 prefix:(id*)arg2 ;
+(BOOL)subjectHasReplyPrefix:(id)arg1 ;
+(unsigned long long)prefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(unsigned long long)_lastPrefixDelimiterLocationForSubject:(id)arg1 ;
+(unsigned long long)_fastPrefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(unsigned long long)_prefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(id)subjectWithoutPrefixIncludingListMarkersForSubject:(id)arg1 prefix:(id*)arg2 ;
@end

