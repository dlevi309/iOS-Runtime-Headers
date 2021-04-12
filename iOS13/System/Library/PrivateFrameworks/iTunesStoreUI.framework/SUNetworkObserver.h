/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/ISSingleton.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class ISStoreURLOperation, NSString, NSTimer, NSNumber;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate> {

	ISStoreURLOperation* _partnerDetectOperation;
	BOOL _partnersEnabled;
	NSString* _partnerIdentifier;
	NSTimer* _startupTimer;
	long long _storeServicesNetworkUsageCount;

}

@property (nonatomic,retain) NSString * partnerIdentifier;                                              //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)partnerIdentifier;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
-(void)_partnerHeaderChanged:(id)arg1 ;
-(void)_storeServicesNetworkStartNotification:(id)arg1 ;
-(void)_storeServicesNetworkStopNotification:(id)arg1 ;
-(void)_networkUsageStateChanged:(id)arg1 ;
-(void)_cancelStartupTimer;
-(void)_startupTimer:(id)arg1 ;
-(void)_handleNetworkTypeChange:(id)arg1 ;
-(void)_handleUsingNetworkChange:(id)arg1 ;
-(void)_mainThreadSetPartnerIdentifier:(id)arg1 ;
-(void)_updateNetworkActivityIndicator;
-(void)_mainThreadScheduleNetworkActivityUpdate;
-(void)_mainThreadHandleNetworkTypeChange:(id)arg1 ;
-(void)checkPartnerAvailability;
-(void)setPartnersEnabled:(BOOL)arg1 ;
-(void)startNetworkAvailabilityTimer;
@end

