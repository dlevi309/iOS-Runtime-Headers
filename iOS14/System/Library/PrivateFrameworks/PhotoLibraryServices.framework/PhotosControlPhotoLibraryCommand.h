/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PhotosControlCommand.h>

@protocol OS_dispatch_group;
@class NSManagedObjectContext, PHPhotoLibrary, NSURL, NSObject, PLPhotosCTL;

@interface PhotosControlPhotoLibraryCommand : PhotosControlCommand {

	NSManagedObjectContext* _moc;
	PHPhotoLibrary* _photoLibrary;
	NSURL* _libraryURL;
	NSObject*<OS_dispatch_group> _group;
	PLPhotosCTL* _ctl;
	NSRange _argumentRangeForRunOnManagedObjects;

}

@property (readonly) NSURL * libraryURL;              //@synthesize libraryURL=_libraryURL - In the implementation block
+(id)usage;
+(option*)longopts;
+(const char*)optstring;
+(id)usagesummary;
+(id)libraryUsage;
+(id)libraryUsagesummary;
+(option*)libraryLongopts;
+(const char*)libraryOptstring;
-(NSURL *)libraryURL;
-(id)managedObjectContext;
-(id)photoLibrary;
-(int)save;
-(id)photosCtl;
-(id)initWithArgc:(int)arg1 argv:(char**)arg2 options:(unsigned char)arg3 ctl:(id)arg4 ;
-(void)enterGroup;
-(void)leaveGroup;
-(void)waitForGroup;
-(void)configureWithAlternateURLToLibraryDatabase:(id)arg1 ;
-(BOOL)argument:(id)arg1 isValidDouble:(double*)arg2 ;
-(void)setArgumentRangeForRunOnManagedObjects:(NSRange)arg1 ;
-(BOOL)processOption:(int)arg1 arg:(id)arg2 ;
-(int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 block:(/*^block*/id)arg3 ;
-(int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(BOOL)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 block:(/*^block*/id)arg6 ;
-(int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(BOOL)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 relationshipKeyPathsForPrefetching:(id)arg6 block:(/*^block*/id)arg7 ;
-(id)jsonDictionaryFromManagedObject:(id)arg1 maxDepth:(unsigned long long)arg2 ;
-(int)runOnAssetArgumentsAllowAll:(BOOL)arg1 additionalPredicate:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)_jsonDictionaryFromManagedObject:(id)arg1 allPreviousObjects:(id)arg2 currentDepth:(unsigned long long)arg3 maxDepth:(unsigned long long)arg4 ;
-(id)jsonDictionaryFromError:(id)arg1 ;
-(id)processBooleanOptionArg:(id)arg1 ;
-(id)plPhotoLibrary;
-(BOOL)libraryProcessOption:(char)arg1 arg:(id)arg2 ;
-(int)runOnPhotoKitAssetArgumentsAllowAll:(BOOL)arg1 propertySets:(id)arg2 additionalPredicate:(id)arg3 block:(/*^block*/id)arg4 ;
@end

