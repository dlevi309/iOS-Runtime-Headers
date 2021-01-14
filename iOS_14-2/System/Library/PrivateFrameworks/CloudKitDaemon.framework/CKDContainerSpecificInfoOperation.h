/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityCreate;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(BOOL)shouldCheckAppVersion;
-(BOOL)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(void)setRequireUserIDs:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)infoFetchedGroup;
@end

