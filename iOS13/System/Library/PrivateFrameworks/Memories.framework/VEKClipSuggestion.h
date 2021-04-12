/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/VEKRangeSuggestion.h>

@protocol VEKClipProtocol;
@interface VEKClipSuggestion : VEKRangeSuggestion {

	id<VEKClipProtocol> _clip;

}

@property (nonatomic,retain) id<VEKClipProtocol> clip;              //@synthesize clip=_clip - In the implementation block
-(id)description;
-(id<VEKClipProtocol>)clip;
-(void)setClip:(id<VEKClipProtocol>)arg1 ;
-(id)initWithClipToEmulate:(id)arg1 ;
@end

