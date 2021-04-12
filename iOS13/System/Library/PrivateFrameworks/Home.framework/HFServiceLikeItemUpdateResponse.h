/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFCharacteristicValueDisplayMetadata, HFCharacteristicBatchReadResponse, NSDictionary;

@interface HFServiceLikeItemUpdateResponse : NSObject {

	HFCharacteristicValueDisplayMetadata* _displayMetadata;
	HFCharacteristicBatchReadResponse* _readResponse;
	NSDictionary* _standardResults;

}

@property (nonatomic,readonly) HFCharacteristicValueDisplayMetadata * displayMetadata;              //@synthesize displayMetadata=_displayMetadata - In the implementation block
@property (nonatomic,readonly) HFCharacteristicBatchReadResponse * readResponse;                    //@synthesize readResponse=_readResponse - In the implementation block
@property (nonatomic,readonly) NSDictionary * standardResults;                                      //@synthesize standardResults=_standardResults - In the implementation block
-(NSDictionary *)standardResults;
-(HFCharacteristicBatchReadResponse *)readResponse;
-(HFCharacteristicValueDisplayMetadata *)displayMetadata;
-(id)initWithDisplayMetadata:(id)arg1 readResponse:(id)arg2 standardResults:(id)arg3 ;
@end

