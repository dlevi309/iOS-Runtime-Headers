/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVectorTextLayoutRun.h>

@protocol _UIVectorTextLayoutRun <NSObject>
@property (nonatomic,readonly) unsigned long long lineIndex; 
@property (nonatomic,readonly) double baseline; 
@property (nonatomic,readonly) CGRect usedRunRect; 
@property (nonatomic,readonly) CGRect lineRect; 
@property (nonatomic,readonly) CGRect usedLineRect; 
@required
-(double)baseline;
-(unsigned long long)lineIndex;
-(CGRect)lineRect;
-(unsigned long long)glyphCount;
-(void)renderInContext:(CGContextRef)arg1;
-(id)string;
-(CGRect)usedRunRect;
-(BOOL)shouldRender;
-(void)enumerateGlyphsUsingBlock:(/*^block*/id)arg1;
-(CGRect)usedLineRect;
-(id)font;
-(NSRange*)stringRange;

@end


@class NSAttributedString, _UIVectorTextLayoutInfo, NSString;

@interface _UIVectorTextLayoutRun : NSObject <_UIVectorTextLayoutRun> {

	unsigned long long _glyphCount;
	NSAttributedString* _sourceString;
	_UIVectorTextLayoutInfo* _layoutInfo;
	unsigned long long _lineIndex;
	CTRunRef _runRef;
	double _baseline;
	CGRect _lineRect;
	CGRect _usedLineRect;
	CGRect _usedRunRect;

}

@property (nonatomic,readonly) CTRunRef _CTRun;                           //@synthesize runRef=_runRef - In the implementation block
@property (assign,nonatomic) double baseline;                             //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) CGRect lineRect;                             //@synthesize lineRect=_lineRect - In the implementation block
@property (assign,nonatomic) CGRect usedLineRect;                         //@synthesize usedLineRect=_usedLineRect - In the implementation block
@property (assign,nonatomic) CGRect usedRunRect;                          //@synthesize usedRunRect=_usedRunRect - In the implementation block
@property (nonatomic,readonly) unsigned long long lineIndex;              //@synthesize lineIndex=_lineIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CTRunRef)_CTRun;
-(double)baseline;
-(unsigned long long)lineIndex;
-(CGRect)lineRect;
-(long long)glyphCount;
-(void)renderInContext:(CGContextRef)arg1 ;
-(id)string;
-(CGRect)usedRunRect;
-(BOOL)shouldRender;
-(void)enumerateGlyphsUsingBlock:(/*^block*/id)arg1 ;
-(CGRect)usedLineRect;
-(id)initWithCTRun:(CTRunRef)arg1 lineIndex:(unsigned long long)arg2 layoutInfo:(id)arg3 ;
-(void)_enumerateGlyphsUsingBlock:(/*^block*/id)arg1 ;
-(void)setBaseline:(double)arg1 ;
-(void)setLineRect:(CGRect)arg1 ;
-(void)setUsedRunRect:(CGRect)arg1 ;
-(void)setUsedLineRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)font;
-(NSRange)stringRange;
@end

