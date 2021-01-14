/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUIContactsAuthorizationModelFetching.h>
#import <libobjc.A.dylib/CNUIContactsAuthorizationModelSaving.h>

@protocol CNTCCSettings, CNUICoreRemoteApplicationIconFetching;
@class NSString;

@interface CNUIContactsAuthorizationStore : NSObject <CNUIContactsAuthorizationModelFetching, CNUIContactsAuthorizationModelSaving> {

	NSString* _bundleIdentifier;
	id<CNTCCSettings> _tccSettings;
	id<CNUICoreRemoteApplicationIconFetching> _iconFetcher;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) id<CNTCCSettings> tccSettings;                                      //@synthesize tccSettings=_tccSettings - In the implementation block
@property (nonatomic,readonly) id<CNUICoreRemoteApplicationIconFetching> iconFetcher;              //@synthesize iconFetcher=_iconFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)records;
-(NSString *)bundleIdentifier;
-(id<CNTCCSettings>)tccSettings;
-(id)saveContactsAuthorizationModel:(id)arg1 ;
-(id)contactsAuthorizationModel;
-(id)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:(id)arg1 ;
-(id)recordForBundleIdentifier:(id)arg1 ;
-(id<CNUICoreRemoteApplicationIconFetching>)iconFetcher;
@end

