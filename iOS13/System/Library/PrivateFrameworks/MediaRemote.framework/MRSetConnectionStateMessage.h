/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetConnectionStateMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned state; 
-(unsigned long long)type;
-(unsigned)state;
-(unsigned long long)encryptionType;
-(id)initWithConnectionState:(unsigned)arg1 ;
@end

