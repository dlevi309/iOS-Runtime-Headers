/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSNumber, NSMutableOrderedSet, NSMutableArray, NSString, SSURLRequestProperties, NSLock, NSURL;

@interface SSVLoadDownloadQueueOperation : SSVComplexOperation {

	NSNumber* _accountIdentifier;
	NSMutableOrderedSet* _downloads;
	BOOL _needsAuthentication;
	NSMutableArray* _rangesToLoad;
	long long _reason;
	NSString* _requestIdentifier;
	SSURLRequestProperties* _requestProperties;
	NSString* _mdSyncState;
	NSLock* _lock;
	NSURL* _requestURL;
	NSString* _powerAssertionIdentifier;
	NSString* _storeCorrelationID;

}

@property (readonly) SSURLRequestProperties * requestProperties; 
@property (retain) NSNumber * accountIdentifier; 
@property (assign) BOOL needsAuthentication; 
@property (assign) long long reason; 
@property (copy) NSString * requestIdentifier; 
@property (nonatomic,copy) NSURL * requestURL;                                //@synthesize requestURL=_requestURL - In the implementation block
@property (readonly) NSMutableOrderedSet * downloads; 
@property (retain) NSString * powerAssertionIdentifier;                       //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeCorrelationID;                     //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
+(id)newLoadAutomaticDownloadQueueOperation;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSMutableOrderedSet *)downloads;
-(void)unlock;
-(NSString *)requestIdentifier;
-(id)init;
-(NSNumber *)accountIdentifier;
-(void)setRequestURL:(NSURL *)arg1 ;
-(void)lock;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(id)gzipData:(id)arg1 ;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
-(id)resolveBagURLForKey:(id)arg1 bagContext:(id)arg2 error:(id*)arg3 ;
-(void)importKeybagSync:(id)arg1 ;
-(void)addGUIDToBody:(id)arg1 ;
-(BOOL)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2 url:(id)arg3 ;
-(id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 url:(id)arg3 ;
-(void)_handleResponse:(id)arg1 ;
-(void)addKeybagSyncToBody:(id)arg1 ;
-(BOOL)featureEnabledForBagKey:(id)arg1 bagContext:(id)arg2 error:(id*)arg3 ;
-(void)setDownloadsMetadata:(id)arg1 ;
-(NSString *)powerAssertionIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)main;
-(NSURL *)requestURL;
-(BOOL)needsAuthentication;
-(long long)reason;
-(SSURLRequestProperties *)requestProperties;
-(NSString *)storeCorrelationID;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setReason:(long long)arg1 ;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(id)_account;
@end

