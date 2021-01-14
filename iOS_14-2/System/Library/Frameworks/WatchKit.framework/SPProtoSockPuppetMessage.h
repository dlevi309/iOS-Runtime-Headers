/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(SPProtoSockPuppetPlist *)plist;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPlist:(SPProtoSockPuppetPlist *)arg1 ;
-(void)setAudioFilePlayerMessage:(SPProtoAudioFilePlayerMessage *)arg1 ;
-(BOOL)hasPlist;
-(BOOL)hasAudioFilePlayerMessage;
-(SPProtoAudioFilePlayerMessage *)audioFilePlayerMessage;
@end

