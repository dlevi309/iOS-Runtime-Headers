/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface REInterfaceCache : RESingleton {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _supportedInterfaces;

}
-(id)_supportedProtocols;
-(id)_init;
-(void)enumerateExportedPropertiesOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)exportedInterfaceClass:(Class)arg1 ;
-(id)_queue_valueForKey:(id)arg1 level:(unsigned long long)arg2 ;
-(BOOL)_supportsCache;
-(id)_accessInterfaceForKey:(id)arg1 ;
-(BOOL)_interface:(id)arg1 implementsInterface:(id)arg2 ;
-(void)_enumeratePropertiesOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateMethodsOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)exportedInterfaceProtocol:(id)arg1 ;
-(void)enumerateExportedPropertiesOfProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateExportedMethodsOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateExportedMethodsOfProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

