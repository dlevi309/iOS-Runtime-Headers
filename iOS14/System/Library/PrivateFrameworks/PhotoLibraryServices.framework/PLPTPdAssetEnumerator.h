/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLPTPConversionSupport;
@class PLManagedObjectContext, NSArray;

@interface PLPTPdAssetEnumerator : NSObject {

	PLManagedObjectContext* _managedObjectContext;
	NSArray* _assetObjectIDs;
	id<PLPTPConversionSupport> _conversionSupport;

}
+(id)enumeratorWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3 ;
-(id)initWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 conversionSupport:(id)arg3 ;
-(BOOL)enumerateAssetsWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
@end

