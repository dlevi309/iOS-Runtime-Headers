/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <CFNetwork/NSURLProtocol.h>

@interface FCMockURLProtocol : NSURLProtocol
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)URLForData:(id)arg1 mimeType:(id)arg2 ;
+(id)URLForError:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
@end

