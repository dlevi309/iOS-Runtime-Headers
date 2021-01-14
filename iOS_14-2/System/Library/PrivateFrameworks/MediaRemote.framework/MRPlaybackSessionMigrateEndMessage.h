/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionRequest, NSError, MRPlayerPath;

@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackSessionRequest * request; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(id)initWithRequest:(id)arg1 error:(id)arg2 playerPath:(id)arg3 ;
-(MRPlaybackSessionRequest *)request;
-(NSError *)error;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
@end

