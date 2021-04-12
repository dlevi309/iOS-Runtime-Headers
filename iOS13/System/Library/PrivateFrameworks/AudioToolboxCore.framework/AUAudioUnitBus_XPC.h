/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AUAudioUnitBus.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AUAudioUnit_XH, NSXPCConnection, AVAudioFormat, NSArray;

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding> {

	AUAudioUnit_XH* _audioUnit;
	NSXPCConnection* _remoteAUXPCConnection;
	unsigned _scope;
	unsigned _element;
	AVAudioFormat* _format;
	NSArray* _supportedChannelLayoutTags;
	BOOL _removingObserverWithContext;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(BOOL)isEnabled;
-(id)format;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(void)propertyChanged:(id)arg1 ;
@end

