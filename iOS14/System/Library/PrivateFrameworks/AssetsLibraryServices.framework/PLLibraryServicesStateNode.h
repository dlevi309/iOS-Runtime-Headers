/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSOperationQueue;

@interface PLLibraryServicesStateNode : NSObject {

	unsigned _qos;
	long long _state;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) unsigned qos;                                     //@synthesize qos=_qos - In the implementation block
-(void)setQos:(unsigned)arg1 ;
-(unsigned)qos;
-(NSOperationQueue *)operationQueue;
-(void)run;
-(void)terminate;
-(id)description;
-(id)initWithLibraryServicesState:(long long)arg1 qualityOfService:(unsigned)arg2 ;
-(long long)state;
@end

