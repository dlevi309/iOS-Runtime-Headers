/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@protocol OS_dispatch_group;
@class CKDContainerInfo, NSObject;

@interface CKDContainerSpecificInfoOperation : CKDOperation {

	BOOL _requireUserIDs;
	CKDContainerInfo* _containerInfo;
	NSObject*<OS_dispatch_group> _infoFetchedGroup;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;                               //@synthesize containerInfo=_containerInfo - In the implementation block
@property (assign,nonatomic) BOOL requireUserIDs;                                          //@synthesize requireUserIDs=_requireUserIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> infoFetchedGroup;              //@synthesize infoFetchedGroup=_infoFetchedGroup - In the implementation block
-(void)main;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)shouldCheckAppVersion;
-(BOOL)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(void)setRequireUserIDs:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)infoFetchedGroup;
@end

