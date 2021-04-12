/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSInclusivityValidation.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface TPSPairedDeviceValidation : TPSInclusivityValidation {

	NSArray* _cachedPeers;
	NSArray* _cachedDevices;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,copy) NSArray * cachedPeers;                                 //@synthesize cachedPeers=_cachedPeers - In the implementation block
@property (nonatomic,copy) NSArray * cachedDevices;                               //@synthesize cachedDevices=_cachedDevices - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,readonly) NSArray * targetDevices; 
@property (nonatomic,readonly) NSArray * excludeDevices; 
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)completionQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetDevices;
-(id)_validationsForDevices:(id)arg1 ;
-(NSArray *)excludeDevices;
-(id)_validationForDeviceNumber:(long long)arg1 ;
-(NSArray *)cachedPeers;
-(NSArray *)cachedDevices;
-(id)initWithTargetDevices:(id)arg1 excludeDevices:(id)arg2 ;
-(void)setCachedPeers:(NSArray *)arg1 ;
-(void)setCachedDevices:(NSArray *)arg1 ;
@end

