/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableDictionary *)deviceIdentifiers;
-(void)setDeviceIdentifiers:(NSMutableDictionary *)arg1 ;
-(NSURL *)storeURL;
-(void)_readIdentifierStore;
-(void)_writeIdentifierStore;
-(id)initWithStoreURL:(id)arg1 ;
-(id)identifierForBundleId:(id)arg1 ;
-(void)setStoreURL:(NSURL *)arg1 ;
@end

