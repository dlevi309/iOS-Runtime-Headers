/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionRequest, MRPlayerPath;

@interface MRPlaybackSessionMigrateBeginMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackSessionRequest * request; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(id)initWithRequest:(id)arg1 playerPath:(id)arg2 ;
-(MRPlaybackSessionRequest *)request;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
@end

