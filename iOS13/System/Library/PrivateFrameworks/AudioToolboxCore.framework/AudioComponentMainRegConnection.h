/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AudioComponentRegistrarProtocol.h>

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {

	AudioComponentRegistrarImpl* mImpl;
	ConnectionInfo mConnInfo;

}
-(void)getComponentList:(id)arg1 linkedSDKVersion:(int)arg2 includeExtensions:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)canRegisterComponent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithRegistrar:(AudioComponentRegistrarImpl*)arg1 connection:(id)arg2 ;
@end

