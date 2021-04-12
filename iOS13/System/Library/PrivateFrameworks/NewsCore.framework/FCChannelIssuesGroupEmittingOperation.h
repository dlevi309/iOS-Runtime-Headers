/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCChannelIssuesGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _channelIdentifier;

}

@property (nonatomic,retain) NSString * channelIdentifier;              //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
-(id)init;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(void)performOperation;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 channelIdentifier:(id)arg5 ;
@end

