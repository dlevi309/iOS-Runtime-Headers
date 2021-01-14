/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NNMKSyncEndpoint : NSObject {

	NSObject*<OS_dispatch_queue> _endpointQueue;
	NSObject*<OS_dispatch_queue> _resendingQueue;
	NSMutableDictionary* _datesForIDSIdentifiersScheduledToBeResent;
	NSMutableDictionary* _lastResendIntervalByIDSIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> endpointQueue;                                   //@synthesize endpointQueue=_endpointQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resendingQueue;                                  //@synthesize resendingQueue=_resendingQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * datesForIDSIdentifiersScheduledToBeResent;              //@synthesize datesForIDSIdentifiersScheduledToBeResent=_datesForIDSIdentifiersScheduledToBeResent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastResendIntervalByIDSIdentifier;                      //@synthesize lastResendIntervalByIDSIdentifier=_lastResendIntervalByIDSIdentifier - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)resendObjectsForIDSIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)enqueueIDSIdentifierForResend:(id)arg1 atDate:(id)arg2 silent:(BOOL)arg3 ;
-(void)enqueueIDSIdentifiersForResend:(id)arg1 ;
-(void)resendReadyIDSIdentifiers;
-(void)resendAllIDSIdentifiers;
-(unsigned long long)newResendIntervalForPreviousResendInterval:(unsigned long long)arg1 errorCode:(long long)arg2 ;
-(void)dequeueIDSIdentifierForResend:(id)arg1 ;
-(NSMutableDictionary *)datesForIDSIdentifiersScheduledToBeResent;
-(NSObject*<OS_dispatch_queue>)endpointQueue;
-(void)setEndpointQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)resendingQueue;
-(void)setResendingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDatesForIDSIdentifiersScheduledToBeResent:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lastResendIntervalByIDSIdentifier;
-(void)setLastResendIntervalByIDSIdentifier:(NSMutableDictionary *)arg1 ;
@end

