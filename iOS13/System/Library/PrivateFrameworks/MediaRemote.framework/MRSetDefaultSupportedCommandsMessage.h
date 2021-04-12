/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * supportedCommands; 
@property (nonatomic,readonly) NSString * bundleID; 
-(unsigned long long)type;
-(NSString *)bundleID;
-(NSArray *)supportedCommands;
-(id)initWithDefaultSupportedCommands:(id)arg1 forClient:(id)arg2 ;
@end

