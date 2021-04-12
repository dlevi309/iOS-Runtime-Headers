/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject {

	NSMutableDictionary* _photoLibrariesByPath;

}

@property (retain) NSMutableDictionary * photoLibrariesByPath;              //@synthesize photoLibrariesByPath=_photoLibrariesByPath - In the implementation block
@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)saveToPersistentStorage;
-(void)addPhotoLibraryAtURL:(id)arg1 ;
-(void)removePhotoLibraryAtURL:(id)arg1 ;
-(void)removeAllPhotoLibraries;
-(void)enumeratePhotoLibrariesWithBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)photoLibrariesByPath;
-(void)setPhotoLibrariesByPath:(NSMutableDictionary *)arg1 ;
@end

