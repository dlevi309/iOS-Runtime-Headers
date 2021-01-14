/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


#import <SiriUICore/SiriUICore-Structs.h>
@class NSArray, CALayer, UIImage;

@interface _SUICStreamingWord : NSObject {

	_SUICStreamingWord* _previous;
	long long _insertType;
	NSArray* _emojiRangesInText;
	double _glyphLocationInWordX;
	CALayer* _wordLayer;
	UIImage* _beginImage;
	UIImage* _endImage;
	NSRange _textRange;

}

@property (nonatomic,retain) _SUICStreamingWord * previous;              //@synthesize previous=_previous - In the implementation block
@property (assign,nonatomic) long long insertType;                       //@synthesize insertType=_insertType - In the implementation block
@property (assign,nonatomic) NSRange textRange;                          //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,retain) NSArray * emojiRangesInText;                //@synthesize emojiRangesInText=_emojiRangesInText - In the implementation block
@property (assign,nonatomic) double glyphLocationInWordX;                //@synthesize glyphLocationInWordX=_glyphLocationInWordX - In the implementation block
@property (nonatomic,retain) CALayer * wordLayer;                        //@synthesize wordLayer=_wordLayer - In the implementation block
@property (nonatomic,retain) UIImage * beginImage;                       //@synthesize beginImage=_beginImage - In the implementation block
@property (nonatomic,retain) UIImage * endImage;                         //@synthesize endImage=_endImage - In the implementation block
-(_SUICStreamingWord *)previous;
-(void)setTextRange:(NSRange)arg1 ;
-(id)init;
-(void)setPrevious:(_SUICStreamingWord *)arg1 ;
-(NSRange)textRange;
-(UIImage *)endImage;
-(void)setWordLayer:(CALayer *)arg1 ;
-(long long)insertType;
-(void)setInsertType:(long long)arg1 ;
-(NSArray *)emojiRangesInText;
-(void)setEmojiRangesInText:(NSArray *)arg1 ;
-(double)glyphLocationInWordX;
-(void)setGlyphLocationInWordX:(double)arg1 ;
-(CALayer *)wordLayer;
-(UIImage *)beginImage;
-(void)setBeginImage:(UIImage *)arg1 ;
-(void)setEndImage:(UIImage *)arg1 ;
@end

