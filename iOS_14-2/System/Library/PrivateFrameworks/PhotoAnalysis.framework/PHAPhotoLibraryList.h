/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject {

	NSMutableDictionary* _photoLibrariesByPath;

}

@property (retain) NSMutableDictionary * photoLibrariesByPath;              //@synthesize photoLibrariesByPath=_photoLibrariesByPath - In the implementation block
@property (readonly) unsigned long long count; 
-(id)init;
-(void)removeAllPhotoLibraries;
-(unsigned long long)count;
-(void)addPhotoLibraryAtURL:(id)arg1 ;
-(void)enumeratePhotoLibrariesWithBlock:(/*^block*/id)arg1 ;
-(void)setPhotoLibrariesByPath:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)photoLibrariesByPath;
-(void)removePhotoLibraryAtURL:(id)arg1 ;
-(void)saveToPersistentStorage;
@end

