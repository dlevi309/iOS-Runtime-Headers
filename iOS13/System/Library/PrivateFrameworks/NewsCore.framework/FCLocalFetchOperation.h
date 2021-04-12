/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFetchOperation.h>

@protocol FCChannelProviding;
@class NSArray, NSMutableArray;

@interface FCLocalFetchOperation : FCFetchOperation {

	NSArray* _paths;
	NSMutableArray* _headlines;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) NSArray * paths;                           //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) NSMutableArray * headlines;                //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,retain) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
-(id<FCChannelProviding>)channel;
-(NSArray *)paths;
-(void)setChannel:(id<FCChannelProviding>)arg1 ;
-(void)performOperation;
-(NSMutableArray *)headlines;
-(id)initWithPaths:(id)arg1 andChannel:(id)arg2 ;
-(void)convertPathsToHeadlines;
@end

