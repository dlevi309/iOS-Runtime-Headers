/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFUserInfoManagerDelegate, OS_dispatch_queue;
@class NSUbiquitousKeyValueStore, NSObject;

@interface WFUserInfoManager : NSObject {

	NSUbiquitousKeyValueStore* _encryptedStore;
	id<WFUserInfoManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _ubiquitousKVSCommunicationsQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ubiquitousKVSCommunicationsQueue;              //@synthesize ubiquitousKVSCommunicationsQueue=_ubiquitousKVSCommunicationsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                 //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) NSUbiquitousKeyValueStore * encryptedStore;                               //@synthesize encryptedStore=_encryptedStore - In the implementation block
@property (nonatomic,retain) id<WFUserInfoManagerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFUserInfoManagerDelegate>)delegate;
-(NSUbiquitousKeyValueStore *)encryptedStore;
-(void)setDelegate:(id<WFUserInfoManagerDelegate>)arg1 ;
-(void)synchronize;
-(void)readUserIdentifierAndNotify;
-(NSObject*<OS_dispatch_queue>)ubiquitousKVSCommunicationsQueue;
-(void)setUbiquitousKVSCommunicationsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encryptedStoreChanged:(id)arg1 ;
-(void)dealloc;
@end

