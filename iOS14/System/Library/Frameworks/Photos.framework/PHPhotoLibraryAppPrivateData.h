/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PLAppPrivateData, PHPhotoLibrary;

@interface PHPhotoLibraryAppPrivateData : NSObject {

	PLAppPrivateData* _impl;
	PHPhotoLibrary* _photoLibrary;

}

@property (retain) PLAppPrivateData * impl;                    //@synthesize impl=_impl - In the implementation block
@property (__weak) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setImpl:(PLAppPrivateData *)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)debugDescription;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)initWithLibrary:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)_handleWriteException:(id)arg1 ;
-(void)invalidate;
-(PLAppPrivateData *)impl;
@end

