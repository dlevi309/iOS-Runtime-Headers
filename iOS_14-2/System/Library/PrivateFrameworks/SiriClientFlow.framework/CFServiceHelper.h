/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dismissAssistant;
-(void)prepareForAudioHandoffWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForAudioHandoffFailedWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isDeviceInStarkMode;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)openSensitiveURL:(id)arg1 ;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isDeviceInCarDND;
-(BOOL)isTimeoutSuspended;
-(id)peerInfoForCurrentCommand;
-(void)handleCommand:(id)arg1 isOneWay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleRemoteCommand:(id)arg1 isOneWay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(id)initClientLiteHelper;
-(id<AFServiceHelper>)serviceHelper;
-(void)setServiceHelper:(id<AFServiceHelper>)arg1 ;
-(BOOL)isClientLiteHelper;
-(void)setIsClientLiteHelper:(BOOL)arg1 ;
@end

