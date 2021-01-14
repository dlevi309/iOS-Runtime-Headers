/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
*/

#import <Foundation/NSExtensionContext.h>
#import <CacheDelete/CacheDeleteServiceProtocol.h>

@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)init;
-(void)serviceCancelPurge:(/*^block*/id)arg1 ;
-(void)servicePing:(/*^block*/id)arg1 ;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
@end

