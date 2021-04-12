/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHValidator.h>

@class PLPhotoLibrary;

@interface _PHPhotoLibraryValidator : PHValidator {

	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,__weak,readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(BOOL)isValidImagePathExtension:(id)arg1 ;
-(BOOL)isValidVideoPathExtension:(id)arg1 ;
@end

