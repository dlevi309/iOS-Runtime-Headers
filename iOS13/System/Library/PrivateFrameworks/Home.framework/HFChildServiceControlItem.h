/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>

@class HMService, HFChildServiceFilter;

@interface HFChildServiceControlItem : HFControlItem {

	HMService* _parentService;
	HFChildServiceFilter* _childServiceFilter;

}

@property (nonatomic,readonly) HMService * parentService;                              //@synthesize parentService=_parentService - In the implementation block
@property (nonatomic,readonly) HFChildServiceFilter * childServiceFilter;              //@synthesize childServiceFilter=_childServiceFilter - In the implementation block
+(Class)valueClass;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(BOOL)supportsItemRepresentingServices:(id)arg1 ;
-(id)initWithBaseValueSource:(id)arg1 parentService:(id)arg2 childServiceFilter:(id)arg3 displayResults:(id)arg4 ;
-(id)normalizedValueForValue:(id)arg1 ;
-(HMService *)parentService;
-(HFChildServiceFilter *)childServiceFilter;
@end

