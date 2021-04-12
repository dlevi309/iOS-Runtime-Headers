/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <Foundation/NSProxy.h>

@class PDSCDCacheContainer, NSPersistentContainer;

@interface PDSCDCacheReferenceProxy : NSProxy {

	PDSCDCacheContainer* _cacheContainer;
	NSPersistentContainer* _persistentContainer;

}

@property (nonatomic,retain) PDSCDCacheContainer * cacheContainer;                     //@synthesize cacheContainer=_cacheContainer - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
-(NSPersistentContainer *)persistentContainer;
-(PDSCDCacheContainer *)cacheContainer;
-(id)initWithCacheContainer:(id)arg1 persistentContainer:(id)arg2 ;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setCacheContainer:(PDSCDCacheContainer *)arg1 ;
@end

