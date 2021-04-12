/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/

#import <AssetsLibrary/ALAssetsGroup.h>

@protocol PLAssetContainerList;
@interface ALAssetsGroupList : ALAssetsGroup {

	id<PLAssetContainerList> _containerList;

}

@property (nonatomic,retain,readonly) id<PLAssetContainerList> containerList;              //@synthesize containerList=_containerList - In the implementation block
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id<PLAssetContainerList>)containerList;
@end

