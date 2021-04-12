/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCChannelProviding;
@class NSString;

@interface FCDraftFeedDescriptor : FCFeedDescriptor {

	NSString* _articleListID;
	NSString* _issueListID;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSString * articleListID;                    //@synthesize articleListID=_articleListID - In the implementation block
@property (nonatomic,readonly) NSString * issueListID;                      //@synthesize issueListID=_issueListID - In the implementation block
-(long long)feedType;
-(id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3 ;
-(id)backingTag;
-(id)allEmitterClasses;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id<FCChannelProviding>)channel;
-(id)name;
-(id)backingChannel;
-(NSString *)issueListID;
-(NSString *)articleListID;
@end

