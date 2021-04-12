/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSMutableArray, NSArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionMessage : MRProtocolMessage {

	NSMutableArray* _packets;

}

@property (nonatomic,readonly) unsigned long long name; 
@property (nonatomic,readonly) NSArray * packets; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(unsigned long long)name;
-(unsigned long long)type;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
-(NSArray *)packets;
-(id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(id)arg3 ;
-(id)initWithPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2 ;
@end

