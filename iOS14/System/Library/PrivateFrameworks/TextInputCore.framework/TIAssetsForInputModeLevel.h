/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputModeLevel : NSObject {

	NSMutableDictionary* _assetsByAttributes;
	long long _numberOfAssertions;
	NSString* _inputModeLevel;

}

@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
-(id)recursiveDescription;
-(BOOL)purgeAsset:(id)arg1 ;
-(BOOL)hasAssertions;
-(void)addAsset:(id)arg1 ;
-(void)gatherStatistics:(id)arg1 ;
-(BOOL)isEmpty;
-(id)purgeableAssets;
-(id)assetContentItemsMatching:(id)arg1 ;
-(void)addAssertion;
-(void)removeAssertion;
-(NSString *)inputModeLevel;
-(id)initWithInputModeLevel:(id)arg1 ;
-(id)assetVersionsForAttributes:(id)arg1 ;
-(void)removeEmptyAssets;
@end

