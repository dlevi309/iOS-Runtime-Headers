/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAEquatable.h>

@protocol HFAggregatedCharacteristicValueSource;
@class NSString;

@interface HFCharacteristicStateItem : HFItem <NAEquatable> {

	NSString* _characteristicType;
	id<HFAggregatedCharacteristicValueSource> _valueSource;
	/*^block*/id _resultsProvider;

}

@property (nonatomic,copy,readonly) id resultsProvider;                                            //@synthesize resultsProvider=_resultsProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * characteristicType;                                 //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,readonly) id<HFAggregatedCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)characteristicType;
-(id<HFAggregatedCharacteristicValueSource>)valueSource;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithCharacteristicType:(id)arg1 valueSource:(id)arg2 resultsProvider:(/*^block*/id)arg3 ;
-(id)resultsProvider;
@end

