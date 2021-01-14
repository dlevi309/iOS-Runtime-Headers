/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString;

@interface CNiOSABOrganizationNameContactPredicate : CNPredicate <CNiOSContactPredicate> {

	NSString* _organizationName;

}

@property (nonatomic,copy,readonly) NSString * organizationName;              //@synthesize organizationName=_organizationName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsNativeBatchFetch;
-(NSString *)organizationName;
-(BOOL)cn_supportsEncodedFetching;
-(void)encodeWithCoder:(id)arg1 ;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4 ;
-(BOOL)cn_supportsNativeSorting;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(_CFError*)arg5 ;
-(NSString *)description;
-(id)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 nserror:(id*)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOrganizationName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

