/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
*/

#import <AppStoreFoundation/ASFAsn1Token.h>

@class ASFAsn1Token;

@interface ASFAsn1OSToken : ASFAsn1Token {

	ASFAsn1Token* mValue;

}

@property (readonly) ASFAsn1Token * value; 
-(id)stringValue;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
-(ASFAsn1Token *)value;
@end

