/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRSetArtworkMessage : MRProtocolMessage

@property (nonatomic,readonly) NSData * artworkData; 
-(id)initWithArtworkData:(id)arg1 ;
-(NSData *)artworkData;
-(unsigned long long)type;
@end

