/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, ICDelegationNetServiceTXTRecord, NSNetService, NSArray, NSString;

@interface ICDelegationProviderNetService : NSObject <NSNetServiceDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _netServiceStreamResolutionQueue;
	NSMutableArray* _resolutionCompletionHandlers;
	long long _state;
	ICDelegationNetServiceTXTRecord* _txtRecord;
	NSNetService* _netService;

}

@property (nonatomic,readonly) NSNetService * netService;                          //@synthesize netService=_netService - In the implementation block
@property (nonatomic,copy,readonly) NSArray * delegationAccountUUIDs; 
@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,readonly) long long securityMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)deviceName;
-(void)_setState:(long long)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)_updateTXTRecordProperties;
-(void)_resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(NSNetService *)netService;
-(NSArray *)delegationAccountUUIDs;
-(id)initWithNetService:(id)arg1 ;
-(void)getResolvedStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)securityMode;
-(void)dealloc;
@end

