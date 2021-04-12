/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFUnfairLock, NSMapTable, VCPHomeKitAnalysisService, NSString;

@interface HMIAnalysisService : HMFObject <HMFLogging> {

	BOOL _runRemotely;
	int _nextRequestID;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFUnfairLock* _lock;
	NSMapTable* _requests;
	VCPHomeKitAnalysisService* _analysisService;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (assign) int nextRequestID;                                                  //@synthesize nextRequestID=_nextRequestID - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                   //@synthesize lock=_lock - In the implementation block
@property (readonly) NSMapTable * requests;                                            //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) VCPHomeKitAnalysisService * analysisService;              //@synthesize analysisService=_analysisService - In the implementation block
@property (assign) BOOL runRemotely;                                                   //@synthesize runRemotely=_runRemotely - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(int)requestAnalysisForService:(id)arg1 assetData:(id)arg2 properties:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(HMFUnfairLock *)lock;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMapTable *)requests;
-(BOOL)cancelRequest:(int)arg1 ;
-(int)nextRequestID;
-(id)expectedClasses;
-(void)setNextRequestID:(int)arg1 ;
-(void)setRunRemotely:(BOOL)arg1 ;
-(int)requestAnalysisForAssetData:(id)arg1 withProperties:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(VCPHomeKitAnalysisService *)analysisService;
-(BOOL)runRemotely;
-(int)getNextRequestID;
-(int)requestAnalysisForPixelBuffer:(CVBufferRef)arg1 withProperties:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)setAnalysisService:(VCPHomeKitAnalysisService *)arg1 ;
@end
