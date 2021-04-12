/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol HMFNetServiceDelegate, OS_dispatch_queue;
@class NSNetService, HMFUnfairLock, NSString, NSArray, NSMutableDictionary, HMFNetAddress, NSObject, NSMutableArray, NSDictionary;

@interface HMFNetService : HMFObject <HMFLogging, NSNetServiceDelegate> {

	NSNetService* _internal;
	HMFUnfairLock* _lock;
	NSString* _type;
	NSString* _name;
	NSString* _domain;
	unsigned long long _port;
	NSArray* _addresses;
	NSMutableDictionary* _TXTRecord;
	BOOL _resolved;
	BOOL _publishing;
	HMFNetAddress* _hostName;
	long long _state;
	id<HMFNetServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _resolveBlocks;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * resolveBlocks;                        //@synthesize resolveBlocks=_resolveBlocks - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSNetService * internal;                               //@synthesize internal=_internal - In the implementation block
@property (getter=isPublishing) BOOL publishing;                                      //@synthesize publishing=_publishing - In the implementation block
@property (__weak) id<HMFNetServiceDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSString * type;                                            //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long port; 
@property (getter=isResolved,readonly) BOOL resolved;                                 //@synthesize resolved=_resolved - In the implementation block
@property (copy,readonly) HMFNetAddress * hostName;                                   //@synthesize hostName=_hostName - In the implementation block
@property (copy,readonly) NSArray * addresses; 
@property (copy,readonly) NSString * domain;                                          //@synthesize domain=_domain - In the implementation block
@property (copy,readonly) NSDictionary * TXTRecord; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)shortDescription;
+(id)logCategory;
+(id)errorFromNetServiceErrorDict:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)type;
-(id<HMFNetServiceDelegate>)delegate;
-(void)setDelegate:(id<HMFNetServiceDelegate>)arg1 ;
-(unsigned long long)port;
-(long long)state;
-(HMFNetAddress *)hostName;
-(void)setResolved:(BOOL)arg1 ;
-(BOOL)isResolved;
-(void)setState:(long long)arg1 ;
-(NSNetService *)internal;
-(id)shortDescription;
-(void)setHostname:(id)arg1 ;
-(NSArray *)addresses;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(void)startMonitoring;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)logIdentifier;
-(id)initWithNetService:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isPublishing;
-(void)setPublishing:(BOOL)arg1 ;
-(void)confirmWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateTXTRecordWithData:(id)arg1 ;
-(void)notifyUpdatedAddresses:(id)arg1 ;
-(void)setTXTRecord:(NSDictionary *)arg1 ;
-(void)removeAllTXTRecordObjects;
-(id)bestAddress;
-(void)_reallyResolveWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableArray *)resolveBlocks;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSDictionary *)TXTRecord;
@end

