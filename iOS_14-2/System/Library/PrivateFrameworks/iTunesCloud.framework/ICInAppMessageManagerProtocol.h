/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol ICInAppMessageManagerProtocol <NSObject>
@required
-(void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)allMessageEntriesWithCompletion:(/*^block*/id)arg1;
-(void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)flushEventsWithCompletion:(/*^block*/id)arg1;
-(void)messageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getGlobalPropertyForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateMessageEntry:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addMessageEntry:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)resetMessagesWithCompletion:(/*^block*/id)arg1;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getAllMetadataForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)messageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)setGlobalProperty:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncMessagesWithCompletion:(/*^block*/id)arg1;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;

@end

