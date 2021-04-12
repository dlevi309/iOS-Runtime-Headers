/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@class NSData;

@interface CNiOSABDependentPropertiesUpdateContext : NSObject {

	BOOL _hasPendingImageData;
	BOOL _hasPendingCropRect;
	BOOL _hasPendingThumbnailImageData;
	BOOL _hasPendingSyncImageData;
	NSData* _pendingImageData;
	NSData* _pendingThumbnailImageData;
	NSData* _pendingFullscreenImageData;
	NSData* _pendingSyncImageData;
	CGRect _pendingCropRect;

}

@property (assign,nonatomic) BOOL hasPendingImageData;                       //@synthesize hasPendingImageData=_hasPendingImageData - In the implementation block
@property (assign,nonatomic) BOOL hasPendingCropRect;                        //@synthesize hasPendingCropRect=_hasPendingCropRect - In the implementation block
@property (assign,nonatomic) BOOL hasPendingThumbnailImageData;              //@synthesize hasPendingThumbnailImageData=_hasPendingThumbnailImageData - In the implementation block
@property (assign,nonatomic) BOOL hasPendingSyncImageData;                   //@synthesize hasPendingSyncImageData=_hasPendingSyncImageData - In the implementation block
@property (nonatomic,copy) NSData * pendingImageData;                        //@synthesize pendingImageData=_pendingImageData - In the implementation block
@property (assign,nonatomic) CGRect pendingCropRect;                         //@synthesize pendingCropRect=_pendingCropRect - In the implementation block
@property (nonatomic,copy) NSData * pendingThumbnailImageData;               //@synthesize pendingThumbnailImageData=_pendingThumbnailImageData - In the implementation block
@property (nonatomic,copy) NSData * pendingFullscreenImageData;              //@synthesize pendingFullscreenImageData=_pendingFullscreenImageData - In the implementation block
@property (nonatomic,copy) NSData * pendingSyncImageData;                    //@synthesize pendingSyncImageData=_pendingSyncImageData - In the implementation block
+(BOOL)shouldSetWatchChanges;
-(BOOL)flushPendingImageChangesToPerson:(void*)arg1 logger:(id)arg2 error:(id*)arg3 ;
-(void)setPendingImageData:(NSData *)arg1 ;
-(void)setPendingCropRect:(CGRect)arg1 ;
-(void)setPendingThumbnailImageData:(NSData *)arg1 ;
-(void)setPendingFullscreenImageData:(NSData *)arg1 ;
-(void)setPendingSyncImageData:(NSData *)arg1 ;
-(CGRect)pendingCropRect;
-(void)resetAllData;
-(NSData *)pendingImageData;
-(void)setHasPendingImageData:(BOOL)arg1 ;
-(void)setHasPendingCropRect:(BOOL)arg1 ;
-(void)setHasPendingThumbnailImageData:(BOOL)arg1 ;
-(void)setHasPendingSyncImageData:(BOOL)arg1 ;
-(BOOL)hasPendingImageData;
-(BOOL)hasPendingCropRect;
-(NSData *)pendingThumbnailImageData;
-(NSData *)pendingFullscreenImageData;
-(NSData *)pendingSyncImageData;
-(BOOL)hasPendingThumbnailImageData;
-(BOOL)setWatchChangesforThumbnailImageDataToPerson:(void*)arg1 error:(id*)arg2 ;
-(BOOL)hasPendingSyncImageData;
@end

