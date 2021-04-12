/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/


@protocol STStatusDomainPublisherServerHandle;
@interface STStatusDomainPublisher : NSObject {

	id<STStatusDomainPublisherServerHandle> _serverHandle;

}

@property (nonatomic,__weak,readonly) id<STStatusDomainPublisherServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,copy) id<STStatusDomainData> data; 
+(unsigned long long)statusDomainName;
-(id)init;
-(id<STStatusDomainData>)data;
-(void)setData:(id<STStatusDomainData>)arg1 ;
-(id)initWithServerHandle:(id)arg1 ;
-(void)updateDataWithBlock:(/*^block*/id)arg1 ;
-(id<STStatusDomainPublisherServerHandle>)serverHandle;
@end

