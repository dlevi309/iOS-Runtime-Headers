/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AUAudioUnitBus.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AUAudioUnit_XPC, NSXPCConnection, AVAudioFormat, NSArray;

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding> {

	AUAudioUnit_XPC* _audioUnit;
	NSXPCConnection* _remoteAUXPCConnection;
	unsigned _scope;
	unsigned _element;
	AVAudioFormat* _format;
	NSArray* _supportedChannelLayoutTags;
	BOOL _removingObserverWithContext;

}
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)format;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)propertyChanged:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(BOOL)isEnabled;
-(void)dealloc;
@end

