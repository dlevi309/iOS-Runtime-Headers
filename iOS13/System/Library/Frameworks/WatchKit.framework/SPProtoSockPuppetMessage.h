/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoAudioFilePlayerMessage, SPProtoSockPuppetPlist;

@interface SPProtoSockPuppetMessage : PBCodable <NSCopying> {

	SPProtoAudioFilePlayerMessage* _audioFilePlayerMessage;
	SPProtoSockPuppetPlist* _plist;

}

@property (nonatomic,readonly) BOOL hasPlist; 
@property (nonatomic,retain) SPProtoSockPuppetPlist * plist;                                      //@synthesize plist=_plist - In the implementation block
@property (nonatomic,readonly) BOOL hasAudioFilePlayerMessage; 
@property (nonatomic,retain) SPProtoAudioFilePlayerMessage * audioFilePlayerMessage;              //@synthesize audioFilePlayerMessage=_audioFilePlayerMessage - In the implementation block
+(id)sockPuppetMessageWithSubMessage:(id)arg1 setterSelector:(SEL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlist:(SPProtoSockPuppetPlist *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SPProtoSockPuppetPlist *)plist;
-(void)setAudioFilePlayerMessage:(SPProtoAudioFilePlayerMessage *)arg1 ;
-(BOOL)hasPlist;
-(BOOL)hasAudioFilePlayerMessage;
-(SPProtoAudioFilePlayerMessage *)audioFilePlayerMessage;
@end

