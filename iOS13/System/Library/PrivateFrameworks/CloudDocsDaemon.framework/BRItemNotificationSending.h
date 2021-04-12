/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol BRItemNotificationSending <BRCancellable>
@required
-(void)boostPriority:(/*^block*/id)arg1;
-(void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 gatherReply:(/*^block*/id)arg3;
-(void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatherReply:(/*^block*/id)arg4;
-(void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatherReply:(/*^block*/id)arg3;
-(void)watchScopes:(unsigned short)arg1 gatherReply:(/*^block*/id)arg2;

@end

