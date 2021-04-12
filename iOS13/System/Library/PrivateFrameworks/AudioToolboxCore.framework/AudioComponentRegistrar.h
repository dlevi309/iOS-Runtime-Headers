/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString;

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate> {

	AudioComponentRegistrarImpl* _impl;

}

@property (nonatomic,readonly) AudioComponentRegistrarImpl* impl;              //@synthesize impl=_impl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(AudioComponentRegistrarImpl*)impl;
-(id)initForMode:(BOOL)arg1 ;
-(void)resumeListeners;
@end

