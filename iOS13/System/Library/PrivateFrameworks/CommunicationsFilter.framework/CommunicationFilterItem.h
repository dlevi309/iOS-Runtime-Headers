/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)dictionaryRepresentation;
-(CFPhoneNumberRef)phoneNumber;
-(NSString *)emailAddress;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(NSString *)unformattedID;
-(BOOL)isPhoneNumber;
-(id)_dictionaryRepresentationWithRedaction;
-(BOOL)_acceptItemType:(id)arg1 ;
-(BOOL)_acceptVersion:(id)arg1 ;
-(BOOL)matchesFilterItem:(id)arg1 ;
@end

