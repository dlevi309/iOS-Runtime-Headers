/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreText/_CTGlyphStorage.h>

@interface _CTNativeGlyphStorage : _CTGlyphStorage {

	const long long* _attachCounts;
	const CGPoint* _origins;
	unsigned long long _retainCount;
	GlyphStack* _stack;
	long long _capacity;
	void* _preallocatedStorage;

}
+(id)newWithCount:(long long)arg1 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(CGPoint)originAtIndex:(long long)arg1 ;
-(void)setProps:(unsigned)arg1 atIndex:(long long)arg2 ;
-(void)setStringIndex:(long long)arg1 atIndex:(long long)arg2 ;
-(void)initGlyphStackWithCapacity:(long long)arg1 ;
-(void)pushGlyphAtIndex:(long long)arg1 ;
-(void)popGlyphAtIndex:(long long)arg1 ;
-(long long)attachmentCountAtIndex:(long long)arg1 ;
-(void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long long)arg2 ;
-(BOOL)implementsOrigins;
-(id)initWithCount:(long long)arg1 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void)setOrigin:(CGPoint)arg1 atIndex:(long long)arg2 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long long)arg2 ;
-(id)prepareWithCapacity:(long long)arg1 preallocated:(BOOL)arg2 ;
-(void)setCapacity:(long long)arg1 ;
@end

