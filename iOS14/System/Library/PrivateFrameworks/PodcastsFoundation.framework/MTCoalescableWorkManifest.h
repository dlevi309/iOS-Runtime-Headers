/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@class NSArray;

@interface MTCoalescableWorkManifest : NSObject {

	/*^block*/id _workBlock;
	NSArray* _completions;

}

@property (nonatomic,copy) id workBlock;                         //@synthesize workBlock=_workBlock - In the implementation block
@property (nonatomic,retain) NSArray * completions;              //@synthesize completions=_completions - In the implementation block
-(void)setWorkBlock:(id)arg1 ;
-(id)description;
-(id)workBlock;
-(NSArray *)completions;
-(void)setCompletions:(NSArray *)arg1 ;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)manifestByReplacingWorkBlock:(/*^block*/id)arg1 appendingCompletion:(/*^block*/id)arg2 ;
-(id)initWithWorkBlock:(/*^block*/id)arg1 completions:(id)arg2 ;
@end

