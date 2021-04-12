/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@class CNContact, CNContactStore;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider> {

	BOOL _isEnabled;
	CNContact* _contact;
	CNContactStore* _store;

}

@property (nonatomic,retain) CNContact * contact;                 //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactStore * store;              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                      //@synthesize isEnabled=_isEnabled - In the implementation block
+(id)descriptorForRequiredKeys;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(CNContactStore *)store;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setStore:(CNContactStore *)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(id)initWithContact:(id)arg1 store:(id)arg2 ;
-(void)_removeContextProviderOnMainThread;
-(id)defaultContextManager;
@end

