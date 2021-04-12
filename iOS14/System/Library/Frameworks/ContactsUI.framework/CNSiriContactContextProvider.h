/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContact *)contact;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)setStore:(CNContactStore *)arg1 ;
-(CNContactStore *)store;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)defaultContextManager;
-(id)getCurrentContext;
-(id)initWithContact:(id)arg1 store:(id)arg2 ;
-(void)_removeContextProviderOnMainThread;
-(BOOL)isEnabled;
-(void)dealloc;
@end

