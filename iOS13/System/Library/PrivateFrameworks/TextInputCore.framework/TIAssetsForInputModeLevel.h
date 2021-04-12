/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject {

	NSMutableDictionary* _assetsByAttributes;
	long long _numberOfAssertions;
	NSString* _inputModeLevel;

}

@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
-(BOOL)isEmpty;
-(id)recursiveDescription;
-(void)addAsset:(id)arg1 ;
-(void)addAssertion;
-(void)removeAssertion;
-(BOOL)purgeAsset:(id)arg1 ;
-(id)assetContentItemsMatching:(id)arg1 ;
-(BOOL)hasAssertions;
-(void)gatherStatistics:(id)arg1 ;
-(id)purgeableAssets;
-(NSString *)inputModeLevel;
-(id)initWithInputModeLevel:(id)arg1 ;
-(id)assetVersionsForAttributes:(id)arg1 ;
-(void)removeEmptyAssets;
@end

