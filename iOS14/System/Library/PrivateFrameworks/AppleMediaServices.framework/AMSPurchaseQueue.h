/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSPurchaseDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol OS_dispatch_queue;
@class AMSURLSession, NSMutableArray, AMSPurchaseQueueConfiguration, NSObject, NSLock, NSString;

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer> {

	AMSURLSession* _session;
	BOOL _isSuspeneded;
	NSMutableArray* _batches;
	AMSPurchaseQueueConfiguration* _config;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSLock* _lock;

}

@property (nonatomic,retain) NSMutableArray * batches;                                //@synthesize batches=_batches - In the implementation block
@property (nonatomic,retain) AMSPurchaseQueueConfiguration * config;                  //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL isSuspeneded;                                       //@synthesize isSuspeneded=_isSuspeneded - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                           //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(AMSPurchaseQueueConfiguration *)config;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)batches;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSLock *)lock;
-(void)setBatches:(NSMutableArray *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleNextPurchase;
-(BOOL)isSuspeneded;
-(void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processPurchase:(id)arg1 ;
-(id)enquePurchases:(id)arg1 ;
-(void)setIsSuspeneded:(BOOL)arg1 ;
-(void)setSuspended:(BOOL)arg1 logUUID:(id)arg2 ;
-(void)setConfig:(AMSPurchaseQueueConfiguration *)arg1 ;
@end

