/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTDelegatePackage.h>

@class MTConfigAMSMetricsDelegate, MTEventRecorderAMSMetricsDelegate, MTConvenienceEnvironmentDelegate, NSString;

@interface MTUIKitStoreAMSBagDelegatePackage : NSObject <MTDelegatePackage> {

	/*^block*/id _hostAppBlock;
	MTConfigAMSMetricsDelegate* _configDelegate;
	MTEventRecorderAMSMetricsDelegate* _eventRecorderDelegate;
	MTConvenienceEnvironmentDelegate* _environmentDelegate;

}

@property (nonatomic,copy) id hostAppBlock;                                                          //@synthesize hostAppBlock=_hostAppBlock - In the implementation block
@property (nonatomic,retain) MTConfigAMSMetricsDelegate * configDelegate;                            //@synthesize configDelegate=_configDelegate - In the implementation block
@property (nonatomic,retain) MTEventRecorderAMSMetricsDelegate * eventRecorderDelegate;              //@synthesize eventRecorderDelegate=_eventRecorderDelegate - In the implementation block
@property (nonatomic,retain) MTConvenienceEnvironmentDelegate * environmentDelegate;                 //@synthesize environmentDelegate=_environmentDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithAMSBag:(id)arg1 ;
-(id)initWithAMSBag:(id)arg1 containerId:(id)arg2 pageURLBlock:(/*^block*/id)arg3 resourceRevNumBlock:(/*^block*/id)arg4 hostAppBlock:(/*^block*/id)arg5 ;
-(MTConfigAMSMetricsDelegate *)configDelegate;
-(MTEventRecorderAMSMetricsDelegate *)eventRecorderDelegate;
-(MTConvenienceEnvironmentDelegate *)environmentDelegate;
-(id)hostAppBlock;
-(void)setHostAppBlock:(id)arg1 ;
-(void)setConfigDelegate:(MTConfigAMSMetricsDelegate *)arg1 ;
-(void)setEventRecorderDelegate:(MTEventRecorderAMSMetricsDelegate *)arg1 ;
-(void)setEnvironmentDelegate:(MTConvenienceEnvironmentDelegate *)arg1 ;
@end

