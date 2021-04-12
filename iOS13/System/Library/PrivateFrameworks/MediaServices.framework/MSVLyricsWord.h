/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setParentLine:(MSVLyricsLine *)arg1 ;
-(MSVLyricsLine *)parentLine;
-(MSVLyricsWord *)nextWord;
-(void)setNextWord:(MSVLyricsWord *)arg1 ;
@end

