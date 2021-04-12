/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AudioComponentPreferenceProtocol.h>

@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol> {

	AudioComponentRegistrarImpl* mImpl;
	ConnectionInfo mConnInfo;

}
-(id)initWithRegistrar:(AudioComponentRegistrarImpl*)arg1 connection:(id)arg2 ;
-(void)getExtensionComponentList:(id)arg1 linkedSDKRequiresEntitlement:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)setExtensionComponentList:(id)arg1 linkedSDKRequiresEntitlement:(BOOL)arg2 components:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getComponentUserTags:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setComponentUserTags:(id)arg1 tags:(id)arg2 ;
-(void)getExtensionIcon:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getInterAppIcon:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

