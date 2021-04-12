/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDServiceBroker;

@interface ASDInstallAttribution : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(void)addInstallAttributionParamsWithConfig:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addInstallAttributionParamsWithConfig:(id)arg1 ;
-(id)_initWithServiceBroker:(id)arg1 ;
@end

