/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, HMDHomeManager, NSArray;

@interface HMDPendingCloudSyncTransactions : HMFObject {

	BOOL _uploadInProgress;
	NSMutableArray* _pendingReasonsSaved;
	NSMutableArray* _deltaReasonsSaved;
	HMDHomeManager* _homeManager;

}

@property (assign,nonatomic) BOOL uploadInProgress;                              //@synthesize uploadInProgress=_uploadInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingReasonsSaved;               //@synthesize pendingReasonsSaved=_pendingReasonsSaved - In the implementation block
@property (nonatomic,retain) NSMutableArray * deltaReasonsSaved;                 //@synthesize deltaReasonsSaved=_deltaReasonsSaved - In the implementation block
@property (nonatomic,__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSArray * reasonsSaved; 
@property (nonatomic,readonly) NSArray * allReasonsSaved; 
+(id)convertSaveReasonToTransationReason:(id)arg1 ;
-(id)init;
-(void)reset;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(void)setUploadInProgress:(BOOL)arg1 ;
-(NSMutableArray *)pendingReasonsSaved;
-(NSMutableArray *)deltaReasonsSaved;
-(void)_addReasonSaved:(id)arg1 information:(id)arg2 ;
-(BOOL)uploadInProgress;
-(void)startUpload;
-(void)stopUploadAndClean;
-(void)stopUploadAndResume;
-(void)addReasonSaved:(id)arg1 information:(id)arg2 ;
-(void)loadReasonsSaved:(id)arg1 ;
-(NSArray *)reasonsSaved;
-(NSArray *)allReasonsSaved;
-(void)setPendingReasonsSaved:(NSMutableArray *)arg1 ;
-(void)setDeltaReasonsSaved:(NSMutableArray *)arg1 ;
@end

