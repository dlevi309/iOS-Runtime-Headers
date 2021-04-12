/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRPlaybackSessionMigrateRequestProtobuf, NSError, NSString, _MRContentItemProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying> {

	_MRPlaybackSessionMigrateRequestProtobuf* _descriptor;
	NSError* _migrateError;
	NSError* _fallbackError;
	unsigned _originatorType;
	unsigned _destinationTypes;
	NSString* _appBundleIdentifier;
	NSString* _initiator;
	unsigned long long _requestType;
	unsigned long long _fallbackReason;
	long long _playbackSessionSize;

}

@property (assign,nonatomic) unsigned destinationTypes;                                               //@synthesize destinationTypes=_destinationTypes - In the implementation block
@property (assign,nonatomic) long long playerOptions; 
@property (assign,nonatomic) long long endpointOptions; 
@property (nonatomic,retain) NSString * requestID; 
@property (nonatomic,retain) NSString * appBundleIdentifier;                                          //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * initiator;                                                    //@synthesize initiator=_initiator - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackReason;                                       //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (assign,nonatomic) double playbackPosition; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) long long playbackSessionSize;                                           //@synthesize playbackSessionSize=_playbackSessionSize - In the implementation block
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,retain) _MRContentItemProtobuf * contentItem; 
@property (assign,nonatomic) unsigned originatorType;                                                 //@synthesize originatorType=_originatorType - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSString * report; 
@property (nonatomic,retain) _MRPlaybackSessionRequestProtobuf * playbackSessionRequest; 
@property (nonatomic,readonly) _MRPlaybackSessionMigrateRequestProtobuf * descriptor; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(double)duration;
-(void)merge:(id)arg1 ;
-(_MRPlaybackSessionMigrateRequestProtobuf *)descriptor;
-(unsigned long long)requestType;
-(NSString *)appBundleIdentifier;
-(NSString *)report;
-(NSString *)initiator;
-(id)initWithDescriptor:(id)arg1 ;
-(void)endEvent:(id)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1 ;
-(void)setPlaybackPosition:(double)arg1 ;
-(unsigned)playbackState;
-(_MRContentItemProtobuf *)contentItem;
-(double)playbackPosition;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)setInitiator:(NSString *)arg1 ;
-(void)startEvent:(id)arg1 ;
-(void)endEvent:(id)arg1 withError:(id)arg2 ;
-(_MRPlaybackSessionRequestProtobuf *)playbackSessionRequest;
-(void)setPlaybackSessionSize:(long long)arg1 ;
-(long long)playerOptions;
-(void)setContentItem:(_MRContentItemProtobuf *)arg1 ;
-(void)setPlayerOptions:(long long)arg1 ;
-(void)setEndpointOptions:(long long)arg1 ;
-(void)setPlaybackSessionRequest:(_MRPlaybackSessionRequestProtobuf *)arg1 ;
-(long long)endpointOptions;
-(id)analyticsPayload;
-(unsigned)originatorType;
-(unsigned)destinationTypes;
-(long long)playbackSessionSize;
-(void)addDestinationType:(unsigned)arg1 ;
-(void)setOriginatorTypeFromDevice:(id)arg1 ;
-(void)addDestinationTypesFromDevices:(id)arg1 ;
-(unsigned long long)fallbackReason;
-(void)setFallbackReason:(unsigned long long)arg1 ;
-(void)setOriginatorType:(unsigned)arg1 ;
-(void)setDestinationTypes:(unsigned)arg1 ;
@end

