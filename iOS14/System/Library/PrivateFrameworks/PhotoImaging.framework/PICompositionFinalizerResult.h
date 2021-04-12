/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@class NUComposition;

@interface PICompositionFinalizerResult : NSObject {

	long long _disposition;
	NUComposition* _composition;

}

@property (readonly) long long disposition;                         //@synthesize disposition=_disposition - In the implementation block
@property (copy,readonly) NUComposition * composition;              //@synthesize composition=_composition - In the implementation block
-(NUComposition *)composition;
-(long long)disposition;
-(id)initWithDisposition:(long long)arg1 composition:(id)arg2 ;
@end

