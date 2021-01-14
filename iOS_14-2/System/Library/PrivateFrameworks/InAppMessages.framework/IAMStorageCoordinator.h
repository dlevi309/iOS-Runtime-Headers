/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMMessageEntryProviderDelegate.h>

@protocol IAMMessageEntryProvider, IAMMessageMetadataStorage, IAMPropertyStorage, IAMStorageCoordinatorDelegate;
@class NSSet, IAMICStorageProvider, NSString;

@interface IAMStorageCoordinator : NSObject <IAMMessageEntryProviderDelegate> {

	id<IAMMessageEntryProvider> _messageEntryProvider;
	id<IAMMessageMetadataStorage> _messageMetadataStorage;
	id<IAMPropertyStorage> _propertyStorage;
	NSSet* _messageBundleIdentifiers;
	IAMICStorageProvider* _iTunesCloudStorageProvider;
	id<IAMStorageCoordinatorDelegate> _delegate;

}

@property (nonatomic,readonly) IAMICStorageProvider * iTunesCloudStorageProvider;              //@synthesize iTunesCloudStorageProvider=_iTunesCloudStorageProvider - In the implementation block
@property (assign,nonatomic,__weak) id<IAMStorageCoordinatorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_propertyNameForGlobalPresentationPolicyGroupLastDisplayTime:(int)arg1 ;
-(void)fetchMessagesEntriesAndMetadata:(/*^block*/id)arg1 ;
-(id)initWithMessageEntryProvider:(id)arg1 messageMetadataStorage:(id)arg2 propertyStorage:(id)arg3 messageBundleIdentifiers:(id)arg4 ;
-(void)fetchGlobalPresentationPolicyGroupDisplayTimes:(/*^block*/id)arg1 ;
-(void)updateLastDisplayTimeGlobalPresentationPolicyGroupNormal:(id)arg1 ;
-(void)updateLastDisplayTimeGlobalPresentationPolicyGroupRestricted:(id)arg1 ;
-(void)downloadResourcesForMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMetadata:(id)arg1 forMessageEntry:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<IAMStorageCoordinatorDelegate>)delegate;
-(IAMICStorageProvider *)iTunesCloudStorageProvider;
-(void)_fetchMessagesMetadata:(/*^block*/id)arg1 ;
-(void)_fetchMessageEntries:(/*^block*/id)arg1 ;
-(void)_fetchLastDisplayTimeForGlobalPresentationPolicyGroup:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateLastDisplayTime:(id)arg1 forGlobalPresentationPolicyGroup:(int)arg2 ;
-(void)removeMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<IAMStorageCoordinatorDelegate>)arg1 ;
-(void)messageEntriesDidChange:(id)arg1 ;
@end

