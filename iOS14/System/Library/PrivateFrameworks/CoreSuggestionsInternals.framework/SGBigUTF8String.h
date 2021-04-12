/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface SGBigUTF8String : NSString <NSCopying, NSMutableCopying, NSSecureCoding> {

	const char* _utf8;
	const char* _utf8End;
	NSData* _backingData;
	SCD_Struct_SG16* _chunks;
	unsigned _nchunks;
	unsigned _length;
	BOOL _ascii;
	BOOL _nullTerminated;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)fastestEncoding;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const char*)UTF8String;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithUTF8Data:(id)arg1 ;
@end

