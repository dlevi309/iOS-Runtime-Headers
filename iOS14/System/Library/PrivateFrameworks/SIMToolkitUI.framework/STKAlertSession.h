/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@protocol STKAlertSessionResponseProvider, OS_os_log, STKSound;
@class SBSRemoteAlertHandle, STKSessionAction, NSObject, NSDictionary, NSString;

@interface STKAlertSession : NSObject <SBSRemoteAlertHandleObserver> {

	os_unfair_lock_s _lock;
	id<STKAlertSessionResponseProvider> _responseProvider;
	SBSRemoteAlertHandle* _alertHandle;
	STKSessionAction* _alertAction;
	BOOL _needsResponse;
	BOOL _invalidated;
	NSObject*<OS_os_log> _logger;
	NSDictionary* _options;
	id<STKSound> _sound;

}

@property (nonatomic,readonly) BOOL hasSentResponse; 
@property (nonatomic,readonly) NSDictionary * options;                          //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id<STKSound> sound;                                //@synthesize sound=_sound - In the implementation block
@property (nonatomic,readonly) STKSessionAction * alertAction;                  //@synthesize alertAction=_alertAction - In the implementation block
@property (nonatomic,readonly) SBSRemoteAlertHandle * alertHandle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresResponseProvider;
-(id<STKSound>)sound;
-(void)sendResponse:(long long)arg1 ;
-(void)setSound:(id<STKSound>)arg1 ;
-(NSDictionary *)options;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(BOOL)hasSentResponse;
-(void)invalidate;
-(STKSessionAction *)alertAction;
-(void)dealloc;
-(void)presentRemoteAlertHandle:(id)arg1 withAction:(id)arg2 ;
-(SBSRemoteAlertHandle *)alertHandle;
-(void)_lock_sendResponse:(long long)arg1 ;
-(id)initWithLogger:(id)arg1 responseProvider:(id)arg2 options:(id)arg3 sound:(id)arg4 ;
@end

