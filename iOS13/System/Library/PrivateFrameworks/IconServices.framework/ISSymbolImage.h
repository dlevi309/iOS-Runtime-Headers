/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>

@interface ISSymbolImage : ISImage {

	CGImageRef _internalCGImage;
	double _internalScale;
	CGSize _internalSize;
	BOOL _flippable;
	double _pointSize;
	unsigned long long _symbolSize;
	long long _symbolWeight;
	double _referencePointSize;
	double _fontMatchingScaleFactor;
	double _baselineOffset;
	double _capHeight;
	CGRect _alignmentRect;
	CGRect _contentBounds;

}

@property (nonatomic,readonly) double pointSize;                               //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) unsigned long long symbolSize;                  //@synthesize symbolSize=_symbolSize - In the implementation block
@property (nonatomic,readonly) long long symbolWeight;                         //@synthesize symbolWeight=_symbolWeight - In the implementation block
@property (nonatomic,readonly) double referencePointSize;                      //@synthesize referencePointSize=_referencePointSize - In the implementation block
@property (nonatomic,readonly) double fontMatchingScaleFactor;                 //@synthesize fontMatchingScaleFactor=_fontMatchingScaleFactor - In the implementation block
@property (nonatomic,readonly) double baselineOffset;                          //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,readonly) double capHeight;                               //@synthesize capHeight=_capHeight - In the implementation block
@property (nonatomic,readonly) CGRect alignmentRect;                           //@synthesize alignmentRect=_alignmentRect - In the implementation block
@property (nonatomic,readonly) CGRect contentBounds;                           //@synthesize contentBounds=_contentBounds - In the implementation block
@property (getter=isFlippable,nonatomic,readonly) BOOL flippable;              //@synthesize flippable=_flippable - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(double)scale;
-(double)pointSize;
-(double)baselineOffset;
-(double)capHeight;
-(BOOL)placeholder;
-(double)referencePointSize;
-(CGRect)alignmentRect;
-(CGRect)contentBounds;
-(BOOL)isFlippable;
-(CGImageRef)cgImage;
-(double)fontMatchingScaleFactor;
-(id)initWithNamedVectorGlyph:(id)arg1 ;
-(unsigned long long)symbolSize;
-(long long)symbolWeight;
@end

