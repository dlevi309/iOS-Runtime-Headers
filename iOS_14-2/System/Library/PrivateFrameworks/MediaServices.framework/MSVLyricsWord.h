/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement {

	MSVLyricsLine* _parentLine;
	MSVLyricsWord* _nextWord;

}

@property (nonatomic,retain) MSVLyricsLine * parentLine;              //@synthesize parentLine=_parentLine - In the implementation block
@property (nonatomic,retain) MSVLyricsWord * nextWord;                //@synthesize nextWord=_nextWord - In the implementation block
-(id)init;
-(MSVLyricsWord *)nextWord;
-(void)setParentLine:(MSVLyricsLine *)arg1 ;
-(MSVLyricsLine *)parentLine;
-(void)setNextWord:(MSVLyricsWord *)arg1 ;
@end

