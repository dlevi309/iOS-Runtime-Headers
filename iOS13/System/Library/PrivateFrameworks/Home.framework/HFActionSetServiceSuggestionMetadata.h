/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString, NSArray;

@interface HFActionSetServiceSuggestionMetadata : NSObject {

	NSString* _serviceType;
	NSString* _primaryCharacteristicType;
	NSArray* _secondaryCharacteristicTypes;

}

@property (nonatomic,readonly) NSString * serviceType;                              //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * primaryCharacteristicType;                //@synthesize primaryCharacteristicType=_primaryCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryCharacteristicTypes;              //@synthesize secondaryCharacteristicTypes=_secondaryCharacteristicTypes - In the implementation block
+(id)metadataForServiceType:(id)arg1 ;
-(NSString *)serviceType;
-(NSString *)primaryCharacteristicType;
-(NSArray *)secondaryCharacteristicTypes;
-(id)initWithServiceType:(id)arg1 primaryCharacteristicType:(id)arg2 secondaryCharacteristicTypes:(id)arg3 ;
@end

