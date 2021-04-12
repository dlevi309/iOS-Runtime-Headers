/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFCharacteristicActionSuggestionVending.h>

@class NSString;

@interface HFPrimaryStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending> {

	NSString* _characteristicType;
	id _normalStateValue;
	unsigned long long _bucketingPolicy;

}

@property (nonatomic,readonly) id normalStateValue;                             //@synthesize normalStateValue=_normalStateValue - In the implementation block
@property (nonatomic,readonly) unsigned long long bucketingPolicy;              //@synthesize bucketingPolicy=_bucketingPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
-(NSString *)characteristicType;
-(id)initWithCharacteristicType:(id)arg1 normalStateValue:(id)arg2 ;
-(id)initWithCharacteristicType:(id)arg1 normalStateValue:(id)arg2 bucketingPolicy:(unsigned long long)arg3 ;
-(id)_bucketingValueForAction:(id)arg1 ;
-(id)suggestedActionForCharacteristic:(id)arg1 candidateActions:(id)arg2 ;
-(id)normalStateValue;
-(unsigned long long)bucketingPolicy;
@end

