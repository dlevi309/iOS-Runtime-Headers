/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

