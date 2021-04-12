/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXCMMInvitationParticipant.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, PXRecipientTransport, CNContact;

@interface PXRecipient : NSObject <PXCMMInvitationParticipant, NSCopying> {

	NSString* _firstName;
	NSString* _lastName;
	NSSet* _allEmails;
	NSSet* _allPhones;
	NSSet* _unformattedAllPhones;
	NSString* _phoneNumberString;
	NSString* _emailAddressString;
	PXRecipientTransport* _suggestedTransport;
	NSString* _localizedName;
	CNContact* _contact;

}

@property (nonatomic,readonly) NSString * emailAddressString; 
@property (nonatomic,readonly) NSString * phoneNumberString; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * firstName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXRecipientTransport * suggestedTransport;              //@synthesize suggestedTransport=_suggestedTransport - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                            //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                             //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSSet * allEmails;                                    //@synthesize allEmails=_allEmails - In the implementation block
@property (nonatomic,readonly) NSSet * allPhones;                                    //@synthesize allPhones=_allPhones - In the implementation block
@property (nonatomic,readonly) NSSet * unformattedAllPhones;                         //@synthesize unformattedAllPhones=_unformattedAllPhones - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumberString;                    //@synthesize phoneNumberString=_phoneNumberString - In the implementation block
@property (nonatomic,copy,readonly) NSString * emailAddressString;                   //@synthesize emailAddressString=_emailAddressString - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                        //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                  //@synthesize contact=_contact - In the implementation block
+(id)new;
+(id)_contactForAddress:(id)arg1 recipientKind:(long long)arg2 ;
-(NSString *)firstName;
-(NSString *)localizedName;
-(NSString *)lastName;
-(CNContact *)contact;
-(id)init;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddress:(id)arg1 nameComponents:(id)arg2 recipientKind:(long long)arg3 ;
-(id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4 ;
-(NSSet *)unformattedAllPhones;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;
-(PXRecipientTransport *)suggestedTransport;
-(void)setSuggestedTransport:(PXRecipientTransport *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)allPhones;
-(NSSet *)allEmails;
@end

