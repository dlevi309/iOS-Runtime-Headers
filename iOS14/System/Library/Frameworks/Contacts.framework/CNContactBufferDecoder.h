/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNContactKeyVector, CNMutableContact, NSMutableData;

@interface CNContactBufferDecoder : NSObject {

	BOOL _mutableResults;
	CNContactKeyVector* _keyDescriptorToMakeAvailable;
	long long _state;
	CNMutableContact* _pendingContact;
	NSMutableData* _resumeBuffer;
	long long _bytesNeededToResume;

}

@property (assign,nonatomic) BOOL mutableResults;                                          //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,copy) CNContactKeyVector * keyDescriptorToMakeAvailable;              //@synthesize keyDescriptorToMakeAvailable=_keyDescriptorToMakeAvailable - In the implementation block
@property (readonly) BOOL hasPendingContacts; 
-(CNContactKeyVector *)keyDescriptorToMakeAvailable;
-(id)initWithKeyDescriptorToMakeAvailable:(id)arg1 mutableResults:(BOOL)arg2 ;
-(void)setKeyDescriptorToMakeAvailable:(CNContactKeyVector *)arg1 ;
-(BOOL)mutableResults;
-(id)contactsFromBuffer:(id)arg1 ;
-(void)setMutableResults:(BOOL)arg1 ;
-(BOOL)hasPendingContacts;
@end

