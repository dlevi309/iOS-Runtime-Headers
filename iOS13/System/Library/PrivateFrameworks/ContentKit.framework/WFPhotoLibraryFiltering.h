/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@interface WFPhotoLibraryFiltering : NSObject
+(void)performCustomFilteringUsingContentPredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2 forQuery:(id)arg3 withInput:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
+(void)performFallbackFilteringWithItems:(id)arg1 withContentPredicates:(id)arg2 compoundPredicateType:(unsigned long long)arg3 originalQuery:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
+(void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 compoundPredicate:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
+(void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

