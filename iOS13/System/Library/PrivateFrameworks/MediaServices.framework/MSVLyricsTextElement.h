/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MSVLyricsElement.h>

@class NSAttributedString;

@interface MSVLyricsTextElement : MSVLyricsElement {

	NSAttributedString* _lyricsText;

}

@property (nonatomic,copy) NSAttributedString * lyricsText;              //@synthesize lyricsText=_lyricsText - In the implementation block
-(id)init;
-(id)description;
-(void)setLyricsText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)lyricsText;
@end

