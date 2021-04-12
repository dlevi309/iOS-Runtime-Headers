/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSArray;

@interface AMSRatingsProviderResult : NSObject {

	NSArray* _ratingsStoreFronts;

}

@property (nonatomic,readonly) NSArray * ratingsStoreFronts;              //@synthesize ratingsStoreFronts=_ratingsStoreFronts - In the implementation block
-(NSArray *)ratingsStoreFronts;
-(id)initWithDictionaries:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)_mapRatingsDictionaries:(id)arg1 withMediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)initWithURLResult:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
@end

