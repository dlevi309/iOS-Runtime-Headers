/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/


@protocol SidecarTransferDelegate;
#import <SidecarCore/SidecarCore-Structs.h>
@class SidecarSession;

@interface SidecarTransfer : NSObject {

	id<SidecarTransferDelegate> _delegate;
	os_unfair_lock_s _lock;
	long long _requestID;
	SidecarSession* _session;
	Ai _suspendCount;
	long long _transferID;

}

@property (assign,nonatomic,__weak) id<SidecarTransferDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long requestID;                                    //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) SidecarSession * session; 
@property (nonatomic,readonly) long long transferID;                                   //@synthesize transferID=_transferID - In the implementation block
-(id<SidecarTransferDelegate>)delegate;
-(SidecarSession *)session;
-(long long)requestID;
-(void)setDelegate:(id<SidecarTransferDelegate>)arg1 ;
-(long long)transferID;
-(id)initWithSession:(id)arg1 requestID:(long long)arg2 transferID:(long long)arg3 ;
-(id)dataForType:(id)arg1 ;
-(/*^block*/id)_resumeMessage:(id)arg1 ;
@end

