/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/STDynamicActivityAttributionServerHandle.h>

@protocol OS_dispatch_queue;
@class STDynamicActivityAttributionListener, NSObject, NSMutableDictionary, NSString;

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle> {

	STDynamicActivityAttributionListener* _dynamicAttributionListener;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _clientAttributionMap;

}

@property (nonatomic,readonly) STDynamicActivityAttributionListener * dynamicAttributionListener;              //@synthesize dynamicAttributionListener=_dynamicAttributionListener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                                     //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientAttributionMap;                                       //@synthesize clientAttributionMap=_clientAttributionMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)currentAttributedAppForClient:(id)arg1 ;
-(id)currentAttributionKeyForClient:(id)arg1 ;
-(void)setLocalizableAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3 ;
-(NSMutableDictionary *)clientAttributionMap;
-(void)_internalQueue_setAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3 ;
-(STDynamicActivityAttributionListener *)dynamicAttributionListener;
-(void)setClientAttributionMap:(NSMutableDictionary *)arg1 ;
@end

