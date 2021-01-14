/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class MDLAsset, NSMutableArray, NSArray;

@interface _CUIThemeModelAssetRendition : CUIThemeRendition {

	MDLAsset* _asset;
	NSMutableArray* _meshKeys;

}

@property (readonly) NSArray * meshKeys; 
-(unsigned long long)writeToData:(id)arg1 ;
-(id)initForArchiving:(id)arg1 withMeshRenditionKeys:(id)arg2 ;
-(id)modelAsset;
-(NSArray *)meshKeys;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)dealloc;
@end

