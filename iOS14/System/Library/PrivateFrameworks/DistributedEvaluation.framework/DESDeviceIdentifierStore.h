/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSMutableDictionary;

@interface DESDeviceIdentifierStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _storeURL;
	NSMutableDictionary* _deviceIdentifiers;

}

@property (nonatomic,retain) NSURL * storeURL;                                     //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceIdentifiers;              //@synthesize deviceIdentifiers=_deviceIdentifiers - In the implementation block
+(void)initialize;
-(void)_writeIdentifierStore;
-(NSURL *)storeURL;
-(id)initWithStoreURL:(id)arg1 ;
-(void)setDeviceIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)_readIdentifierStore;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)identifierForBundleId:(id)arg1 ;
-(NSMutableDictionary *)deviceIdentifiers;
@end

