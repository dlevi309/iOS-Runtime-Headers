/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

