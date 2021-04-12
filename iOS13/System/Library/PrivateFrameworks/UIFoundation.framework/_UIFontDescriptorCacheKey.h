/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/_UIFontCacheKey.h>

@class UIFontDescriptor, NSString;

@interface _UIFontDescriptorCacheKey : _UIFontCacheKey {

	BOOL _textLegibility;
	UIFontDescriptor* _fontDescriptor;
	double _pointSize;
	NSString* _textStyleForScaling;
	double _pointSizeForScaling;
	double _maximumPointSizeAfterScaling;

}

@property (nonatomic,copy) UIFontDescriptor * fontDescriptor;                  //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
@property (assign,nonatomic) double pointSize;                                 //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,copy) NSString * textStyleForScaling;                     //@synthesize textStyleForScaling=_textStyleForScaling - In the implementation block
@property (assign,nonatomic) double pointSizeForScaling;                       //@synthesize pointSizeForScaling=_pointSizeForScaling - In the implementation block
@property (assign,nonatomic) double maximumPointSizeAfterScaling;              //@synthesize maximumPointSizeAfterScaling=_maximumPointSizeAfterScaling - In the implementation block
@property (assign,nonatomic) BOOL textLegibility;                              //@synthesize textLegibility=_textLegibility - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)_hash;
-(double)pointSize;
-(UIFontDescriptor *)fontDescriptor;
-(void)setPointSize:(double)arg1 ;
-(void)setTextLegibility:(BOOL)arg1 ;
-(void)setFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)setTextStyleForScaling:(NSString *)arg1 ;
-(void)setPointSizeForScaling:(double)arg1 ;
-(void)setMaximumPointSizeAfterScaling:(double)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(BOOL)textLegibility;
-(NSString *)textStyleForScaling;
-(double)pointSizeForScaling;
-(double)maximumPointSizeAfterScaling;
@end

