/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@class NSMutableSet, NSString;

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver> {

	BOOL _deliversUpdates;
	NSMutableSet* _sources;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(Class)queryClass;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(BOOL)_shouldListenForUpdates;
-(id)sourceClientProxy;
-(void)_sourcesForObjectsOfType:(id)arg1 filter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_sourceAdded:(id)arg1 ;
-(double)_queue_queryLogThreshold;
@end

