/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

