/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSURLRequestInternal : NSObject <NSCopying> {

	URLRequest* _request;

}

@property (readonly) URLRequest* _inner; 
-(id)init;
-(id)_initWithMessage:(CFHTTPMessageRef)arg1 bodyParts:(CFArrayRef)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 mainDocumentURL:(CFURLRef)arg5 mutable:(unsigned char)arg6 ;
-(unsigned long long)hash;
-(URLRequest*)_inner;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

