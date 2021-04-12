/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {

	PHFetchOptions* _fetchOptions;

}
+(id)subpredicatesForFetchOptions:(id)arg1 ;
-(id)subpredicates;
-(id)initWithFetchOptions:(id)arg1 ;
-(id)_verifiedPredicate;
-(id)_verifiedVisiblePredicate;
-(id)_notVerifiedPredicate;
-(id)_faceCountPredicateWithMinimum:(unsigned long long)arg1 ;
-(id)_notHiddenTypePredicate;
-(id)personContextNonePredicates;
-(id)personContextPeopleHomePredicate;
-(id)personContextAdditionalPredicate;
-(id)personContextDetailPredicate;
-(id)personContextOneUpPredicate;
@end

