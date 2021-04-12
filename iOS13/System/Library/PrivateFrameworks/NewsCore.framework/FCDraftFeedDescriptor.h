/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCChannelProviding;
@class NSString;

@interface FCDraftFeedDescriptor : FCFeedDescriptor {

	id<FCChannelProviding> _channel;
	NSString* _articleListID;
	NSString* _issueListID;

}

@property (nonatomic,readonly) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSString * articleListID;                    //@synthesize articleListID=_articleListID - In the implementation block
@property (nonatomic,readonly) NSString * issueListID;                      //@synthesize issueListID=_issueListID - In the implementation block
-(id)name;
-(id<FCChannelProviding>)channel;
-(id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3 ;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)backingChannel;
-(id)allEmitterClasses;
-(long long)feedType;
-(NSString *)issueListID;
-(NSString *)articleListID;
@end

