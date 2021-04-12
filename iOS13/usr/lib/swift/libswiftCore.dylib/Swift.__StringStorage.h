/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/swift/libswiftCore.dylib
*/

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libswiftCore.dylib/Swift.__SwiftNativeNSString.h>
#import <libobjc.A.dylib/Swift._NSCopying.h>

@interface Swift.__StringStorage : Swift.__SwiftNativeNSString <Swift._NSCopying> {

	 _realCapacityAndFlags;
	 _countAndFlags;

}

@property (readonly,nonatomic) long long length; 
@property (readonly,nonatomic) unsigned long long hash; 
@property (readonly,nonatomic) unsigned long long fastestEncoding; 
-(const char*)_fastCStringContents:(char)arg1 ;
-(long long)length;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(void*)arg1 ;
-(const char*)UTF8String;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(SCD_Struct_Sw1)arg2 ;
-(char)getCString:(char*)arg1 maxLength:(long long)arg2 encoding:(unsigned long long)arg3 ;
-(char)isEqualToString:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(id)init;
@end

