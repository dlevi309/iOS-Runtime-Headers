/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PLSInvitationRecipient.h>

@class CNComposeRecipient, NSString, NSMutableArray, NSArray;

@interface PXInvitationRecipient : NSObject <PLSInvitationRecipient> {

	CNComposeRecipient* _recipient;
	NSString* _firstName;
	NSString* _lastName;
	NSMutableArray* _allEmails;
	NSMutableArray* _allPhones;
	NSString* _selectedPhoneString;
	NSString* _selectedEmailString;
	NSString* _invalidAddressString;

}

@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * allEmails;                               //@synthesize allEmails=_allEmails - In the implementation block
@property (nonatomic,readonly) NSArray * allPhones;                               //@synthesize allPhones=_allPhones - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedPhoneString;               //@synthesize selectedPhoneString=_selectedPhoneString - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedEmailString;               //@synthesize selectedEmailString=_selectedEmailString - In the implementation block
@property (nonatomic,copy,readonly) NSString * invalidAddressString;              //@synthesize invalidAddressString=_invalidAddressString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_validEmailAddressFromComposeRecipient:(id)arg1 ;
+(id)_validPhoneNumberFromString:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)invalidAddressString;
-(id)init;
-(NSString *)description;
-(id)initWithRecipient:(id)arg1 ;
-(NSString *)selectedEmailString;
-(NSString *)selectedPhoneString;
-(NSString *)displayName;
-(NSArray *)allPhones;
-(NSArray *)allEmails;
@end

