/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class _TVRCMRTelevisionWrapper, _TVRCMROriginWrapper, _TVRCMRVirtualTouchDeviceWrapper;

@interface _TVRCMediaRemoteEventTranslator : NSObject {

	_TVRCMRTelevisionWrapper* _television;
	_TVRCMROriginWrapper* _origin;

}

@property (assign,nonatomic,__weak) _TVRCMRTelevisionWrapper * television;                  //@synthesize television=_television - In the implementation block
@property (assign,nonatomic,__weak) _TVRCMROriginWrapper * origin;                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) _TVRCMRVirtualTouchDeviceWrapper * touchDevice; 
-(_TVRCMROriginWrapper *)origin;
-(void)setOrigin:(_TVRCMROriginWrapper *)arg1 ;
-(_TVRCMRTelevisionWrapper *)television;
-(void)sendButtonEvent:(id)arg1 ;
-(BOOL)_isMediaButtonEvent:(id)arg1 ;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)sendTouchEvent:(id)arg1 withDeviceID:(unsigned long long)arg2 ;
-(_TVRCMRVirtualTouchDeviceWrapper *)touchDevice;
-(unsigned)_commandForMediaButtonEvent:(id)arg1 ;
-(id)_commandOptionsForMediaButtonEvent:(id)arg1 command:(unsigned)arg2 ;
-(MRHIDButtonEvent)_createMRHIDButtonEventTemplateWithButtonType:(long long)arg1 ;
-(MRHIDTouchEvent)_createMRHIDTouchEvent:(id)arg1 ;
@end

