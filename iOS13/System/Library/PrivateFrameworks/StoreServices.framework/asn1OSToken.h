/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/asn1Token.h>

@class asn1Token;

@interface asn1OSToken : asn1Token {

	asn1Token* mValue;

}

@property (readonly) asn1Token * value; 
-(void)dealloc;
-(id)stringValue;
-(asn1Token *)value;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
@end

