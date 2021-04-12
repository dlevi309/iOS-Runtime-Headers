/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <CoreData/NSCoreDataCoreSpotlightDelegate.h>

@interface ICCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate {

	BOOL _isCheckingObjectConsistency;
	BOOL _shouldPerformConsistencyCheck;
	unsigned long long _indexingPriority;

}

@property (assign,nonatomic) BOOL isCheckingObjectConsistency;                  //@synthesize isCheckingObjectConsistency=_isCheckingObjectConsistency - In the implementation block
@property (nonatomic,readonly) BOOL shouldPerformConsistencyCheck;              //@synthesize shouldPerformConsistencyCheck=_shouldPerformConsistencyCheck - In the implementation block
@property (assign,nonatomic) unsigned long long indexingPriority;               //@synthesize indexingPriority=_indexingPriority - In the implementation block
-(unsigned long long)indexingPriority;
-(id)bundleIdentifier;
-(id)attributeSetForObject:(id)arg1 ;
-(void)startSpotlightIndexing;
-(void)stopSpotlightIndexing;
-(id)indexName;
-(id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2 indexingPriority:(unsigned long long)arg3 ;
-(BOOL)shouldIndexableObjectExistInIndexing:(id)arg1 ;
-(void)setIndexingPriority:(unsigned long long)arg1 ;
-(BOOL)isCheckingObjectConsistency;
-(void)setIsCheckingObjectConsistency:(BOOL)arg1 ;
-(BOOL)shouldPerformConsistencyCheck;
-(void)dealloc;
@end

