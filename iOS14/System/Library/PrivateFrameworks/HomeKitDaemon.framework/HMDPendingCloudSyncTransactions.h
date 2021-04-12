/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithHomeManager:(id)arg1 ;
-(void)reset;
-(HMDHomeManager *)homeManager;
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

