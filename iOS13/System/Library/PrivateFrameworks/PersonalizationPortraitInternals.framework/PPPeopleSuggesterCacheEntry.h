/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setIdentifiers:(NSArray *)arg1 ;
-(double)cacheTimeSecondsSince1970;
-(void)setCacheTimeSecondsSince1970:(double)arg1 ;
@end

