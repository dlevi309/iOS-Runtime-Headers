/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGGraphLocationOrArea;
@class PGGraphLocationCityNode, PGGraphBusinessNode, PGGraphPersonNode, PGGraphAddressNode, PGGraphNode;

@interface PGFoodieMemoryTitleGenerator : PGTitleGenerator {

	long long _type;
	PGGraphLocationCityNode* _cityNode;
	PGGraphBusinessNode* _businessNode;
	PGGraphPersonNode* _personNode;
	PGGraphAddressNode* _addressNode;
	PGGraphNode*<PGGraphLocationOrArea> _tripLocationNode;
	unsigned long long _tripTitleLocationType;

}
-(id)_typeString;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)_timeTitleForTripAndWeekend;
-(id)initWithMomentNodes:(id)arg1 cityNode:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 businessNode:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 personNode:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 addressNode:(id)arg2 ;
-(id)initWithMomentNodes:(id)arg1 tripLocationNode:(id)arg2 tripTitleLocationType:(unsigned long long)arg3 ;
@end

