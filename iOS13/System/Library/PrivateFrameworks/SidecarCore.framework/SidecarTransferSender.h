/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <SidecarCore/SidecarTransfer.h>

@class NSArray, NSMutableArray;

@interface SidecarTransferSender : SidecarTransfer {

	long long _itemID;
	NSArray* _items;
	NSMutableArray* _slices;
	long long _type;

}

@property (nonatomic,readonly) long long type; 
-(long long)type;
-(void)sendItems:(id)arg1 messageType:(long long)arg2 ;
-(id)initWithSession:(id)arg1 requestID:(long long)arg2 transferID:(long long)arg3 ;
-(/*^block*/id)_resumeMessage:(id)arg1 ;
-(void)_sendCompletion:(id)arg1 ;
@end

