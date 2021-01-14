/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSExtension, NSObject, NSUUID, _HKBackgroundObservationExtensionHostContext, _HKBackgroundObservationExtensionRemoteContext, NSString;

@interface HDBackgroundObservationServerExtension : NSObject {

	NSExtension* _extension;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSUUID* _sessionUUID;
	_HKBackgroundObservationExtensionHostContext* _extensionHostContext;
	_HKBackgroundObservationExtensionRemoteContext* _extensionContext;
	BOOL _unitTest_notifiedExtensionDueToTimeout;
	NSString* _extensionIdentifier;
	NSString* _appIdentifier;

}

@property (assign,nonatomic) BOOL unitTest_notifiedExtensionDueToTimeout;              //@synthesize unitTest_notifiedExtensionDueToTimeout=_unitTest_notifiedExtensionDueToTimeout - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionIdentifier;                    //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * appIdentifier;                          //@synthesize appIdentifier=_appIdentifier - In the implementation block
-(void)disconnect;
-(NSString *)appIdentifier;
-(id)init;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(id)_initWithExtension:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(void)notifyExtensionOfUpcomingTimeout;
-(void)notifyExtensionOfUpdateForSampleType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)unitTest_sessionUUID;
-(id)unitTest_extensionContext;
-(id)unitTest_extensionHostContext;
-(id)unitTest_queue;
-(BOOL)unitTest_notifiedExtensionDueToTimeout;
-(void)setUnitTest_notifiedExtensionDueToTimeout:(BOOL)arg1 ;
@end

