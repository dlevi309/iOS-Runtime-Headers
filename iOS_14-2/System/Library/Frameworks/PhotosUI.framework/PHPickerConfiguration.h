/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHPickerFilter, PHPhotoLibrary;

@interface PHPickerConfiguration : NSObject <NSCopying> {

	long long _preferredAssetRepresentationMode;
	long long _selectionLimit;
	PHPickerFilter* _filter;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _resultOptions;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                         //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) unsigned long long resultOptions;                      //@synthesize resultOptions=_resultOptions - In the implementation block
@property (assign,nonatomic) long long preferredAssetRepresentationMode;              //@synthesize preferredAssetRepresentationMode=_preferredAssetRepresentationMode - In the implementation block
@property (assign,nonatomic) long long selectionLimit;                                //@synthesize selectionLimit=_selectionLimit - In the implementation block
@property (nonatomic,copy) PHPickerFilter * filter;                                   //@synthesize filter=_filter - In the implementation block
-(void)setFilter:(PHPickerFilter *)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(unsigned long long)resultOptions;
-(PHPickerFilter *)filter;
-(long long)preferredAssetRepresentationMode;
-(long long)selectionLimit;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(unsigned long long)hash;
-(id)initWithPhotoLibrary:(id)arg1 resultOptions:(unsigned long long)arg2 ;
-(void)setPreferredAssetRepresentationMode:(long long)arg1 ;
-(void)setSelectionLimit:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

