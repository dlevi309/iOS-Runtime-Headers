/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@interface CNErrorFactory : NSObject
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)errorObject:(id)arg1 doesNotImplementSelector:(SEL)arg2 ;
+(id)validationErrorByAggregatingValidationErrors:(id)arg1 ;
+(id)errorByPrependingKeyPath:(id)arg1 toKeyPathsInError:(id)arg2 ;
+(id)genericiOSABError;
+(long long)CNErrorCodeForABError:(CFErrorRef)arg1 ;
+(id)errorForiOSABError:(CFErrorRef)arg1 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)errorByAddingUserInfoEntries:(id)arg1 toError:(id)arg2 ;
+(id)_localizedReasonForCode:(long long)arg1 ;
+(id)_localizedDescriptionForCode:(long long)arg1 ;
@end

