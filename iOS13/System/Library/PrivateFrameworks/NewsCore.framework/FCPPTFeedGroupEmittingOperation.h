/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCPPTFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _channelID;

}

@property (nonatomic,retain) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
-(void)performOperation;
-(NSString *)channelID;
-(void)setChannelID:(NSString *)arg1 ;
-(id)initWithChannelID:(id)arg1 context:(id)arg2 fromCursor:(id)arg3 toCursor:(id)arg4 groupEmitterIdentifier:(id)arg5 ;
@end

