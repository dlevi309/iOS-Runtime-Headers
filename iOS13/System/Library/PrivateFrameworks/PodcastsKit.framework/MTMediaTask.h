/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class AMSMediaTask, NSArray;

@interface MTMediaTask : NSObject {

	AMSMediaTask* _mediaTask;

}

@property (nonatomic,retain) AMSMediaTask * mediaTask;              //@synthesize mediaTask=_mediaTask - In the implementation block
@property (nonatomic,retain) NSArray * identifiers; 
-(id)initWithType:(long long)arg1 ;
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(void)perform:(/*^block*/id)arg1 ;
-(AMSMediaTask *)mediaTask;
-(void)setMediaTask:(AMSMediaTask *)arg1 ;
@end

