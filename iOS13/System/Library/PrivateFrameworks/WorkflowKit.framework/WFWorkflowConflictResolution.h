/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString;

@interface WFWorkflowConflictResolution : NSObject {

	BOOL _keepLocal;
	BOOL _keepRemote;
	NSString* _localWorkflowID;
	NSString* _remoteWorkflowID;

}

@property (nonatomic,copy) NSString * localWorkflowID;               //@synthesize localWorkflowID=_localWorkflowID - In the implementation block
@property (nonatomic,copy) NSString * remoteWorkflowID;              //@synthesize remoteWorkflowID=_remoteWorkflowID - In the implementation block
@property (assign,nonatomic) BOOL keepLocal;                         //@synthesize keepLocal=_keepLocal - In the implementation block
@property (assign,nonatomic) BOOL keepRemote;                        //@synthesize keepRemote=_keepRemote - In the implementation block
-(id)description;
-(BOOL)keepLocal;
-(void)setKeepLocal:(BOOL)arg1 ;
-(NSString *)localWorkflowID;
-(NSString *)remoteWorkflowID;
-(BOOL)keepRemote;
-(void)setRemoteWorkflowID:(NSString *)arg1 ;
-(void)setLocalWorkflowID:(NSString *)arg1 ;
-(void)setKeepRemote:(BOOL)arg1 ;
@end

