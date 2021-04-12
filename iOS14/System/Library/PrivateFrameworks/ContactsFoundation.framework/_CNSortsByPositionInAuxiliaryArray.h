/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSDictionary, NSArray;

@interface _CNSortsByPositionInAuxiliaryArray : NSObject {

	NSDictionary* _ranks;
	NSArray* _auxiliaryValues;
	/*^block*/id _transform;

}

@property (nonatomic,copy,readonly) id transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * ranks;                   //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * auxiliaryValues;              //@synthesize auxiliaryValues=_auxiliaryValues - In the implementation block
+(/*^block*/id)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(/*^block*/id)arg2 ;
-(id)transform;
-(/*^block*/id)comparator;
-(NSArray *)auxiliaryValues;
-(void)prepareRankingIndex;
-(id)initWithAuxiliaryValues:(id)arg1 transform:(/*^block*/id)arg2 ;
-(id)rankForObject:(id)arg1 ;
-(NSDictionary *)ranks;
@end

