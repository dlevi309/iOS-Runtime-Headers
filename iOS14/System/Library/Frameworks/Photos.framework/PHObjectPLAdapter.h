/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHFetchDictionaryAccessing.h>
#import <libobjc.A.dylib/PHMutableFetchDictionaryAccessing.h>

@class PHPhotoLibrary, PLManagedObject, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing> {

	PHPhotoLibrary* _photoLibrary;
	PLManagedObject* _backingManagedObject;
	NSMutableOrderedSet* _ignoredKeys;
	NSMutableDictionary* _modifiedKeyValues;

}

@property (nonatomic,readonly) PLManagedObject * backingManagedObject;              //@synthesize backingManagedObject=_backingManagedObject - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * ignoredKeys;                     //@synthesize ignoredKeys=_ignoredKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifiedKeyValues;               //@synthesize modifiedKeyValues=_modifiedKeyValues - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)objectWithPropertySets:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)mutableAccessingCopy;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(PLManagedObject *)backingManagedObject;
-(id)initWithPLManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(NSMutableOrderedSet *)ignoredKeys;
-(void)setIgnoredKeys:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)modifiedKeyValues;
-(void)setModifiedKeyValues:(NSMutableDictionary *)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
