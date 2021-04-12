/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <SidecarCore/SidecarTransfer.h>

@class NSMutableDictionary, NSMutableArray;

@interface SidecarTransferReceiver : SidecarTransfer {

	NSMutableDictionary* _groups;
	NSMutableArray* _orderedGroups;

}
-(void)handleMessage:(id)arg1 ;
-(id)initWithSession:(id)arg1 requestID:(long long)arg2 ;
-(/*^block*/id)_resumeMessage:(id)arg1 ;
@end

