/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isEqualToString:(id)arg1 ;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)init;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_PL6)UUIDBytes;
-(unsigned long long)length;
-(id)initWithUUIDData:(id)arg1 ;
-(id)UUIDData;
-(const char*)UTF8String;
-(id)initWithCFUUIDBytes:(SCD_Struct_PL6)arg1 ;
-(id)initWithUUID:(unsigned char)arg1 ;
@end

