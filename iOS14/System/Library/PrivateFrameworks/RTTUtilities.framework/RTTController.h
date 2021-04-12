/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>
#import <RTTUtilities/RTTCallDelegate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegate.h>

@protocol OS_dispatch_queue, HCHeardControllerProtocol;
@class AXUIClient, NSObject, NSMutableDictionary, AXDispatchTimer, NSMutableArray, NSString;

@interface RTTController : NSObject <AXUIClientDelegate, RTTCallDelegate, TUCallCapabilitiesDelegate> {

	AXUIClient* _actionUIClient;
	NSObject*<OS_dispatch_queue> _workerQueue;
	NSMutableDictionary* _localSettingsCache;
	AXDispatchTimer* _preferredRelayCoalescer;
	AXDispatchTimer* _callUpdateCoalescer;
	BOOL _shouldSuppressIncomingNotification;
	NSMutableArray* _rttCalls;
	id<HCHeardControllerProtocol> _delegate;
	/*^block*/id _serverInvalidateCallback;
	/*^block*/id _actionCompletionBlock;

}

@property (nonatomic,copy) id actionCompletionBlock;                                     //@synthesize actionCompletionBlock=_actionCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressIncomingNotification;                    //@synthesize shouldSuppressIncomingNotification=_shouldSuppressIncomingNotification - In the implementation block
@property (nonatomic,retain) NSMutableArray * rttCalls;                                  //@synthesize rttCalls=_rttCalls - In the implementation block
@property (assign,nonatomic,__weak) id<HCHeardControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id serverInvalidateCallback;                                  //@synthesize serverInvalidateCallback=_serverInvalidateCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)clientRemoved:(id)arg1 ;
-(id)init;
-(id<HCHeardControllerProtocol>)delegate;
-(id)handleDatabaseRequest:(id)arg1 ;
-(void)didChangeTelephonyCallingSupport;
-(void)setServerInvalidateCallback:(id)arg1 ;
-(void)_refreshCurrentCallListWithExistingCalls:(id)arg1 ;
-(id)handleSettingsRequest:(id)arg1 ;
-(id)handleDictionaryRequest:(id)arg1 ;
-(id)actionCompletionBlock;
-(id)serverInvalidateCallback;
-(void)handleUpdatedCalls:(id)arg1 ;
-(void)setDelegate:(id<HCHeardControllerProtocol>)arg1 ;
-(void)ttyCall:(id)arg1 didSendRemoteString:(id)arg2 forUtterance:(id)arg3 ;
-(NSMutableArray *)rttCalls;
-(void)dismissRTTFirstUseAlert;
-(void)_refreshCurrentCallList;
-(id)handleIncomingNotificationSuppressionChange:(id)arg1 ;
-(void)_requestNotificationAuthorizationIfNecessary;
-(void)ttyCall:(id)arg1 setVisible:(BOOL)arg2 serviceUpdate:(id)arg3 ;
-(id)handleRTTControllerIsVisible:(id)arg1 ;
-(void)setShouldSuppressIncomingNotification:(BOOL)arg1 ;
-(void)displayRTTFirstUseAlert;
-(BOOL)shouldSuppressIncomingNotification;
-(id)actionClient;
-(void)_handlePreferredRelayNumberUpdate;
-(id)handleMediaAction:(id)arg1 ;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setActionCompletionBlock:(id)arg1 ;
-(id)callForUUID:(id)arg1 ;
-(id)displayCallPrompt:(id)arg1 ;
-(void)callDidConnect:(id)arg1 ;
-(void)setRttCalls:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3 ;
-(id)_callForUUIDWithoutRefresh:(id)arg1 ;
-(BOOL)invalidateServerCaches:(id)arg1 ;
@end

