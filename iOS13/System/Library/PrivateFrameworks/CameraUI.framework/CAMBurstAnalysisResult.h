/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

