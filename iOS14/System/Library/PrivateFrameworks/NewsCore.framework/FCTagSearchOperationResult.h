/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCStreamingResults;

@interface FCTagSearchOperationResult : NSObject {

	FCStreamingResults* _channels;
	FCStreamingResults* _topics;

}

@property (nonatomic,retain) FCStreamingResults * channels;              //@synthesize channels=_channels - In the implementation block
@property (nonatomic,retain) FCStreamingResults * topics;                //@synthesize topics=_topics - In the implementation block
-(FCStreamingResults *)topics;
-(void)setTopics:(FCStreamingResults *)arg1 ;
-(void)setChannels:(FCStreamingResults *)arg1 ;
-(FCStreamingResults *)channels;
@end

