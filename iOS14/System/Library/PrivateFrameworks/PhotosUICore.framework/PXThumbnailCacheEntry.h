/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSManagedObjectID, NSData;

@interface PXThumbnailCacheEntry : NSObject {

	NSManagedObjectID* _objectID;
	NSData* _data;
	PHAssetResourceTableDataSpecification _dataSpec;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID;                                //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) PHAssetResourceTableDataSpecification dataSpec;              //@synthesize dataSpec=_dataSpec - In the implementation block
@property (nonatomic,readonly) NSData * data;                                               //@synthesize data=_data - In the implementation block
-(NSManagedObjectID *)objectID;
-(PHAssetResourceTableDataSpecification)dataSpec;
-(NSData *)data;
-(id)initWithObjectID:(id)arg1 dataSpec:(const PHAssetResourceTableDataSpecification*)arg2 data:(id)arg3 ;
@end

