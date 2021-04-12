/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, WFWorkflowRecord;

@interface WFWorkflowConflict : NSObject {

	NSString* _localWorkflowID;
	WFWorkflowRecord* _localWorkflowRecord;
	NSString* _remoteWorkflowID;
	WFWorkflowRecord* _remoteWorkflowRecord;

}

@property (nonatomic,copy) NSString * localWorkflowID;                             //@synthesize localWorkflowID=_localWorkflowID - In the implementation block
@property (nonatomic,retain) WFWorkflowRecord * localWorkflowRecord;               //@synthesize localWorkflowRecord=_localWorkflowRecord - In the implementation block
@property (nonatomic,copy) NSString * remoteWorkflowID;                            //@synthesize remoteWorkflowID=_remoteWorkflowID - In the implementation block
@property (nonatomic,retain) WFWorkflowRecord * remoteWorkflowRecord;              //@synthesize remoteWorkflowRecord=_remoteWorkflowRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)localWorkflowID;
-(WFWorkflowRecord *)localWorkflowRecord;
-(WFWorkflowRecord *)remoteWorkflowRecord;
-(NSString *)remoteWorkflowID;
-(void)setRemoteWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(void)setRemoteWorkflowID:(NSString *)arg1 ;
-(void)setLocalWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(void)setLocalWorkflowID:(NSString *)arg1 ;
-(id)resolutionKeepingLocal:(BOOL)arg1 keepingRemote:(BOOL)arg2 ;
@end

