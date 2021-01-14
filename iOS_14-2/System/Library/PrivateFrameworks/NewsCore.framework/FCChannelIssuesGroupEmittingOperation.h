/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCChannelIssuesGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _channelIdentifier;

}

@property (nonatomic,retain) NSString * channelIdentifier;              //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
-(void)performOperation;
-(id)init;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 channelIdentifier:(id)arg5 ;
@end

