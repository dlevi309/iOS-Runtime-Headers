/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsSection, NSArray, NSString;

@interface MSVLyricsLine : MSVLyricsTextElement {

	BOOL _instrumentalBreak;
	long long _lineIndex;
	long long _originalLineIndex;
	MSVLyricsSection* _parentSection;
	MSVLyricsLine* _nextLine;
	NSArray* _words;
	NSString* _translationKey;

}

@property (assign,getter=isInstrumentalBreak,nonatomic) BOOL instrumentalBreak;              //@synthesize instrumentalBreak=_instrumentalBreak - In the implementation block
@property (assign,nonatomic) long long lineIndex;                                            //@synthesize lineIndex=_lineIndex - In the implementation block
@property (assign,nonatomic) long long originalLineIndex;                                    //@synthesize originalLineIndex=_originalLineIndex - In the implementation block
@property (assign,nonatomic,__weak) MSVLyricsSection * parentSection;                        //@synthesize parentSection=_parentSection - In the implementation block
@property (nonatomic,retain) MSVLyricsLine * nextLine;                                       //@synthesize nextLine=_nextLine - In the implementation block
@property (nonatomic,retain) NSArray * words;                                                //@synthesize words=_words - In the implementation block
@property (nonatomic,copy) NSString * translationKey;                                        //@synthesize translationKey=_translationKey - In the implementation block
-(NSArray *)words;
-(void)setLineIndex:(long long)arg1 ;
-(id)init;
-(long long)lineIndex;
-(void)setWords:(NSArray *)arg1 ;
-(id)description;
-(MSVLyricsLine *)nextLine;
-(void)setTranslationKey:(NSString *)arg1 ;
-(void)setOriginalLineIndex:(long long)arg1 ;
-(void)setNextLine:(MSVLyricsLine *)arg1 ;
-(void)setParentSection:(MSVLyricsSection *)arg1 ;
-(NSString *)translationKey;
-(BOOL)containsTimeOffset:(double)arg1 withErrorMargin:(double)arg2 ;
-(BOOL)isInstrumentalBreak;
-(MSVLyricsSection *)parentSection;
-(void)setInstrumentalBreak:(BOOL)arg1 ;
-(long long)originalLineIndex;
@end

