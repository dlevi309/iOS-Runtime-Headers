/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@protocol _DKKnowledgeQuerying;
@interface ARPHomeControlCorrelationUtilities : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id)homeKitEventsWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(id)homeKitAccessoriesWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 limit:(long long)arg3 ;
-(id)homeKitScenesWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 limit:(long long)arg3 ;
-(BOOL)writeArchive:(id)arg1 toFilePath:(id)arg2 ;
-(id)firstHomeKitEventsWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 ;
@end

