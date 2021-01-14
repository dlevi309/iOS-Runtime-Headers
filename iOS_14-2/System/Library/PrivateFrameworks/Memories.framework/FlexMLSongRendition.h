/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_buildOutroFadeoutMixParams;
-(id)initWithSong:(id)arg1 options:(id)arg2 andSummary:(id)arg3 forDuration:(SCD_Struct_PM8)arg4 ;
-(void)_calculateDuration:(SCD_Struct_PM8)arg1 ;
-(void)_buildTracks;
@end

