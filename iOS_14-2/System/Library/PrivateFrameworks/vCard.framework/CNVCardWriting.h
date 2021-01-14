/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@interface CNVCardWriting : NSObject
+(id)dataWithPeople:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)stringWithPeople:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)stringWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(void)serializePerson:(id)arg1 withSerializer:(id)arg2 options:(id)arg3 ;
+(id)dataWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)blacklistedMeCardFields;
+(id)blacklistFieldsForPerson:(id)arg1 options:(id)arg2 ;
+(id)scopeForPerson:(id)arg1 options:(id)arg2 ;
+(void)makevCardWithBuilder:(id)arg1 serializer:(id)arg2 options:(id)arg3 ;
@end

