/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKFont, NSDictionary;

@interface CLKTextProviderStyle : NSObject <NSCopying> {

	BOOL _uppercase;
	BOOL _shouldEmbedTintColors;
	BOOL _shouldStyleForTritium;
	CLKFont* _font;
	CLKFont* _smallCapsBaseFont;
	NSDictionary* _otherAttributes;
	double _minimumScaleFactor;

}

@property (nonatomic,copy) CLKFont * font;                              //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) CLKFont * smallCapsBaseFont;                 //@synthesize smallCapsBaseFont=_smallCapsBaseFont - In the implementation block
@property (assign,nonatomic) BOOL uppercase;                            //@synthesize uppercase=_uppercase - In the implementation block
@property (nonatomic,copy) NSDictionary * otherAttributes;              //@synthesize otherAttributes=_otherAttributes - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                 //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldEmbedTintColors;                //@synthesize shouldEmbedTintColors=_shouldEmbedTintColors - In the implementation block
@property (assign,nonatomic) BOOL shouldStyleForTritium;                //@synthesize shouldStyleForTritium=_shouldStyleForTritium - In the implementation block
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(BOOL)arg6 ;
+(id)otherAttributesWithParagraphStyle:(id)arg1 kerning:(double)arg2 ;
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(BOOL)arg6 shouldStyleForTritium:(BOOL)arg7 ;
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 ;
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 ;
+(id)otherAttributesWithParagraphStyle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)setFont:(CLKFont *)arg1 ;
-(CLKFont *)font;
-(void)setUppercase:(BOOL)arg1 ;
-(BOOL)uppercase;
-(BOOL)shouldEmbedTintColors;
-(CLKFont *)smallCapsBaseFont;
-(NSDictionary *)otherAttributes;
-(void)setShouldStyleForTritium:(BOOL)arg1 ;
-(void)setSmallCapsBaseFont:(CLKFont *)arg1 ;
-(void)setOtherAttributes:(NSDictionary *)arg1 ;
-(void)setShouldEmbedTintColors:(BOOL)arg1 ;
-(BOOL)shouldStyleForTritium;
@end

