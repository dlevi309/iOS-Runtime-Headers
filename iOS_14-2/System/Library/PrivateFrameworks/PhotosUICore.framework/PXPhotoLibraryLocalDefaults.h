/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@class PHPhotoLibraryAppPrivateData;

@interface PXPhotoLibraryLocalDefaults : PXObservable {

	PHPhotoLibraryAppPrivateData* _appPrivateData;

}
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_notifyObserversDidChangeValueForKey:(id)arg1 ;
-(void)setIdentifiers:(id)arg1 forKey:(id)arg2 ;
-(id)identifiersForKey:(id)arg1 ;
-(void)addIdentifier:(id)arg1 forKey:(id)arg2 ;
-(void)removeIdentifier:(id)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
@end

