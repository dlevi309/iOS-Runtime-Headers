/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreText/CTGlyphStorageInterface.h>

@class NSATSTypesetter, NSString;

@interface NSATSGlyphStorage : CTGlyphStorageInterface {

	CTGlyphStorageRef _glyphStorage;
	CFArrayRef _masterRuns;
	NSATSTypesetter* _typesetter;
	SCD_Struct_NS15* _runs;
	long long _numRuns;
	long long _runBufferSize;
	NSRange _glyphRange;
	NSRange _characterRange;
	long long _bufferSize;
	NSATSGlyphStorage* _parent;
	CFSetRef _children;
	long long _paraEndElasticCharIndex;
	double _paraEndElasticCharWidth;
	NSString* _textString;
	SCD_Struct_NS18* _stack;
	const SCD_Struct_NS15* _lastElasticRun;
	long long _lastElasticRunLocation;
	long long _totalAbsorbedCount;
	struct {
		unsigned _hasNonNominalGlyph : 1;
		unsigned _hasPositionalStake : 1;
		unsigned _hasBidiRun : 1;
		unsigned _isEllipsisStorage : 1;
		unsigned _hasNonNominalStringIndexes : 1;
		unsigned _isUnordered : 1;
		unsigned _hasTotalAbsorbedCount : 1;
		unsigned _reserved : 25;
	}  _gFlags;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)popGlyph:(long long)arg1 ;
-(oneway void)release;
-(CTGlyphStorageRef)createCopy:(SCD_Struct_NS10)arg1 ;
-(void)finalize;
-(void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2 ;
-(void)setProps:(unsigned)arg1 forIndex:(long long)arg2 ;
-(void)pushGlyph:(long long)arg1 ;
-(void)swapGlyph:(long long)arg1 withIndex:(long long)arg2 ;
-(void)getCustomAdvance:(CGSize*)arg1 forIndex:(long long)arg2 ;
-(void)insertGlyphs:(SCD_Struct_NS10)arg1 ;
-(void)initGlyphStack:(long long)arg1 ;
-(void)setStringIndex:(long long)arg1 forIndex:(long long)arg2 ;
-(void)disposeGlyphStack;
-(void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2 ;
-(void)moveGlyphsTo:(long long)arg1 from:(SCD_Struct_NS10)arg2 ;
-(void)dealloc;
-(void)setAdvance:(CGSize)arg1 forIndex:(long long)arg2 ;
@end

