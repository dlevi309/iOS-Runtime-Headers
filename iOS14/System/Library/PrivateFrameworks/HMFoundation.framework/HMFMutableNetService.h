/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFNetService.h>

@class NSDictionary;

@interface HMFMutableNetService : HMFNetService {

	/*^block*/id _publishBlock;

}

@property (nonatomic,copy) id publishBlock;              //@synthesize publishBlock=_publishBlock - In the implementation block
@property (assign) unsigned long long port; 
@property (copy) NSDictionary * TXTRecord; 
-(void)setInternal:(id)arg1 ;
-(void)setPort:(unsigned long long)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidStop:(id)arg1 ;
-(id)internal;
-(id)initWithNetService:(id)arg1 ;
-(void)setTXTRecordValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeTXTRecordValueForKey:(id)arg1 ;
-(void)stopPublishing;
-(void)startPublishingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateTXTRecordWithData:(id)arg1 ;
-(void)setTXTRecord:(NSDictionary *)arg1 ;
-(void)updateTXTRecord;
-(void)setPublishBlock:(id)arg1 ;
-(id)publishBlock;
@end

