/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@class CDPContext;

@interface CDPDRecoveryFlowContext : NSObject {

	BOOL _hasPeersForRemoteApproval;
	CDPContext* _context;

}

@property (nonatomic,retain) CDPContext * context;                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasPeersForRemoteApproval;              //@synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval - In the implementation block
-(CDPContext *)context;
-(void)setContext:(CDPContext *)arg1 ;
-(BOOL)hasPeersForRemoteApproval;
-(void)setHasPeersForRemoteApproval:(BOOL)arg1 ;
@end

