/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol PLPTPConversionSupport;
@class PLManagedObjectContext, NSArray;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration> {

	PLManagedObjectContext* _managedObjectContext;
	NSArray* _assetObjectIDs;
	id<PLPTPConversionSupport> _conversionSupport;

}
+(id)enumeratorWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL23*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateDictionariesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3 ;
-(unsigned long long)getPTPdInfo:(id*)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3 ;
-(void)enumerateDictionariesWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)enumerateAssetsWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
@end

