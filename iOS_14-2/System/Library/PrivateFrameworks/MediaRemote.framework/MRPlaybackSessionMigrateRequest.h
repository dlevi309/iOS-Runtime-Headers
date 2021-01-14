/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRPlaybackSessionMigrateRequestProtobuf, NSError, NSString, MRContentItem, MRPlaybackSessionRequest;

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying> {

	_MRPlaybackSessionMigrateRequestProtobuf* _protobuf;
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

@property (assign,nonatomic) unsigned destinationTypes;                                          //@synthesize destinationTypes=_destinationTypes - In the implementation block
@property (assign,nonatomic) long long playerOptions; 
@property (assign,nonatomic) long long endpointOptions; 
@property (nonatomic,retain) NSString * requestID; 
@property (nonatomic,retain) NSString * appBundleIdentifier;                                     //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * initiator;                                               //@synthesize initiator=_initiator - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                                     //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long fallbackReason;                                  //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (assign,nonatomic) double playbackPosition; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) long long playbackSessionSize;                                      //@synthesize playbackSessionSize=_playbackSessionSize - In the implementation block
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,retain) MRContentItem * contentItem; 
@property (assign,nonatomic) unsigned originatorType;                                            //@synthesize originatorType=_originatorType - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSString * report; 
@property (nonatomic,retain) MRPlaybackSessionRequest * playbackSessionRequest; 
@property (nonatomic,readonly) _MRPlaybackSessionMigrateRequestProtobuf * protobuf; 
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)setPlaybackRate:(double)arg1 ;
-(void)merge:(id)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)finalize;
-(double)playbackRate;
-(void)setPlaybackPosition:(double)arg1 ;
-(id)init;
-(unsigned long long)requestType;
-(unsigned long long)fallbackReason;
-(unsigned)playbackState;
-(void)endEvent:(id)arg1 ;
-(void)setInitiator:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(long long)playerOptions;
-(void)setContentItem:(MRContentItem *)arg1 ;
-(NSString *)report;
-(long long)endpointOptions;
-(void)setPlayerOptions:(long long)arg1 ;
-(void)endEvent:(id)arg1 withError:(id)arg2 ;
-(MRPlaybackSessionRequest *)playbackSessionRequest;
-(void)setPlaybackSessionSize:(long long)arg1 ;
-(void)setEndpointOptions:(long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setPlaybackSessionRequest:(MRPlaybackSessionRequest *)arg1 ;
-(unsigned)originatorType;
-(unsigned)destinationTypes;
-(long long)playbackSessionSize;
-(void)addDestinationType:(unsigned)arg1 ;
-(NSString *)requestID;
-(void)setOriginatorTypeFromDevice:(id)arg1 ;
-(void)addDestinationTypesFromDevices:(id)arg1 ;
-(void)setOriginatorType:(unsigned)arg1 ;
-(void)setDestinationTypes:(unsigned)arg1 ;
-(id)description;
-(MRContentItem *)contentItem;
-(void)startEvent:(id)arg1 ;
-(NSString *)initiator;
-(double)playbackPosition;
-(void)setFallbackReason:(unsigned long long)arg1 ;
-(_MRPlaybackSessionMigrateRequestProtobuf *)protobuf;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

