/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <Foundation/NSString.h>

@interface PLUUIDString : NSString {

	unsigned char _uuid[16];
	char _uuidString[37];

}
+(id)UUIDString;
+(BOOL)parseUUIDString:(id)arg1 uuidBuffer:(char*)arg2 ;
-(id)init;
-(unsigned long long)length;
-(const char*)UTF8String;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)initWithUUID:(unsigned char)arg1 ;
-(id)initWithUUIDData:(id)arg1 ;
-(id)UUIDData;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithCFUUIDBytes:(SCD_Struct_PL6)arg1 ;
-(SCD_Struct_PL6)UUIDBytes;
@end

