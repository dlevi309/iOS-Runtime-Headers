/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(HMFUnfairLock *)lock;
-(void)setNextRequestID:(int)arg1 ;
-(id)expectedClasses;
-(NSMapTable *)requests;
-(VCPHomeKitAnalysisService *)analysisService;
-(int)nextRequestID;
-(BOOL)cancelRequest:(int)arg1 ;
-(void)setRunRemotely:(BOOL)arg1 ;
-(int)requestAnalysisForAssetData:(id)arg1 withProperties:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)runRemotely;
-(int)getNextRequestID;
-(int)requestAnalysisForPixelBuffer:(CVBufferRef)arg1 withProperties:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)setAnalysisService:(VCPHomeKitAnalysisService *)arg1 ;
@end

