/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSString, NSArray;

@interface CAMBurstAnalysisResult : NSObject {

	NSString* _identifier;
	NSArray* _allAssetIdentifiers;
	NSArray* _goodAssetIdentifiers;
	NSString* _bestAssetIdentifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allAssetIdentifiers;               //@synthesize allAssetIdentifiers=_allAssetIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * goodAssetIdentifiers;              //@synthesize goodAssetIdentifiers=_goodAssetIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * bestAssetIdentifier;              //@synthesize bestAssetIdentifier=_bestAssetIdentifier - In the implementation block
-(id)init;
-(id)description;
-(NSString *)identifier;
-(NSArray *)allAssetIdentifiers;
-(NSArray *)goodAssetIdentifiers;
-(NSString *)bestAssetIdentifier;
-(id)initWithIdentifier:(id)arg1 allAssetIdentifiers:(id)arg2 goodAssetIdentifiers:(id)arg3 bestAssetIdentifier:(id)arg4 ;
@end

