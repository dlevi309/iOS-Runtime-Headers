/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPort:(unsigned long long)arg1 ;
-(id)internal;
-(void)setInternal:(id)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(void)stopPublishing;
-(void)startPublishingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateTXTRecordWithData:(id)arg1 ;
-(void)setTXTRecord:(NSDictionary *)arg1 ;
-(void)updateTXTRecord;
-(void)setPublishBlock:(id)arg1 ;
-(id)publishBlock;
-(void)setTXTRecordValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeTXTRecordValueForKey:(id)arg1 ;
@end

