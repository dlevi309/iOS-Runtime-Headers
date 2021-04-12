/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString, NSURL;

@interface CNiOSABEKParticipantPredicate : CNPredicate <CNiOSContactPredicate> {

	NSString* _name;
	NSURL* _URL;
	NSString* _emailAddress;
	NSString* _customDescription;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * customDescription;              //@synthesize customDescription=_customDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsNativeBatchFetch;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)customDescription;
-(id)initWithName:(id)arg1 URL:(id)arg2 emailAddress:(id)arg3 customDescription:(id)arg4 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setCustomDescription:(NSString *)arg1 ;
-(BOOL)cn_supportsEncodedFetching;
-(void)encodeWithCoder:(id)arg1 ;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4 ;
-(BOOL)cn_supportsNativeSorting;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(_CFError*)arg5 ;
-(NSString *)name;
-(NSString *)description;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

