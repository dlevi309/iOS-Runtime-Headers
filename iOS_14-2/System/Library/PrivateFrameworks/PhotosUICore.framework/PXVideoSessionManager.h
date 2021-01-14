/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, PXReusableObjectPool, NSMutableDictionary, NSCountedSet, NSArray;

@interface PXVideoSessionManager : PXObservable {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	PXReusableObjectPool* _ivarQueue_playerPool;
	NSMutableDictionary* _ivarQueue_sessionsByIdentifier;
	NSCountedSet* _ivarQueue_sessionCounts;

}

@property (nonatomic,readonly) NSArray * activeSessions; 
+(id)sharedInstance;
-(id)init;
-(id)description;
-(id)checkOutSessionWithContentProvider:(id)arg1 ;
-(void)checkInVideoSession:(id)arg1 ;
-(id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2 livePhotosLoopCrossfadeDuration:(double)arg3 loopTimeRange:(SCD_Struct_PX9)arg4 ;
-(id)mutableChangeObject;
-(NSArray *)activeSessions;
-(void)dealloc;
@end

