/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSSet;

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying> {

	NSMutableSet* _supportedAudioPayloads;

}

@property (nonatomic,retain) NSSet * supportedAudioPayloads;              //@synthesize supportedAudioPayloads=_supportedAudioPayloads - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)supportedAudioPayloads;
-(void)setSupportedAudioPayloads:(NSSet *)arg1 ;
-(void)addPayload:(int)arg1 ;
@end

