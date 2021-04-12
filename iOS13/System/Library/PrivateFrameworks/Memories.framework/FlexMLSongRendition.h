/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/FMSongRendition.h>

@class FlexMLSummary;

@interface FlexMLSongRendition : FMSongRendition {

	FlexMLSummary* _summary;

}

@property (nonatomic,retain) FlexMLSummary * summary;              //@synthesize summary=_summary - In the implementation block
-(FlexMLSummary *)summary;
-(void)setSummary:(FlexMLSummary *)arg1 ;
-(id)initWithSong:(id)arg1 options:(id)arg2 andSummary:(id)arg3 forDuration:(SCD_Struct_PM5)arg4 ;
-(void)_calculateDuration:(SCD_Struct_PM5)arg1 ;
-(void)_buildTracks;
-(id)_buildOutroFadeoutMixParams;
@end

