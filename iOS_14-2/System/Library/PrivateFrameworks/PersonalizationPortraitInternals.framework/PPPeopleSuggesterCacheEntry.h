/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSArray;

@interface PPPeopleSuggesterCacheEntry : NSObject {

	double _cacheTimeSecondsSince1970;
	NSArray* _identifiers;

}

@property (assign,nonatomic) double cacheTimeSecondsSince1970;              //@synthesize cacheTimeSecondsSince1970=_cacheTimeSecondsSince1970 - In the implementation block
@property (nonatomic,retain) NSArray * identifiers;                         //@synthesize identifiers=_identifiers - In the implementation block
-(NSArray *)identifiers;
-(double)cacheTimeSecondsSince1970;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(void)setCacheTimeSecondsSince1970:(double)arg1 ;
@end

