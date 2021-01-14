/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLiCPLTransferProgress : NSObject {

	unsigned long long _notUploadedPhotosCount;
	unsigned long long _notUploadedVideosCount;
	unsigned long long _notUploadedItemsCount;

}

@property (assign,nonatomic) unsigned long long notUploadedPhotosCount;              //@synthesize notUploadedPhotosCount=_notUploadedPhotosCount - In the implementation block
@property (assign,nonatomic) unsigned long long notUploadedVideosCount;              //@synthesize notUploadedVideosCount=_notUploadedVideosCount - In the implementation block
@property (assign,nonatomic) unsigned long long notUploadedItemsCount;               //@synthesize notUploadedItemsCount=_notUploadedItemsCount - In the implementation block
-(unsigned long long)notUploadedPhotosCount;
-(void)setNotUploadedPhotosCount:(unsigned long long)arg1 ;
-(unsigned long long)notUploadedVideosCount;
-(void)setNotUploadedVideosCount:(unsigned long long)arg1 ;
-(unsigned long long)notUploadedItemsCount;
-(void)setNotUploadedItemsCount:(unsigned long long)arg1 ;
-(id)description;
@end

