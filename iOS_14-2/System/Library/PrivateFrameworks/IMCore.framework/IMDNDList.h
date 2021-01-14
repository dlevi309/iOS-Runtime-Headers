/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NPSManager;

@interface IMDNDList : NSObject {

	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)sharedList;
-(id)init;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToPairedDevice:(BOOL)arg4 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 syncToPairedDevice:(BOOL)arg3 ;
-(void)syncToPairedDeviceIncludingVersion:(BOOL)arg1 ;
-(NPSManager *)syncManager;
-(void)dealloc;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)groupHashForHandleIDs:(id)arg1 ;
-(id)groupHashForChat:(id)arg1 ;
-(id)currentList;
-(BOOL)isMutedChat:(id)arg1 ;
-(BOOL)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(BOOL)arg4 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(void)_handleDNDListChanged;
@end

