/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

