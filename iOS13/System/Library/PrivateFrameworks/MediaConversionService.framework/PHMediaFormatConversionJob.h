/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


@class PHMediaFormatConversionRequest;

@interface PHMediaFormatConversionJob : NSObject {

	PHMediaFormatConversionRequest* _conversionRequest;
	/*^block*/id _completionHandler;

}

@property (retain) PHMediaFormatConversionRequest * conversionRequest;              //@synthesize conversionRequest=_conversionRequest - In the implementation block
@property (copy) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(PHMediaFormatConversionRequest *)conversionRequest;
-(void)setConversionRequest:(PHMediaFormatConversionRequest *)arg1 ;
@end

