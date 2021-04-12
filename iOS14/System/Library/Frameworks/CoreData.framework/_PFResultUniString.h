/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_PFResultString.h>

@interface _PFResultUniString : _PFResultString {

	unsigned _length;

}
+(void)initialize;
+(unsigned long long)bufferOffset;
+(CFAllocatorRef)cfDeallocator;
-(unsigned long long)cStringLength;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(unsigned long long)hash;
-(const char*)UTF8String;
-(void)getCString:(char*)arg1 ;
-(BOOL)_isCString;
-(BOOL)isEqual:(id)arg1 ;
@end

