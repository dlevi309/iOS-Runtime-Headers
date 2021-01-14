/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnit_XPC.h>

@protocol OS_dispatch_queue;
@class NSExtension, NSUUID, NSObject, AUAudioUnit_XPC;

@interface AUAudioUnit_XH : AUAudioUnit_XPC {

	NSExtension* _extension;
	NSUUID* _requestIdentifier;
	NSObject*<OS_dispatch_queue> _viewControllerRequestQueue;
	AUAudioUnit_XPC* _strongInstance;
	/*^block*/id _speechSynthesisOutputMetadataBlock;

}

@property (nonatomic,retain) AUAudioUnit_XPC * strongInstance;              //@synthesize strongInstance=_strongInstance - In the implementation block
+(void)instantiateWithExtension:(id)arg1 componentDescription:(AudioComponentDescription)arg2 instance:(OpaqueAudioComponentInstanceRef)arg3 options:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_doOpen:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_internalInitWithExtension:(id)arg1 componentDescription:(AudioComponentDescription)arg2 instance:(OpaqueAudioComponentInstanceRef)arg3 completion:(/*^block*/id)arg4 ;
-(AUAudioUnit_XPC *)strongInstance;
-(void)setStrongInstance:(AUAudioUnit_XPC *)arg1 ;
-(/*^block*/id)speechSynthesisOutputMetadataBlock;
-(void)setSpeechSynthesisOutputMetadataBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

