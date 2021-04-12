/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@class NSMutableDictionary;

@interface CATArbitrator : NSObject {

	NSMutableDictionary* mRegistrationByKey;

}
-(id)init;
-(id)debugDescription;
-(id)resourcesForKeys:(id)arg1 exclusive:(BOOL)arg2 ;
-(void)registerResource:(id)arg1 forKey:(id)arg2 maxConcurrentCount:(unsigned long long)arg3 ;
-(id)resourceForKey:(id)arg1 exclusive:(BOOL)arg2 ;
-(id)waitForResourcesForKeys:(id)arg1 exclusive:(BOOL)arg2 delegateQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)stopWaiting:(id)arg1 ;
-(void)registerResource:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)unregisterResourceForKey:(id)arg1 ;
@end

