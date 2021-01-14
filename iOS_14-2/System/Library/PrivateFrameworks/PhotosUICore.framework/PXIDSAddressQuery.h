/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface PXIDSAddressQuery : NSObject {

	unsigned long long _destinationsCount;
	NSMutableSet* _mutableRemainingDestinations;
	NSMutableDictionary* _mutableStashedResults;
	unsigned long long _resultsCount;
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy,readonly) id resultHandler;                           //@synthesize resultHandler=_resultHandler - In the implementation block
@property (nonatomic,copy,readonly) NSSet * remainingDestinations; 
@property (nonatomic,readonly) BOOL isComplete; 
-(id)resultHandler;
-(BOOL)isComplete;
-(id)initWithDestinations:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)stashDestination:(id)arg1 withResult:(BOOL)arg2 ;
-(id)popStashedResults;
-(NSSet *)remainingDestinations;
@end

