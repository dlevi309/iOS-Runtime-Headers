/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRNowPlayingState, NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage {

	MRNowPlayingState* _state;

}

@property (nonatomic,readonly) NSArray * supportedCommands; 
@property (nonatomic,readonly) NSString * bundleID; 
-(id)initWithDefaultSupportedCommands:(id)arg1 forPlayerPath:(id)arg2 ;
-(NSArray *)supportedCommands;
-(NSString *)bundleID;
-(unsigned long long)type;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
@end

