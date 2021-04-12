/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/CTKClientSEP_TKTLVRecord.h>

@interface CTKClientSEP_TKBERTLVRecord : CTKClientSEP_TKTLVRecord
+(id)dataForTag:(unsigned long long)arg1 ;
+(unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char*)arg2 ;
+(id)parseFromDataSource:(id)arg1 ;
+(id)zuluDateFormatter;
-(id)initWithPropertyList:(id)arg1 ;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 ;
-(id)initWithTag:(unsigned long long)arg1 records:(id)arg2 ;
-(id)propertyList;
@end

