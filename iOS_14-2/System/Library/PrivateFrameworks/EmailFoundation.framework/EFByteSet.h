/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface EFByteSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned char _bitString[32];

}
+(id)asciiWhitespaceSet;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)byteIsMember:(unsigned char)arg1 ;
-(id)description;
-(id)initWithCString:(const char*)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

