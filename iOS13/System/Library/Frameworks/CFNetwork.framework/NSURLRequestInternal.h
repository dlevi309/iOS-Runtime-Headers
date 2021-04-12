/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface NSURLRequestInternal : NSObject {

	URLRequest* _request;

}

@property (readonly) URLRequest* _inner; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(URLRequest*)_inner;
-(id)_initWithMessage:(CFHTTPMessageRef)arg1 bodyParts:(CFArrayRef)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 mainDocumentURL:(CFURLRef)arg5 mutable:(unsigned char)arg6 ;
@end

