/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class NSSet, HMHome, HFMediaAccessControlEditorItemProvider, NSString;

@interface HFMediaAccessControlEditorItemModule : HFItemModule <HFHomeObserver> {

	NSSet* _itemProviders;
	HMHome* _home;
	HFMediaAccessControlEditorItemProvider* _accessControlEditorItemProvider;

}

@property (nonatomic,readonly) HMHome * home;                                                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFMediaAccessControlEditorItemProvider * accessControlEditorItemProvider;              //@synthesize accessControlEditorItemProvider=_accessControlEditorItemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptionFooterTextForAccessControlDescriptor:(id)arg1 hasNonPeerToPeerMediaAccessories:(BOOL)arg2 ;
-(HMHome *)home;
-(id)itemProviders;
-(void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2 ;
-(void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(BOOL)arg2 ;
-(void)home:(id)arg1 didUpdateMediaPassword:(id)arg2 ;
-(BOOL)containsItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(HFMediaAccessControlEditorItemProvider *)accessControlEditorItemProvider;
-(BOOL)_hasNonPeerToPeerMediaAccessories;
-(id)updateAccessControlDescriptor:(id)arg1 ;
@end

