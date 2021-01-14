/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUILogger;
@class AVTImageStore, AVTAvatarConfigurationImageRenderer, NSArray, AVTUIEnvironment, AVTCoreModel;

@interface AVTAvatarRecordImageGenerator : NSObject {

	AVTImageStore* _imageStore;
	AVTAvatarConfigurationImageRenderer* _renderer;
	NSArray* _scopes;
	id<AVTUILogger> _logger;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,readonly) AVTImageStore * imageStore;                                  //@synthesize imageStore=_imageStore - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfigurationImageRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) AVTCoreModel * coreModel; 
@property (nonatomic,copy,readonly) NSArray * scopes;                                       //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                              //@synthesize environment=_environment - In the implementation block
+(id)supportedScopesForScale:(double)arg1 ;
-(NSArray *)scopes;
-(AVTAvatarConfigurationImageRenderer *)renderer;
-(AVTImageStore *)imageStore;
-(BOOL)generateThumbnailForAvatarRecordItem:(id)arg1 avatarConfiguration:(id)arg2 scope:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)generateThumbnailsForAvatarRecords:(id)arg1 error:(id*)arg2 ;
-(id)initWithImageStore:(id)arg1 coreEnvironment:(id)arg2 ;
-(id)initWithImageStore:(id)arg1 renderer:(id)arg2 environment:(id)arg3 ;
-(BOOL)generateThumbnailsForAvatarRecord:(id)arg1 avatar:(id)arg2 error:(id*)arg3 ;
-(BOOL)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id*)arg3 ;
-(void)updateThumbnailsForChangesWithTracker:(id)arg1 recordProvider:(/*^block*/id)arg2 ;
-(id<AVTUILogger>)logger;
-(AVTUIEnvironment *)environment;
-(AVTCoreModel *)coreModel;
@end

