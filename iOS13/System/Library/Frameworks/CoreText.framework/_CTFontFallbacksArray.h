/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray, NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {

	TUnfairLock _lock;
	const TBaseFont* _baseFont;
	const TTraitsValues* _refTraits;
	unsigned long long _count;
	NSArray* _cascade;
	NSMutableArray* _fallbacks;
	unsigned long long _hash;
	int _uiUse;

}
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CT4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 shouldLock:(BOOL)arg2 addRanges:(BOOL)arg3 ;
-(id)initWithBaseFont:(const TBaseFont*)arg1 cascade:(id)arg2 uiUse:(int)arg3 ;
-(CTFontDescriptorRef)cachedDescriptorForCharacter:(unsigned short)arg1 ;
@end

