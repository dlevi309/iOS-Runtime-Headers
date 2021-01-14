/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@interface CNErrorFactory : NSObject
+(id)errorForiOSABError:(CFErrorRef)arg1 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)errorByPrependingKeyPath:(id)arg1 toKeyPathsInError:(id)arg2 ;
+(id)genericiOSABError;
+(id)validationErrorByAggregatingValidationErrors:(id)arg1 ;
+(id)_localizedReasonForCode:(long long)arg1 ;
+(id)errorByAddingUserInfoEntries:(id)arg1 toError:(id)arg2 ;
+(id)_localizedDescriptionForCode:(long long)arg1 ;
+(long long)CNErrorCodeForABError:(CFErrorRef)arg1 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)errorObject:(id)arg1 doesNotImplementSelector:(SEL)arg2 ;
@end

