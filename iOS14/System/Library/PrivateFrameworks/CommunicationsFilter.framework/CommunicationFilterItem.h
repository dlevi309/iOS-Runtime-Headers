/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
*/


#import <CommunicationsFilter/CommunicationsFilter-Structs.h>
@class NSString;

@interface CommunicationFilterItem : NSObject {

	CFPhoneNumberRef _phoneNumber;
	NSString* _emailAddress;

}

@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * unformattedID; 
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(NSString *)emailAddress;
-(CFPhoneNumberRef)phoneNumber;
-(BOOL)_acceptVersion:(id)arg1 ;
-(id)description;
-(id)initWithEmailAddress:(id)arg1 ;
-(NSString *)unformattedID;
-(BOOL)isPhoneNumber;
-(id)_dictionaryRepresentationWithRedaction;
-(BOOL)matchesFilterItem:(id)arg1 ;
-(BOOL)_acceptItemType:(id)arg1 ;
-(void)dealloc;
@end

