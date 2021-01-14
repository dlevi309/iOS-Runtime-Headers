/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFeedSectionInfo.h>

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {

	PLPhotoLibrary* _photoLibrary;
	long long _countOfItems;

}

@property (nonatomic,readonly) long long countOfItems;              //@synthesize countOfItems=_countOfItems - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)photoLibrary;
-(long long)numberOfItems;
-(long long)sectionType;
-(long long)countOfItems;
-(id)albumTitle;
-(id)captionForItemAtIndex:(long long)arg1 ;
-(id)date;
-(BOOL)isLoaded;
@end

