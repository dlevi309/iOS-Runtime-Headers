/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNAuthorization : NSObject
+(BOOL)requestAccessForEntityType:(long long)arg1 ;
+(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
+(long long)authorizationStatusForEntityType:(long long)arg1 ;
+(BOOL)isAccessRestrictedForEntityType:(long long)arg1 ;
+(BOOL)requestAccessForEntityType:(long long)arg1 timeout:(double)arg2 error:(id*)arg3 ;
@end

