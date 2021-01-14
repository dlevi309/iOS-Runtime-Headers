/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSScanner.h>

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {

	NSString* scanString;
	NSCharacterSet* skipSet;
	NSCharacterSet* invertedSkipSet;
	id locale;
	unsigned long long scanLocation;
	struct {
		unsigned caseSensitive : 1;
		unsigned  : 31;
	}  flags;

}
-(id)initWithString:(id)arg1 ;
-(id)locale;
-(void)setLocale:(id)arg1 ;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)caseSensitive;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(id)_invertedSkipSet;
-(id)string;
-(void)setCharactersToBeSkipped:(id)arg1 ;
-(BOOL)scanInt:(int*)arg1 ;
-(unsigned long long)scanLocation;
-(id)charactersToBeSkipped;
-(void)dealloc;
@end

