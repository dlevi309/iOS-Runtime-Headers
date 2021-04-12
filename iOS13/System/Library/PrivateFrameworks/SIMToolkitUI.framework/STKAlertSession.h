/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(NSDictionary *)options;
-(void)sendResponse:(long long)arg1 ;
-(STKSessionAction *)alertAction;
-(void)setSound:(id<STKSound>)arg1 ;
-(id<STKSound>)sound;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(SBSRemoteAlertHandle *)alertHandle;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(BOOL)hasSentResponse;
-(void)presentRemoteAlertHandle:(id)arg1 withAction:(id)arg2 ;
-(void)_lock_sendResponse:(long long)arg1 ;
-(id)initWithLogger:(id)arg1 responseProvider:(id)arg2 options:(id)arg3 sound:(id)arg4 ;
@end

