/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class NSMutableString;

@interface WFImgArrayCache : NSObject {

	NSMutableString* imageAlternativeDescriptions;
	long long numberOfUnknownSizedImages;
	long long numberOfKnownImagePixels;

}
+(id)imgArrayCacheWithArray:(id)arg1 ;
-(void)dealloc;
-(id)initWithArray:(id)arg1 ;
-(long long)numberOfKnownImagePixels;
-(id)imageAlternativeDescriptions;
-(long long)numberOfUnknownSizedImages;
@end

