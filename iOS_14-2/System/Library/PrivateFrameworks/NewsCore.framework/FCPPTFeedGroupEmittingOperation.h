/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCPPTFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _channelID;

}

@property (nonatomic,retain) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
-(void)setChannelID:(NSString *)arg1 ;
-(void)performOperation;
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 context:(id)arg2 fromCursor:(id)arg3 toCursor:(id)arg4 groupEmitterIdentifier:(id)arg5 ;
@end

