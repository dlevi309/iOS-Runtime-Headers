/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGDomainWhitelistChecker : NSObject
+(void)initialize;
+(BOOL)isStructuredEventCandidateForURL:(id)arg1 title:(id)arg2 ;
+(void)setTrieFromPath:(id)arg1 ;
+(SCD_Struct_SG7)payloadForDomain:(id)arg1 ;
+(SCD_Struct_SG7)payloadWithStartChar:(const char*)arg1 andSize:(unsigned long long)arg2 ;
+(BOOL)isStructuredEventCandidateForEmailDomain:(id)arg1 ;
@end

