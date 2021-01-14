/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSBigMutableString : NSMutableString {

	struct {
		unsigned isStorage : 1;
		unsigned isUnicode : 1;
		unsigned hasBOM : 1;
		unsigned swap : 1;
		unsigned immutable : 1;
		unsigned  : 27;
	}  flags;
	unsigned long long length;
	SCD_Union_NS7* contents;

}
-(id)_newBigSubstringWithRange:(NSRange)arg1 wantsMutable:(BOOL)arg2 zone:(NSZone*)arg3 ;
-(id)initWithString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(BOOL)_copyDataFrom:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_checkForInvalidMutationWithSelector:(SEL)arg1 ;
-(BOOL)_setStorage:(CFStorageRef)arg1 encoding:(unsigned long long)arg2 ;
-(id)_newSmallImmutableSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(BOOL)_setData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(BOOL)_isMarkedAsImmutable;
-(void)_markAsImmutable;
-(id)initWithStorage:(CFStorageRef)arg1 length:(unsigned long long)arg2 isUnicode:(BOOL)arg3 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(BOOL)_isCString;
-(BOOL)_getData:(id*)arg1 encoding:(unsigned long long*)arg2 ;
-(id)_createSubstringWithRange:(NSRange)arg1 ;
-(BOOL)_copyStorage:(_CFStorage*)arg1 encoding:(unsigned long long*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)dealloc;
@end

