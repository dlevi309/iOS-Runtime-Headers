/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class CNContactStore;

@interface HFContactStore : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) CNContactStore * backingStore; 
+(id)defaultStore;
-(id)init;
-(CNContactStore *)contactStore;
-(CNContactStore *)backingStore;
-(id)_meContactWithEmailAddress:(id)arg1 keys:(id)arg2 ;
-(id)contactForEmailAddress:(id)arg1 withKeys:(id)arg2 ;
-(id)_fallbackContactWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 ;
-(id)contactForUserHandle:(id)arg1 withKeys:(id)arg2 ;
-(id)contactForPhoneNumber:(id)arg1 withKeys:(id)arg2 ;
@end

