/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDataSection.h>

@class PHFetchResult;

@interface PXFetchResultDataSection : PXDataSection {

	PHFetchResult* _fetchResult;

}

@property (nonatomic,readonly) PHFetchResult * fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
-(PHFetchResult *)fetchResult;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(long long)count;
-(id)initWithFetchResult:(id)arg1 ;
-(id)objectAtIndex:(long long)arg1 ;
-(id)initWithOutlineObject:(id)arg1 ;
@end

