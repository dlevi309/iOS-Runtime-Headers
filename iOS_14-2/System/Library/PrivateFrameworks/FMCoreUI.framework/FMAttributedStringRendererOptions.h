/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/


@class NSArray;

@interface FMAttributedStringRendererOptions : NSObject {

	long long _lineBreakMode;
	double _lineFragmentPadding;
	unsigned long long _maximumNumberOfLines;
	double _hyphenationFactor;
	NSArray* _exclusionPaths;

}

@property (nonatomic,readonly) long long lineBreakMode;                              //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (nonatomic,readonly) double lineFragmentPadding;                           //@synthesize lineFragmentPadding=_lineFragmentPadding - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (nonatomic,readonly) double hyphenationFactor;                             //@synthesize hyphenationFactor=_hyphenationFactor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * exclusionPaths;                        //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
-(long long)lineBreakMode;
-(double)hyphenationFactor;
-(unsigned long long)maximumNumberOfLines;
-(id)init;
-(NSArray *)exclusionPaths;
-(double)lineFragmentPadding;
-(id)initWithLineBreakMode:(long long)arg1 lineFragmentPadding:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3 hyphenationFactor:(double)arg4 exclusionPaths:(id)arg5 ;
@end

