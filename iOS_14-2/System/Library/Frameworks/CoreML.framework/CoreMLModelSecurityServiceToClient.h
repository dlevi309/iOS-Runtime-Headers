/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreMLModelSecurityServiceToClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSCountedSet, NSObject;

@interface CoreMLModelSecurityServiceToClient : NSObject <CoreMLModelSecurityServiceToClientProtocol> {

	NSMutableDictionary* _featureProviderMap;
	NSCountedSet* _featureProviderCount;
	NSObject*<OS_dispatch_queue> _serviceToClientQueue;

}

@property (nonatomic,retain) NSMutableDictionary * featureProviderMap;                       //@synthesize featureProviderMap=_featureProviderMap - In the implementation block
@property (nonatomic,retain) NSCountedSet * featureProviderCount;                            //@synthesize featureProviderCount=_featureProviderCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serviceToClientQueue;              //@synthesize serviceToClientQueue=_serviceToClientQueue - In the implementation block
-(id)init;
-(NSMutableDictionary *)featureProviderMap;
-(NSCountedSet *)featureProviderCount;
-(NSObject*<OS_dispatch_queue>)serviceToClientQueue;
-(void)setServiceToClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clientFeatureValueForName:(id)arg1 uniqueKeyForProvider:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)clientFeatureNames:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setFeatureProviderMap:(NSMutableDictionary *)arg1 ;
-(void)setFeatureProviderCount:(NSCountedSet *)arg1 ;
@end

