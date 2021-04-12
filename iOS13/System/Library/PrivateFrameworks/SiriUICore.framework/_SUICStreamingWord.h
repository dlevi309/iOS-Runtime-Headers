/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


#import <SiriUICore/SiriUICore-Structs.h>
@class CALayer, UIImage;

@interface _SUICStreamingWord : NSObject {

	_SUICStreamingWord* _previous;
	long long _insertType;
	double _glyphLocationInWordX;
	CALayer* _wordLayer;
	UIImage* _beginImage;
	UIImage* _endImage;
	NSRange _textRange;

}

@property (nonatomic,retain) _SUICStreamingWord * previous;              //@synthesize previous=_previous - In the implementation block
@property (assign,nonatomic) long long insertType;                       //@synthesize insertType=_insertType - In the implementation block
@property (assign,nonatomic) NSRange textRange;                          //@synthesize textRange=_textRange - In the implementation block
@property (assign,nonatomic) double glyphLocationInWordX;                //@synthesize glyphLocationInWordX=_glyphLocationInWordX - In the implementation block
@property (nonatomic,retain) CALayer * wordLayer;                        //@synthesize wordLayer=_wordLayer - In the implementation block
@property (nonatomic,retain) UIImage * beginImage;                       //@synthesize beginImage=_beginImage - In the implementation block
@property (nonatomic,retain) UIImage * endImage;                         //@synthesize endImage=_endImage - In the implementation block
-(id)init;
-(_SUICStreamingWord *)previous;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(void)setPrevious:(_SUICStreamingWord *)arg1 ;
-(void)setWordLayer:(CALayer *)arg1 ;
-(long long)insertType;
-(void)setInsertType:(long long)arg1 ;
-(double)glyphLocationInWordX;
-(void)setGlyphLocationInWordX:(double)arg1 ;
-(CALayer *)wordLayer;
-(UIImage *)beginImage;
-(void)setBeginImage:(UIImage *)arg1 ;
-(UIImage *)endImage;
-(void)setEndImage:(UIImage *)arg1 ;
@end

