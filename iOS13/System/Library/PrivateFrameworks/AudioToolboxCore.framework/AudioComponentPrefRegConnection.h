/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AudioComponentPreferenceProtocol.h>

@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol> {

	AudioComponentRegistrarImpl* mImpl;
	ConnectionInfo mConnInfo;

}
-(void)setExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 components:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)getComponentUserTags:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setComponentUserTags:(id)arg1 tags:(id)arg2 ;
-(void)getExtensionIcon:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getInterAppIcon:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithRegistrar:(AudioComponentRegistrarImpl*)arg1 connection:(id)arg2 ;
@end

