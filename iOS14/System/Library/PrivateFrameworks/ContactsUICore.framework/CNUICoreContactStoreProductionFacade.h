/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreContactStoreFacade.h>
#import <libobjc.A.dylib/CNUICoreParentContainerProvider.h>

@class CNContactStore, NSString;

@interface CNUICoreContactStoreProductionFacade : NSObject <CNUICoreContactStoreFacade, CNUICoreParentContainerProvider> {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)contactStore;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)containerForContact:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
@end

