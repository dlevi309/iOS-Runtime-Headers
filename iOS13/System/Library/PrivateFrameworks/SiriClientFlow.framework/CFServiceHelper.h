/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <libobjc.A.dylib/AFServiceHelper.h>

@protocol AFServiceHelper;
@class NSString;

@interface CFServiceHelper : NSObject <AFServiceHelper> {

	BOOL _isClientLiteHelper;
	id<AFServiceHelper> _serviceHelper;

}

@property (retain) id<AFServiceHelper> serviceHelper;               //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (assign) BOOL isClientLiteHelper;                         //@synthesize isClientLiteHelper=_isClientLiteHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDeviceInStarkMode;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)openSensitiveURL:(id)arg1 ;
-(void)dismissAssistant;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isDeviceInCarDND;
-(BOOL)isTimeoutSuspended;
-(void)handleCommand:(id)arg1 isOneWay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)peerInfoForCurrentCommand;
-(void)prepareForAudioHandoffFailedWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForAudioHandoffWithCompletion:(/*^block*/id)arg1 ;
-(void)handleRemoteCommand:(id)arg1 isOneWay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(id)initClientLiteHelper;
-(id<AFServiceHelper>)serviceHelper;
-(void)setServiceHelper:(id<AFServiceHelper>)arg1 ;
-(BOOL)isClientLiteHelper;
-(void)setIsClientLiteHelper:(BOOL)arg1 ;
@end

