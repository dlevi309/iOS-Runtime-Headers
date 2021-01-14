/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/VEKRangeSuggestion.h>

@protocol VEKClipProtocol;
@interface VEKClipSuggestion : VEKRangeSuggestion {

	id<VEKClipProtocol> _clip;

}

@property (nonatomic,retain) id<VEKClipProtocol> clip;              //@synthesize clip=_clip - In the implementation block
-(id<VEKClipProtocol>)clip;
-(id)description;
-(void)setClip:(id<VEKClipProtocol>)arg1 ;
-(id)initWithClipToEmulate:(id)arg1 ;
@end

