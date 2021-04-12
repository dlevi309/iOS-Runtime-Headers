/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


@class PHMediaFormatConversionRequest;

@interface PHMediaFormatConversionJob : NSObject {

	PHMediaFormatConversionRequest* _conversionRequest;
	/*^block*/id _completionHandler;

}

@property (retain) PHMediaFormatConversionRequest * conversionRequest;              //@synthesize conversionRequest=_conversionRequest - In the implementation block
@property (copy) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)description;
-(PHMediaFormatConversionRequest *)conversionRequest;
-(void)setConversionRequest:(PHMediaFormatConversionRequest *)arg1 ;
@end

