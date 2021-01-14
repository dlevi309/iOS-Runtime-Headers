/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@class AVHapticServerInstance;

@interface AVServerWrapper : NSObject {

	AVHapticServerInstance* _serverInstance;

}

@property (__weak,readonly) AVHapticServerInstance * serverInstance;              //@synthesize serverInstance=_serverInstance - In the implementation block
-(AVHapticServerInstance *)serverInstance;
-(id)initWithServerInstance:(id)arg1 ;
-(BOOL)contains:(id)arg1 ;
@end

