/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/

#import <AssetsLibrary/ALAssetsGroup.h>

@protocol PLAssetContainerList;
@interface ALAssetsGroupList : ALAssetsGroup {

	id<PLAssetContainerList> _containerList;

}

@property (nonatomic,retain,readonly) id<PLAssetContainerList> containerList;              //@synthesize containerList=_containerList - In the implementation block
-(id)valueForProperty:(id)arg1 ;
-(void)dealloc;
-(id)initWithContainerList:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id<PLAssetContainerList>)containerList;
@end

