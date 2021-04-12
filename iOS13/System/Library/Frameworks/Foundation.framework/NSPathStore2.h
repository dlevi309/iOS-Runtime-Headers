/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSPathStore2 : NSString {

	unsigned _lengthAndRefCount;
	unsigned short _characters[0];

}
+(id)pathStoreWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
+(id)pathWithComponents:(id)arg1 ;
-(unsigned long long)length;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(const unsigned short*)_fastCharacterContents;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)lastPathComponent;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1 ;
-(id)stringByDeletingLastPathComponent;
-(id)pathExtension;
-(BOOL)isAbsolutePath;
-(id)stringByAppendingPathComponent:(id)arg1 ;
-(id)stringByStandardizingPath;
-(id)stringByResolvingSymlinksInPath;
-(id)pathComponents;
-(id)_stringByStandardizingPathUsingCache:(BOOL)arg1 ;
-(id)stringByDeletingPathExtension;
-(id)stringByAppendingPathExtension:(id)arg1 ;
-(id)stringByAbbreviatingWithTildeInPath;
-(id)stringByExpandingTildeInPath;
@end

