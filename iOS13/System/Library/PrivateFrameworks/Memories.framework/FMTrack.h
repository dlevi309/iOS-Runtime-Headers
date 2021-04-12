/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSArray, FMMixParameters;

@interface FMTrack : NSObject {

	NSArray* _clips;
	FMMixParameters* _mixParameters;

}

@property (nonatomic,retain) NSArray * clips;                              //@synthesize clips=_clips - In the implementation block
@property (nonatomic,retain) FMMixParameters * mixParameters;              //@synthesize mixParameters=_mixParameters - In the implementation block
-(id)description;
-(void)setClips:(NSArray *)arg1 ;
-(NSArray *)clips;
-(FMMixParameters *)mixParameters;
-(void)setMixParameters:(FMMixParameters *)arg1 ;
-(id)initWithClips:(id)arg1 mixParameters:(id)arg2 ;
@end

