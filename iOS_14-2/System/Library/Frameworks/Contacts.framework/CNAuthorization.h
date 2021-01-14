/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNAuthorization : NSObject
+(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(long long)authorizationStatusForEntityType:(long long)arg1 ;
+(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
+(id)logger;
+(BOOL)isAccessRestrictedForEntityType:(long long)arg1 ;
@end

