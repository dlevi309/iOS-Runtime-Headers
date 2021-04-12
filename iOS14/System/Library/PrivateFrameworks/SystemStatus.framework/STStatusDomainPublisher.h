/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/STStatusDomainPublisherClientHandle.h>

@protocol STStatusDomainPublisherServerHandle;
@class NSString;

@interface STStatusDomainPublisher : NSObject <STStatusDomainPublisherClientHandle> {

	id<STStatusDomainPublisherServerHandle> _serverHandle;

}

@property (nonatomic,readonly) id<STStatusDomainPublisherServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,copy) id<STStatusDomainData> data; 
@property (nonatomic,copy) id<STStatusDomainData> volatileData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emptyData;
+(unsigned long long)statusDomainName;
-(id)init;
-(void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(void)setData:(id<STStatusDomainData>)arg1 ;
-(void)updateVolatileDataWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithServerHandle:(id)arg1 ;
-(id<STStatusDomainData>)data;
-(id<STStatusDomainPublisherServerHandle>)serverHandle;
-(void)updateVolatileDataWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)updateDataWithBlock:(/*^block*/id)arg1 ;
-(void)_setData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateDataWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setVolatileData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateVolatileDataWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDataWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id<STStatusDomainData>)volatileData;
-(void)setVolatileData:(id<STStatusDomainData>)arg1 ;
-(void)setVolatileData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

