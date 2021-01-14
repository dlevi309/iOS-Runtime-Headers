/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRUpdateActiveSystemEndpointRequestProtobuf;

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying> {

	BOOL _pairedDeviceSync;
	NSString* _outputDeviceUID;
	NSString* _reason;
	long long _changeType;
	NSString* _clientBundleIdentifier;

}

@property (nonatomic,copy) NSString * clientBundleIdentifier;                                        //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,getter=isPairedDeviceSync,nonatomic) BOOL pairedDeviceSync;                        //@synthesize pairedDeviceSync=_pairedDeviceSync - In the implementation block
@property (nonatomic,readonly) _MRUpdateActiveSystemEndpointRequestProtobuf * protobuf; 
@property (nonatomic,copy) NSString * outputDeviceUID;                                               //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long changeType;                                                   //@synthesize changeType=_changeType - In the implementation block
-(void)setChangeType:(long long)arg1 ;
-(NSString *)clientBundleIdentifier;
-(long long)changeType;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setOutputDeviceUID:(NSString *)arg1 ;
-(void)setPairedDeviceSync:(BOOL)arg1 ;
-(id)description;
-(NSString *)reason;
-(_MRUpdateActiveSystemEndpointRequestProtobuf *)protobuf;
-(void)perform:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)outputDeviceUID;
-(id)initWithOutputDeviceUID:(id)arg1 reason:(id)arg2 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isPairedDeviceSync;
-(void)setReason:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

