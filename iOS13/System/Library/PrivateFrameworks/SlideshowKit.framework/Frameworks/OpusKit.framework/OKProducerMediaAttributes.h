/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString;

@interface OKProducerMediaAttributes : NSObject <NSSecureCoding, NSCopying> {

	double _duration;
	double _scale;
	double _scale2;
	NSString* _text;
	NSAttributedString* _attributedText;
	CGPoint _offset;
	CGPoint _offset2;

}

@property (nonatomic,retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;                                     //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGPoint offset2;                                  //@synthesize offset2=_offset2 - In the implementation block
@property (assign,nonatomic) double scale2;                                    //@synthesize scale2=_scale2 - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(double)duration;
-(void)setOffset:(CGPoint)arg1 ;
-(NSString *)text;
-(void)setScale:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(CGPoint)offset;
-(void)setDuration:(double)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(BOOL)hasText;
-(void)clearText;
-(void)updateWithText:(id)arg1 ;
-(void)setOffset2:(CGPoint)arg1 ;
-(void)setScale2:(double)arg1 ;
-(CGPoint)offset2;
-(double)scale2;
@end

