/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLScopeChange.h>

@class NSString, NSDate, NSData;

@interface CPLMomentShareScopeChange : CPLScopeChange {

	NSString* _title;
	NSDate* _creationDate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _expiryDate;
	long long _promisedAssetCount;
	long long _promisedPhotosCount;
	long long _promisedVideosCount;
	NSData* _thumbnailImageData;
	NSData* _previewImageData;
	NSString* _originatingScopeIdentifier;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSDate * expiryDate;                                //@synthesize expiryDate=_expiryDate - In the implementation block
@property (assign,nonatomic) long long promisedAssetCount;                     //@synthesize promisedAssetCount=_promisedAssetCount - In the implementation block
@property (assign,nonatomic) long long promisedPhotosCount;                    //@synthesize promisedPhotosCount=_promisedPhotosCount - In the implementation block
@property (assign,nonatomic) long long promisedVideosCount;                    //@synthesize promisedVideosCount=_promisedVideosCount - In the implementation block
@property (nonatomic,copy) NSData * thumbnailImageData;                        //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,copy) NSData * previewImageData;                          //@synthesize previewImageData=_previewImageData - In the implementation block
@property (nonatomic,copy) NSString * originatingScopeIdentifier;              //@synthesize originatingScopeIdentifier=_originatingScopeIdentifier - In the implementation block
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)originatingScopeIdentifier;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)setPromisedVideosCount:(long long)arg1 ;
-(void)setPromisedPhotosCount:(long long)arg1 ;
-(void)setPromisedAssetCount:(long long)arg1 ;
-(long long)promisedVideosCount;
-(long long)promisedPhotosCount;
-(long long)promisedAssetCount;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(NSData *)thumbnailImageData;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(id)momentShare;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(void)setMomentShare:(id)arg1 ;
-(NSString *)title;
-(void)udpateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(BOOL*)arg3 ;
-(void)setLibraryInfo:(id)arg1 ;
@end
