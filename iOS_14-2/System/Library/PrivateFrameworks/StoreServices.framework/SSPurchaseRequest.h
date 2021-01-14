/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSMutableSet, SSPurchaseManager, NSString;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {

	BOOL _isBackgroundRequest;
	NSArray* _purchases;
	BOOL _shouldValidatePurchases;
	/*^block*/id _completionBlock;
	BOOL _createsDownloads;
	NSMutableSet* _openPurchaseIdentifiers;
	/*^block*/id _purchaseBlock;
	/*^block*/id _purchaseResponseBlock;
	SSPurchaseManager* _purchaseManager;
	BOOL _needsAuthentication;
	BOOL _playbackRequest;
	BOOL _createsJobs;

}

@property (assign,nonatomic) BOOL createsDownloads;                                          //@synthesize createsDownloads=_createsDownloads - In the implementation block
@property (assign,nonatomic) BOOL createsJobs;                                               //@synthesize createsJobs=_createsJobs - In the implementation block
@property (assign,getter=isPlaybackRequest,nonatomic) BOOL playbackRequest;                  //@synthesize playbackRequest=_playbackRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldValidatePurchases;                                   //@synthesize shouldValidatePurchases=_shouldValidatePurchases - In the implementation block
@property (assign,nonatomic) id<SSPurchaseRequestDelegate> delegate; 
@property (readonly) NSArray * purchases; 
@property (assign,getter=isBackgroundRequest,nonatomic) BOOL backgroundRequest;              //@synthesize isBackgroundRequest=_isBackgroundRequest - In the implementation block
@property (assign,nonatomic) BOOL needsAuthentication;                                       //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(id)init;
-(BOOL)start;
-(NSArray *)purchases;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)needsAuthentication;
-(id)initWithPurchases:(id)arg1 ;
-(void)_addPurchasesToManager;
-(void)setCreatesJobs:(BOOL)arg1 ;
-(void)_finishPurchasesWithResponses:(id)arg1 ;
-(void)setCreatesDownloads:(BOOL)arg1 ;
-(id)_purchaseForUniqueIdentifier:(long long)arg1 ;
-(void)startWithPurchaseBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)startWithPurchaseResponseBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isBackgroundRequest;
-(void)setBackgroundRequest:(BOOL)arg1 ;
-(BOOL)createsDownloads;
-(BOOL)isPlaybackRequest;
-(BOOL)shouldValidatePurchases;
-(void)setShouldValidatePurchases:(BOOL)arg1 ;
-(BOOL)createsJobs;
-(void)setPlaybackRequest:(BOOL)arg1 ;
-(void)cancel;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(void)dealloc;
@end

