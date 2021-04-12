/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf, NSArray;

@interface MRUpdateContentItemMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
@property (nonatomic,readonly) NSArray * contentItems; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(NSArray *)contentItems;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
@end

