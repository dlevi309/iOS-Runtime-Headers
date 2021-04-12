/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@class HapticServerInstance;

@interface ServerWrapper : NSObject {

	HapticServerInstance* _serverInstance;

}

@property (__weak,readonly) HapticServerInstance * serverInstance;              //@synthesize serverInstance=_serverInstance - In the implementation block
-(BOOL)contains:(id)arg1 ;
-(id)initWithServerInstance:(id)arg1 ;
-(HapticServerInstance *)serverInstance;
@end

