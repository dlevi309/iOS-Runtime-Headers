/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMMessageEntryProvider.h>

@protocol IAMMessageEntryProviderDelegate;
@class ICInAppMessageManager, NSString;

@interface IAMICMessageEntryProvider : NSObject <IAMMessageEntryProvider> {

	ICInAppMessageManager* _iTunesCloudIAMManager;
	id<IAMMessageEntryProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IAMMessageEntryProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<IAMMessageEntryProviderDelegate>)delegate;
-(void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<IAMMessageEntryProviderDelegate>)arg1 ;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleMessagesDidChangeNotification;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

