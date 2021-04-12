/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSString;

@interface MRAVClusterController : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSHashTable* _observers;
	NSString* _localPairingIdentity;
	NSString* _clusterUID;
	NSString* _clusterLeaderUID;
	unsigned _clusterType;
	unsigned long long _previousClusterStatus;
	int _airplayClusterStatusNotificationToken;

}

@property (nonatomic,readonly) BOOL needsCommandRedirection; 
@property (nonatomic,readonly) unsigned long long clusterStatus; 
@property (nonatomic,readonly) unsigned clusterType; 
@property (nonatomic,readonly) NSString * clusterLeaderUID; 
+(BOOL)canBeClusterMember;
+(id)getClusterUID;
+(id)getClusterLeaderUID;
+(unsigned)getClusterType;
+(id)sharedController;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(unsigned long long)clusterStatus;
-(unsigned)clusterType;
-(void)deviceInfoDidChangeNotification:(id)arg1 ;
-(void)updateClusterInformation;
-(void)onQueue_notifyObserversWithClusterStatus:(unsigned long long)arg1 ;
-(BOOL)needsCommandRedirection;
-(NSString *)clusterLeaderUID;
-(void)getClusterStatus:(/*^block*/id)arg1 ;
-(void)getClusterLeaderEndpoint:(/*^block*/id)arg1 ;
@end

