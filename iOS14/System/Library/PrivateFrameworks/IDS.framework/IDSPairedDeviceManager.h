/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class _IDSCompletionHandler, IDSXPCDaemonController, NSSet, NSString;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {

	_IDSCompletionHandler* _deleteCompletion;
	_IDSCompletionHandler* _localCompletion;
	_IDSCompletionHandler* _pairedCompletion;
	_IDSCompletionHandler* _deliveryStatsCompletion;
	IDSXPCDaemonController* _xpcDaemonController;
	NSSet* _allowedTrafficClassifiers;

}

@property (nonatomic,retain) IDSXPCDaemonController * xpcDaemonController;              //@synthesize xpcDaemonController=_xpcDaemonController - In the implementation block
@property (nonatomic,retain) NSSet * allowedTrafficClassifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dropAllMessagesWithoutAnyAllowedClassifier;
-(void)setPairedDeviceInfo:(id)arg1 ;
-(void)deliveryStats:(id)arg1 ;
-(void)setAllowedTrafficClassifiers:(NSSet *)arg1 ;
-(void)getDeliveryStatsWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(NSSet *)allowedTrafficClassifiers;
-(void)deletePairedDevice:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)getPairedDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(IDSXPCDaemonController *)xpcDaemonController;
-(void)device:(id)arg1 pairingDeleted:(BOOL)arg2 ;
-(void)getLocalDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)constructRAResponseDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setXpcDaemonController:(IDSXPCDaemonController *)arg1 ;
-(void)dealloc;
@end

