/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)string;
-(id)font;
-(void)renderInContext:(CGContextRef)arg1;
-(unsigned long long)glyphCount;
-(NSRange*)stringRange;
-(CGRect)usedRunRect;
-(unsigned long long)lineIndex;
-(BOOL)shouldRender;
-(void)enumerateGlyphsUsingBlock:(/*^block*/id)arg1;
-(CGRect)lineRect;
-(CGRect)usedLineRect;
-(double)baseline;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long lineIndex;              //@synthesize lineIndex=_lineIndex - In the implementation block
-(id)string;
-(void)dealloc;
-(id)font;
-(void)renderInContext:(CGContextRef)arg1 ;
-(long long)glyphCount;
-(NSRange)stringRange;
-(CGRect)usedRunRect;
-(unsigned long long)lineIndex;
-(BOOL)shouldRender;
-(void)enumerateGlyphsUsingBlock:(/*^block*/id)arg1 ;
-(CGRect)lineRect;
-(CGRect)usedLineRect;
-(CTRunRef)_CTRun;
-(id)initWithCTRun:(CTRunRef)arg1 lineIndex:(unsigned long long)arg2 layoutInfo:(id)arg3 ;
-(void)_enumerateGlyphsUsingBlock:(/*^block*/id)arg1 ;
-(void)setBaseline:(double)arg1 ;
-(void)setLineRect:(CGRect)arg1 ;
-(void)setUsedRunRect:(CGRect)arg1 ;
-(void)setUsedLineRect:(CGRect)arg1 ;
-(double)baseline;
@end

