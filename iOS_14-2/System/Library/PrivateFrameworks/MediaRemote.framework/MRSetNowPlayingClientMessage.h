/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRClient;

@interface MRSetNowPlayingClientMessage : MRProtocolMessage

@property (nonatomic,readonly) MRClient * client; 
-(MRClient *)client;
-(unsigned long long)type;
-(id)initWithClient:(id)arg1 ;
@end

