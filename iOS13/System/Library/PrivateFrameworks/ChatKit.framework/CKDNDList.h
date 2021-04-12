/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NPSManager;

@interface CKDNDList : NSObject {

	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)sharedList;
-(id)init;
-(void)dealloc;
-(void)performMigrationIfNecessary;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(id)groupHashForHandleIDs:(id)arg1 ;
-(id)groupHashForChat:(id)arg1 ;
-(id)currentList;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 syncToPairedDevice:(BOOL)arg3 ;
-(void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToPairedDevice:(BOOL)arg4 ;
-(void)syncToPairedDeviceIncludingVersion:(BOOL)arg1 ;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(id)_deprecated_globalIdentifierForChat:(id)arg1 ;
-(BOOL)isMutedChat:(id)arg1 ;
-(BOOL)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(BOOL)arg4 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(void)_handleDNDListChanged;
@end

