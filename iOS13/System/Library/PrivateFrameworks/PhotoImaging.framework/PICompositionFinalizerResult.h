/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@class NUComposition;

@interface PICompositionFinalizerResult : NSObject {

	long long _disposition;
	NUComposition* _composition;

}

@property (readonly) long long disposition;                         //@synthesize disposition=_disposition - In the implementation block
@property (copy,readonly) NUComposition * composition;              //@synthesize composition=_composition - In the implementation block
-(long long)disposition;
-(NUComposition *)composition;
-(id)initWithDisposition:(long long)arg1 composition:(id)arg2 ;
@end

