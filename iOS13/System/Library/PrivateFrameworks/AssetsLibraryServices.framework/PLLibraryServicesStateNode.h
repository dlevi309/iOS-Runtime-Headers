/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)run;
-(id)description;
-(NSOperationQueue *)operationQueue;
-(long long)state;
-(unsigned)qos;
-(void)terminate;
-(void)setQos:(unsigned)arg1 ;
-(id)initWithLibraryServicesState:(long long)arg1 qualityOfService:(unsigned)arg2 ;
@end

