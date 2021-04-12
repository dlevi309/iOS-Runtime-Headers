/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)notUploadedPhotosCount;
-(void)setNotUploadedPhotosCount:(unsigned long long)arg1 ;
-(unsigned long long)notUploadedVideosCount;
-(void)setNotUploadedVideosCount:(unsigned long long)arg1 ;
-(unsigned long long)notUploadedItemsCount;
-(void)setNotUploadedItemsCount:(unsigned long long)arg1 ;
@end

