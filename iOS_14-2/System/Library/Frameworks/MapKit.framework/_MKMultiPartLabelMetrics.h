/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSAttributedString, NSArray, NSMutableAttributedString;

@interface _MKMultiPartLabelMetrics : NSObject {

	NSAttributedString* _originalAttributedString;
	NSArray* _separators;
	NSArray* _components;
	NSMutableAttributedString* _attributedString;
	unsigned long long _currentSeparatorIndex;

}

@property (nonatomic,copy,readonly) NSAttributedString * originalAttributedString;              //@synthesize originalAttributedString=_originalAttributedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * separators;                                       //@synthesize separators=_separators - In the implementation block
@property (nonatomic,copy,readonly) NSArray * components;                                       //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSMutableAttributedString * attributedString;                    //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) unsigned long long currentSeparatorIndex;                          //@synthesize currentSeparatorIndex=_currentSeparatorIndex - In the implementation block
-(BOOL)_shiftLocationOfStrings:(id)arg1 startingAtIndex:(unsigned long long)arg2 shiftValue:(long long)arg3 ;
-(NSMutableAttributedString *)attributedString;
-(NSArray *)components;
-(id)initWithMultiPartString:(id)arg1 ;
-(NSAttributedString *)originalAttributedString;
-(void)setCurrentSeparatorIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentSeparatorIndex;
-(BOOL)replaceSeparatorAtIndex:(unsigned long long)arg1 withString:(id)arg2 ;
-(void)reset;
-(NSArray *)separators;
@end

