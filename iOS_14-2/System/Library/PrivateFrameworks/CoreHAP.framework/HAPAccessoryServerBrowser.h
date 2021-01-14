/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPAccessoryServerNotification.h>

@protocol OS_dispatch_queue, HAPKeyStore;
@class HMFUnfairLock, NSObject, NSMutableSet, NSString, NSArray;

@interface HAPAccessoryServerBrowser : HMFObject <HAPAccessoryServerNotification> {

	HMFUnfairLock* _lock;
	NSObject*<OS_dispatch_queue> _workQueue;
	long long _linkType;
	NSMutableSet* _pairedAccessoryIdentifiers;
	id<HAPKeyStore> _keyStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pairedAccessoryIdentifiers;              //@synthesize pairedAccessoryIdentifiers=_pairedAccessoryIdentifiers - In the implementation block
@property (nonatomic,retain) id<HAPKeyStore> keyStore;                               //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,readonly) long long linkType;                                   //@synthesize linkType=_linkType - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resetPairedAccessories;
-(id)initWithQueue:(id)arg1 ;
-(void)deRegisterAccessoryWithIdentifier:(id)arg1 ;
-(BOOL)isPaired:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(long long)linkType;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerPairedAccessoryWithIdentifier:(id)arg1 ;
-(void)indicateNotificationFromServer:(id)arg1 notifyType:(unsigned long long)arg2 withDictionary:(id)arg3 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(id<HAPKeyStore>)keyStore;
-(void)stopDiscoveringAccessoryServers;
-(void)stopConfirmingPairedAccessoryReachability;
-(void)startConfirmingPairedAccessoryReachability;
-(void)startDiscoveringAccessoryServers;
-(void)setKeyStore:(id<HAPKeyStore>)arg1 ;
-(NSMutableSet *)pairedAccessoryIdentifiers;
-(void)setPairedAccessoryIdentifiers:(NSMutableSet *)arg1 ;
@end

