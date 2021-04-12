/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@class UIImage, MCDPCModel, NSString, NSData;

@interface MCDPCItem : NSObject {

	void* _contentItem;
	BOOL _currentlyPlaying;
	UIImage* _artworkImage;
	MCDPCModel* _model;

}

@property (nonatomic,__weak,readonly) MCDPCModel * model;              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) void* contentItem;                        //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlaying;                    //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                   //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSData * artworkData; 
@property (nonatomic,readonly) float playbackProgress; 
@property (nonatomic,readonly) BOOL isPlayable; 
@property (nonatomic,readonly) BOOL isContainer; 
@property (nonatomic,readonly) BOOL isCloudItem; 
@property (nonatomic,readonly) BOOL isExplicitItem; 
-(BOOL)isExplicitItem;
-(BOOL)isPlayable;
-(MCDPCModel *)model;
-(BOOL)isContainer;
-(NSString *)subtitle;
-(BOOL)isCloudItem;
-(void)setContentItem:(void*)arg1 ;
-(float)playbackProgress;
-(id)description;
-(void*)contentItem;
-(NSData *)artworkData;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(NSString *)title;
-(void)dealloc;
-(BOOL)currentlyPlaying;
-(id)_initWithModel:(id)arg1 MRContentItem:(void*)arg2 ;
@end

