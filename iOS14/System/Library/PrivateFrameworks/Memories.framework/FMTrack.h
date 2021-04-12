/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSArray, FMMixParameters;

@interface FMTrack : NSObject {

	NSArray* _clips;
	FMMixParameters* _mixParameters;

}

@property (nonatomic,retain) NSArray * clips;                              //@synthesize clips=_clips - In the implementation block
@property (nonatomic,retain) FMMixParameters * mixParameters;              //@synthesize mixParameters=_mixParameters - In the implementation block
-(NSArray *)clips;
-(void)setClips:(NSArray *)arg1 ;
-(id)description;
-(FMMixParameters *)mixParameters;
-(id)initWithClips:(id)arg1 mixParameters:(id)arg2 ;
-(void)setMixParameters:(FMMixParameters *)arg1 ;
@end

