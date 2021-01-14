/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface TPSCloudController : NSObject {

	BOOL _registered;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _displayedContentIDs;

}
+(id)sharedInstance;
-(id)init;
-(void)registerForNotifications:(id)arg1 ;
-(void)dealloc;
-(void)checkForUpdates;
-(void)updateKVStoreItems:(id)arg1 ;
-(BOOL)isHintDisplayedForContentID:(id)arg1 ;
-(void)hintDisplayedForContentID:(id)arg1 ;
-(id)_listDisplayContentIDs;
-(void)_clearDisplayedContentIDs;
@end

