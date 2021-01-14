/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSDiffableDataSourceSectionSnapshot, NSOrderedCollectionDifference;

@interface NSDiffableDataSourceSectionTransaction : NSObject {

	id _sectionIdentifier;
	NSDiffableDataSourceSectionSnapshot* _initialSnapshot;
	NSDiffableDataSourceSectionSnapshot* _finalSnapshot;
	NSOrderedCollectionDifference* _difference;

}

@property (nonatomic,readonly) id sectionIdentifier;                                               //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSectionSnapshot * initialSnapshot;              //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,readonly) NSDiffableDataSourceSectionSnapshot * finalSnapshot;                //@synthesize finalSnapshot=_finalSnapshot - In the implementation block
@property (nonatomic,readonly) NSOrderedCollectionDifference * difference;                         //@synthesize difference=_difference - In the implementation block
-(NSDiffableDataSourceSectionSnapshot *)initialSnapshot;
-(id)initWithSectionIdentifier:(id)arg1 initialSnapshot:(id)arg2 finalSnapshot:(id)arg3 difference:(id)arg4 ;
-(id)sectionIdentifier;
-(id)_spiCopy;
-(id)description;
-(NSOrderedCollectionDifference *)difference;
-(NSDiffableDataSourceSectionSnapshot *)finalSnapshot;
-(BOOL)isEqual:(id)arg1 ;
@end

