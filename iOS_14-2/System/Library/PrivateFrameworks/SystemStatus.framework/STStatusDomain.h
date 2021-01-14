/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/STStatusDomainClientHandle.h>

@protocol STStatusDomainServerHandle;
@class NSString;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle> {

	/*^block*/id _dataChangedBlock;
	id<STStatusDomainServerHandle> _serverHandle;

}

@property (nonatomic,copy) id dataChangedBlock;                                          //@synthesize dataChangedBlock=_dataChangedBlock - In the implementation block
@property (nonatomic,readonly) id<STStatusDomainServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,copy,readonly) id<STStatusDomainData> data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)statusDomainName;
-(id)init;
-(id)initWithServerHandle:(id)arg1 ;
-(id<STStatusDomainData>)data;
-(id<STStatusDomainServerHandle>)serverHandle;
-(void)dealloc;
-(void)observeDataWithBlock:(/*^block*/id)arg1 ;
-(void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(id)dataChangedBlock;
-(void)setDataChangedBlock:(id)arg1 ;
@end

