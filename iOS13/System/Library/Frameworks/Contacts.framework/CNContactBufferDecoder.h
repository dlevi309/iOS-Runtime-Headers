/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CNMutableContact * pendingContact;                            //@synthesize pendingContact=_pendingContact - In the implementation block
@property (nonatomic,retain) NSMutableData * resumeBuffer;                                 //@synthesize resumeBuffer=_resumeBuffer - In the implementation block
@property (assign,nonatomic) long long bytesNeededToResume;                                //@synthesize bytesNeededToResume=_bytesNeededToResume - In the implementation block
@property (assign,nonatomic) BOOL mutableResults;                                          //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,copy) CNContactKeyVector * keyDescriptorToMakeAvailable;              //@synthesize keyDescriptorToMakeAvailable=_keyDescriptorToMakeAvailable - In the implementation block
@property (readonly) BOOL hasPendingContacts; 
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)contactsFromBuffer:(id)arg1 ;
-(long long)bytesNeededToResume;
-(id)completedPendingContactFromByteCursor:(char**)arg1 end:(char*)arg2 ;
-(id)_contactFromByteCursor:(char**)arg1 end:(char*)arg2 ;
-(CNContactKeyVector *)keyDescriptorToMakeAvailable;
-(BOOL)mutableResults;
-(NSMutableData *)resumeBuffer;
-(void)setBytesNeededToResume:(long long)arg1 ;
-(void)_applyPropertiesFromFromByteCursor:(char**)arg1 end:(char*)arg2 ;
-(CNMutableContact *)pendingContact;
-(void)_applyMultivalueFromByteCursor:(char**)arg1 end:(char*)arg2 abPropertyID:(int)arg3 ;
-(void)_applyImageDataFromByteCursor:(char**)arg1 end:(char*)arg2 ;
-(id)initWithKeyDescriptorToMakeAvailable:(id)arg1 mutableResults:(BOOL)arg2 ;
-(BOOL)hasPendingContacts;
-(void)setMutableResults:(BOOL)arg1 ;
-(void)setKeyDescriptorToMakeAvailable:(CNContactKeyVector *)arg1 ;
-(void)setPendingContact:(CNMutableContact *)arg1 ;
-(void)setResumeBuffer:(NSMutableData *)arg1 ;
@end

