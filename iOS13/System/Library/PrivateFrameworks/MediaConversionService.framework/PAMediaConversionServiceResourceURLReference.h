/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


@class NSURL;

@interface PAMediaConversionServiceResourceURLReference : NSObject {

	BOOL _mustStopAccessingURL;
	BOOL _shouldDeleteOnDeallocation;
	NSURL* _url;

}

@property (retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (assign) BOOL mustStopAccessingURL;                    //@synthesize mustStopAccessingURL=_mustStopAccessingURL - In the implementation block
@property (assign) BOOL shouldDeleteOnDeallocation;              //@synthesize shouldDeleteOnDeallocation=_shouldDeleteOnDeallocation - In the implementation block
+(id)referenceWithURL:(id)arg1 ;
+(id)referenceWithDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)getFileSize:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationWithError:(id*)arg1 ;
-(BOOL)mustStopAccessingURL;
-(void)setMustStopAccessingURL:(BOOL)arg1 ;
-(BOOL)shouldDeleteOnDeallocation;
-(void)setShouldDeleteOnDeallocation:(BOOL)arg1 ;
@end

