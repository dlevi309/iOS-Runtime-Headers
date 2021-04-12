/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFControlItem.h>

@class NSString;

@interface HFDictionaryValueControlItem : HFControlItem {

	NSString* _characteristicType;

}

@property (nonatomic,copy,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
+(Class)valueClass;
+(id)defaultMainTextColorForCharacteristicType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)characteristicType;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(void)getStatus:(out id*)arg1 mainTextColor:(out id*)arg2 supplementaryDescription:(out id*)arg3 withBatchReadResponse:(id)arg4 ;
@end

