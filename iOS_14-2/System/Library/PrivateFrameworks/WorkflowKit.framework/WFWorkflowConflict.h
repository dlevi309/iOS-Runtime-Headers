/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)localWorkflowID;
-(void)setLocalWorkflowID:(NSString *)arg1 ;
-(NSString *)remoteWorkflowID;
-(void)setRemoteWorkflowID:(NSString *)arg1 ;
-(id)resolutionKeepingLocal:(BOOL)arg1 keepingRemote:(BOOL)arg2 ;
-(WFWorkflowRecord *)localWorkflowRecord;
-(void)setLocalWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(WFWorkflowRecord *)remoteWorkflowRecord;
-(void)setRemoteWorkflowRecord:(WFWorkflowRecord *)arg1 ;
@end

