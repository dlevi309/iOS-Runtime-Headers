/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, HAPKeyStore;
@class NSObject;

@interface HAPAccessoryServerBrowser : HMFObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	long long _linkType;
	id<HAPKeyStore> _keyStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<HAPKeyStore> keyStore;                            //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,readonly) long long linkType;                                //@synthesize linkType=_linkType - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)linkType;
-(id<HAPKeyStore>)keyStore;
-(void)setKeyStore:(id<HAPKeyStore>)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
@end

