/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKContainer, IDSCloudKitKeyValueStore, IDSCloudKitGroupServer, IDSCloudKitTransportLog, IDSCloudKitKeyElectionStore, NSString;

@interface IDSCloudKitContainer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKContainer* _container;
	IDSCloudKitKeyValueStore* _keyValueStore;
	IDSCloudKitGroupServer* _publicGroupServer;
	IDSCloudKitGroupServer* _privateGroupServer;
	IDSCloudKitTransportLog* _transportLog;
	IDSCloudKitKeyElectionStore* _keyElectionStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSCKContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) IDSCloudKitKeyValueStore * keyValueStore;                    //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,readonly) IDSCloudKitGroupServer * publicGroupServer;                  //@synthesize publicGroupServer=_publicGroupServer - In the implementation block
@property (nonatomic,readonly) IDSCloudKitGroupServer * privateGroupServer;                 //@synthesize privateGroupServer=_privateGroupServer - In the implementation block
@property (nonatomic,readonly) IDSCloudKitTransportLog * transportLog;                      //@synthesize transportLog=_transportLog - In the implementation block
@property (nonatomic,readonly) IDSCloudKitKeyElectionStore * keyElectionStore;              //@synthesize keyElectionStore=_keyElectionStore - In the implementation block
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(NSString *)containerIdentifier;
-(void)setContainer:(IDSCKContainer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSCloudKitKeyValueStore *)keyValueStore;
-(IDSCloudKitTransportLog *)transportLog;
-(IDSCKContainer *)container;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(IDSCloudKitGroupServer *)publicGroupServer;
-(IDSCloudKitGroupServer *)privateGroupServer;
-(IDSCloudKitKeyElectionStore *)keyElectionStore;
@end

