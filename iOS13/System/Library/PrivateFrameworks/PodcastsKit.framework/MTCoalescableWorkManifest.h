/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class NSArray;

@interface MTCoalescableWorkManifest : NSObject {

	/*^block*/id _workBlock;
	NSArray* _completions;

}

@property (nonatomic,copy) id workBlock;                         //@synthesize workBlock=_workBlock - In the implementation block
@property (nonatomic,retain) NSArray * completions;              //@synthesize completions=_completions - In the implementation block
-(id)description;
-(NSArray *)completions;
-(void)setCompletions:(NSArray *)arg1 ;
-(id)workBlock;
-(void)setWorkBlock:(id)arg1 ;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)manifestByReplacingWorkBlock:(/*^block*/id)arg1 appendingCompletion:(/*^block*/id)arg2 ;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completions:(id)arg2 ;
@end

