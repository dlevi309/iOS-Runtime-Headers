/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKObject.h>

@class NSURL, USKNode;

@interface USKScene : USKObject {

	TfRefPtr<pxrInternal_v0_19__pxrReserved__usdkit__::UsdStage>* _usdStage;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) USKNode * rootNode; 
+(id)newSceneWithURL:(id)arg1 ;
+(id)newSceneWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(USKNode *)rootNode;
-(void)save;
-(id)metadata;
-(id)objectAtPath:(id)arg1 ;
-(id)newNodeAtPath:(id)arg1 type:(id)arg2 ;
-(BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3 ;
-(void)saveAndCreateUSDZPackageWithURL:(id)arg1 ;
-(id)initSceneFromURL:(id)arg1 error:(id*)arg2 ;
-(id)nodeIterator;
-(id)metadataWithKey:(id)arg1 ;
-(id)customMetadataWithKey:(id)arg1 ;
-(id)nodeAtPath:(id)arg1 ;
-(TfRefPtr<pxrInternal_v0_19__pxrReserved__usdkit__::UsdStage>*)usdStage;
-(id)initWithUsdStage:(TfRefPtr<pxrInternal_v0_19__pxrReserved__usdkit__::UsdStage>*)arg1 fileURL:(id)arg2 ;
-(id)newNodeAtPath:(id)arg1 type:(id)arg2 specifier:(id)arg3 ;
-(void)addSubLayerWithPath:(id)arg1 offset:(id)arg2 ;
-(id)initSceneFromURL:(id)arg1 ;
-(void)saveAndCreateARKitUSDZPackageWithURL:(id)arg1 ;
-(id)propertyAtPath:(id)arg1 ;
-(void)addSubLayerWithPath:(id)arg1 ;
-(id)subLayerPaths;
-(id)subLayerOffsets;
-(BOOL)setCustomMetadata:(id)arg1 value:(id)arg2 ;
-(id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 ;
-(id)loadedNodeIterator;
-(void)dumpUSDA;
@end

