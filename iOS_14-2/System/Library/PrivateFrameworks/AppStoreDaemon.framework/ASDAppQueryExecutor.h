/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDDispatchQueue, NSMutableDictionary, ASDServiceBroker;

@interface ASDAppQueryExecutor : NSObject {

	ASDDispatchQueue* _dispatchQueue;
	NSMutableDictionary* _queryPromises;
	ASDServiceBroker* _serviceBroker;

}
+(void)_executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 usingServiceBroker:(id)arg3 withResultHandler:(/*^block*/id)arg4 ;
-(id)init;
-(id)initWithServiceBroker:(id)arg1 ;
-(void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(/*^block*/id)arg3 ;
@end

