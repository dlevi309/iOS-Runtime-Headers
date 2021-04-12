/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isEqualToString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)stringByAppendingPathComponent:(id)arg1 ;
-(id)lastPathComponent;
-(id)stringByAppendingPathExtension:(id)arg1 ;
-(unsigned long long)length;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1 ;
-(id)stringByResolvingSymlinksInPath;
-(id)pathComponents;
-(const unsigned short*)_fastCharacterContents;
-(id)copy;
-(id)stringByExpandingTildeInPath;
-(id)_stringByStandardizingPathUsingCache:(BOOL)arg1 ;
-(BOOL)isAbsolutePath;
-(unsigned long long)hash;
-(id)stringByDeletingPathExtension;
-(id)stringByDeletingLastPathComponent;
-(id)stringByStandardizingPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)pathExtension;
-(id)stringByAbbreviatingWithTildeInPath;
@end

