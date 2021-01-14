/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {

	PHFetchOptions* _fetchOptions;

}
+(id)subpredicatesForFetchOptions:(id)arg1 ;
-(id)subpredicates;
-(id)_verifiedVisiblePredicate;
-(id)_faceCountPredicateWithMinimum:(unsigned long long)arg1 ;
-(id)_notVerifiedPredicate;
-(id)initWithFetchOptions:(id)arg1 ;
-(id)_notHiddenTypePredicate;
-(id)personContextOneUpPredicate;
-(id)_verifiedPredicate;
-(id)personContextAdditionalPredicate;
-(id)personContextPeopleHomePredicate;
-(id)personContextNonePredicates;
-(id)personContextDetailPredicate;
@end

