/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackQueueRequest, MRPlayerPath;

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackQueueRequest * request; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(id)initWithRequest:(id)arg1 forPlayerPath:(id)arg2 ;
-(MRPlaybackQueueRequest *)request;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(unsigned long long)priority;
@end

