/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray, NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {

	TUnfairLock _lock;
	const TTraitsValues* _refTraits;
	unsigned long long _count;
	NSArray* _cascade;
	NSMutableArray* _fallbacks;
	unsigned long long _hash;
	int _uiUse;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CT5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

