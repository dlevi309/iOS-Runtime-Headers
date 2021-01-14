/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSModeAssertionStore.h>

@class NSArray;

@interface DNDSMutableModeAssertionStore : DNDSModeAssertionStore

@property (nonatomic,copy) NSArray * assertions; 
@property (nonatomic,copy) NSArray * invalidations; 
@property (nonatomic,copy) NSArray * invalidationRequests; 
-(void)unresolveSourcesForSyncToPairedDevice:(id)arg1 ;
-(void)setInvalidations:(NSArray *)arg1 ;
-(void)setAssertions:(NSArray *)arg1 ;
-(void)resolveSourcesForSyncFromPairedDevice:(id)arg1 ;
-(void)filterForSyncToPairedDevice:(id)arg1 clientDetailsProvider:(id)arg2 ;
-(void)sanitizeDatesForThreshold:(id)arg1 ;
-(void)setInvalidationRequests:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

