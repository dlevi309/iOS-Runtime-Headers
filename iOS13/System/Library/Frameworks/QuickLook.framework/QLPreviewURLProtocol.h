/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <CFNetwork/NSURLProtocol.h>

@interface QLPreviewURLProtocol : NSURLProtocol
+(void)initialize;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerPreview:(id)arg1 ;
+(void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3 ;
+(id)_errorForAbort;
+(void)_unregisterURL:(id)arg1 ;
+(id)_errorForCancel;
+(void)startLoadingProtocol:(id)arg1 ;
+(void)stopLoadingProtocol:(id)arg1 ;
+(id)newUniqueURLWithName:(id)arg1 ;
+(id)newURLWithContentID:(id)arg1 baseURL:(id)arg2 ;
+(void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
+(id)_errorForNoPreview;
+(void)unregisterURLs:(id)arg1 andPreview:(id)arg2 ;
+(void)setError:(id)arg1 forURL:(id)arg2 ;
+(id)errorForURL:(id)arg1 ;
+(id)mimeTypeForAttachmentURL:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
@end

