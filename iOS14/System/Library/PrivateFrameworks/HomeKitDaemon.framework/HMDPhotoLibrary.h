/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol HMDPhotoLibraryChangeDelegate, OS_dispatch_queue;
@class PHPhotoLibrary, NSObject, PHFetchResult, NSSet, NSString;

@interface HMDPhotoLibrary : HMFObject <HMFLogging, PHPhotoLibraryChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	id<HMDPhotoLibraryChangeDelegate> _photoLibraryChangeDelegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	PHFetchResult* _suggestedPersonsFetchResult;

}

@property (readonly) PHPhotoLibrary * photoLibrary;                                           //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) PHFetchResult * suggestedPersonsFetchResult;                               //@synthesize suggestedPersonsFetchResult=_suggestedPersonsFetchResult - In the implementation block
@property (copy,readonly) NSSet * persons; 
@property (__weak) id<HMDPhotoLibraryChangeDelegate> photoLibraryChangeDelegate;              //@synthesize photoLibraryChangeDelegate=_photoLibraryChangeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)_phPersonWithUUID:(id)arg1 fromSuggestedPersonsFetchResult:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(PHPhotoLibrary *)photoLibrary;
-(NSSet *)persons;
-(void)releaseCachedResources;
-(void)photoLibraryDidChange:(id)arg1 ;
-(PHFetchResult *)suggestedPersonsFetchResult;
-(void)setSuggestedPersonsFetchResult:(PHFetchResult *)arg1 ;
-(id<HMDPhotoLibraryChangeDelegate>)photoLibraryChangeDelegate;
-(id)initWithWorkQueue:(id)arg1 ;
-(void)setPhotoLibraryChangeDelegate:(id<HMDPhotoLibraryChangeDelegate>)arg1 ;
-(void)fetchPersons;
-(id)fetchFaceCropDataByUUIDForPersonUUID:(id)arg1 ;
-(unsigned long long)numberOfFaceCropsForPersonWithUUID:(id)arg1 ;
-(id)faceCropFromFaceCropData:(id)arg1 ;
@end

