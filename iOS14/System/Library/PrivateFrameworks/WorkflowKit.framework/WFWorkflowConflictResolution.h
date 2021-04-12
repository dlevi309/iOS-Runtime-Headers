/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)keepLocal;
-(void)setKeepLocal:(BOOL)arg1 ;
-(id)description;
-(NSString *)localWorkflowID;
-(void)setLocalWorkflowID:(NSString *)arg1 ;
-(NSString *)remoteWorkflowID;
-(void)setRemoteWorkflowID:(NSString *)arg1 ;
-(BOOL)keepRemote;
-(void)setKeepRemote:(BOOL)arg1 ;
@end

