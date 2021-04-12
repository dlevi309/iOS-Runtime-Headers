/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
*/

#import <AppStoreFoundation/ASFAsn1Token.h>

@class ASFAsn1Token;

@interface ASFAsn1OSToken : ASFAsn1Token {

	ASFAsn1Token* mValue;

}

@property (readonly) ASFAsn1Token * value; 
-(id)stringValue;
-(ASFAsn1Token *)value;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
@end

