/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFCharacteristicActionSuggestionVending.h>

@class NSString;

@interface HFIncrementalStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending> {

	NSString* _characteristicType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
-(NSString *)characteristicType;
-(id)initWithCharacteristicType:(id)arg1 ;
-(id)suggestedActionForCharacteristic:(id)arg1 candidateActions:(id)arg2 ;
@end

