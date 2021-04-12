/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)getPathHash:(unsigned long long*)arg1 lastPathComponent:(id*)arg2 forDictionaryRepresentation:(id)arg3 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)getPathHash:(unsigned long long*)arg1 lastPathComponent:(id*)arg2 ;
-(BOOL)getFileSize:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationWithError:(id*)arg1 ;
-(BOOL)mustStopAccessingURL;
-(void)setMustStopAccessingURL:(BOOL)arg1 ;
-(BOOL)shouldDeleteOnDeallocation;
-(void)setShouldDeleteOnDeallocation:(BOOL)arg1 ;
@end

