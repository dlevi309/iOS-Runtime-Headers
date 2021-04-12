/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUILogger;
@class AVTImageStore, AVTAvatarConfigurationImageRenderer, AVTCoreModel, NSArray, AVTUIEnvironment;

@interface AVTAvatarRecordImageGenerator : NSObject {

	AVTImageStore* _imageStore;
	AVTAvatarConfigurationImageRenderer* _renderer;
	AVTCoreModel* _coreModel;
	NSArray* _scopes;
	id<AVTUILogger> _logger;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,readonly) AVTImageStore * imageStore;                                  //@synthesize imageStore=_imageStore - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfigurationImageRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) AVTCoreModel * coreModel;                                    //@synthesize coreModel=_coreModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scopes;                                       //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                              //@synthesize environment=_environment - In the implementation block
+(id)supportedScopesForScale:(double)arg1 ;
-(AVTUIEnvironment *)environment;
-(id<AVTUILogger>)logger;
-(AVTAvatarConfigurationImageRenderer *)renderer;
-(NSArray *)scopes;
-(AVTCoreModel *)coreModel;
-(BOOL)generateThumbnailForAvatarRecordItem:(id)arg1 avatarConfiguration:(id)arg2 scope:(id)arg3 error:(id*)arg4 ;
-(AVTImageStore *)imageStore;
-(BOOL)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)generateThumbnailsForAvatarRecords:(id)arg1 error:(id*)arg2 ;
-(id)initWithImageStore:(id)arg1 renderer:(id)arg2 environment:(id)arg3 ;
-(id)initWithImageStore:(id)arg1 coreEnvironment:(id)arg2 ;
-(BOOL)generateThumbnailsForAvatarRecord:(id)arg1 avatar:(id)arg2 error:(id*)arg3 ;
-(BOOL)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id*)arg3 ;
-(void)updateThumbnailsForChangesWithTracker:(id)arg1 recordProvider:(/*^block*/id)arg2 ;
@end

