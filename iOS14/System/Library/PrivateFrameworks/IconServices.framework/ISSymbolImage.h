/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)contentBounds;
-(CGSize)size;
-(double)scale;
-(CGRect)alignmentRect;
-(double)pointSize;
-(double)capHeight;
-(double)fontMatchingScaleFactor;
-(double)baselineOffset;
-(unsigned long long)symbolSize;
-(BOOL)placeholder;
-(double)referencePointSize;
-(id)initWithNamedVectorGlyph:(id)arg1 ;
-(long long)symbolWeight;
-(CGImageRef)cgImage;
-(BOOL)isFlippable;
-(void)dealloc;
@end

