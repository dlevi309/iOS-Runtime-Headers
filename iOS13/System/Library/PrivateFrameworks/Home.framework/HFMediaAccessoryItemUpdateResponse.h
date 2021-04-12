/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFMediaAccessoryItemUpdateResponse : NSObject {

	HFCharacteristicValueDisplayMetadata* _displayMetadata;
	NSDictionary* _standardResults;

}

@property (nonatomic,readonly) HFCharacteristicValueDisplayMetadata * displayMetadata;              //@synthesize displayMetadata=_displayMetadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * standardResults;                                      //@synthesize standardResults=_standardResults - In the implementation block
-(NSDictionary *)standardResults;
-(HFCharacteristicValueDisplayMetadata *)displayMetadata;
-(id)initWithDisplayMetadata:(id)arg1 standardResults:(id)arg2 ;
@end

