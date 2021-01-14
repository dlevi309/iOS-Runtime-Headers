/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MROrigin, MRClient, MRPlayer, _MRNowPlayingPlayerPathProtobuf, NSData;

@interface MRPlayerPath : NSObject <NSCopying, NSSecureCoding> {

	MROrigin* _origin;
	MRClient* _client;
	MRPlayer* _player;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * protobuf; 
@property (nonatomic,readonly) MRPlayerPath * localResolvedPlayerPath; 
@property (nonatomic,copy) MROrigin * origin;                                                            //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) MRClient * client;                                                            //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) MRPlayer * player;                                                            //@synthesize player=_player - In the implementation block
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (nonatomic,readonly) MRPlayerPath * skeleton; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (getter=isResolved,nonatomic,readonly) BOOL resolved; 
@property (getter=isSystemMediaApplication,nonatomic,readonly) BOOL systemMediaApplication; 
+(BOOL)supportsSecureCoding;
+(id)localResolvedPlayerPathFromPlayerPath:(id)arg1 ;
+(id)localPlayerPath;
-(MRPlayer *)player;
-(BOOL)isLocal;
-(void)setOrigin:(MROrigin *)arg1 ;
-(MRPlayerPath *)skeleton;
-(BOOL)isResolved;
-(void)setPlayer:(MRPlayer *)arg1 ;
-(MRClient *)client;
-(MROrigin *)origin;
-(void)setClient:(MRClient *)arg1 ;
-(MRPlayerPath *)localResolvedPlayerPath;
-(id)initWithOrigin:(id)arg1 client:(id)arg2 player:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)playerPathByRedirectingToOrigin:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(_MRNowPlayingPlayerPathProtobuf *)protobuf;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSystemMediaApplication;
-(BOOL)isEqual:(id)arg1 ;
@end

