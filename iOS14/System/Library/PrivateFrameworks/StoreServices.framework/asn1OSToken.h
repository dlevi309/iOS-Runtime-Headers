/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/asn1Token.h>

@class asn1Token;

@interface asn1OSToken : asn1Token {

	asn1Token* mValue;

}

@property (readonly) asn1Token * value; 
-(id)stringValue;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
-(asn1Token *)value;
-(void)dealloc;
@end

