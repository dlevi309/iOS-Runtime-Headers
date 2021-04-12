/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/swift/libswiftCore.dylib
*/

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libswiftCore.dylib/Swift.__SwiftNativeNSString.h>
#import <libobjc.A.dylib/Swift._NSCopying.h>

@interface Swift.__SharedStringStorage : Swift.__SwiftNativeNSString <Swift._NSCopying> {

	 _owner;
	 start;
	 _countAndFlags;
	 _breadcrumbs;

}

@property (readonly,nonatomic) long long length; 
@property (readonly,nonatomic) unsigned long long hash; 
@property (readonly,nonatomic) unsigned long long fastestEncoding; 
-(unsigned long long)fastestEncoding;
-(char)isEqualToString:(id)arg1 ;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(char)getCString:(char*)arg1 maxLength:(long long)arg2 encoding:(unsigned long long)arg3 ;
-(void)getCharacters:(unsigned short*)arg1 range:(SCD_Struct_Sw1)arg2 ;
-(unsigned short)characterAtIndex:(long long)arg1 ;
-(long long)length;
-(const char*)_fastCStringContents:(char)arg1 ;
-(unsigned long long)hash;
-(const char*)UTF8String;
-(id)copyWithZone:(void*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)init;
@end

