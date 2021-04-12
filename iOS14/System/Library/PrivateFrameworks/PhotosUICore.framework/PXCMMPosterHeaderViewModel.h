/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class NSString;

@interface PXCMMPosterHeaderViewModel : PXObservable {

	BOOL _showStatusCheckmark;
	BOOL _highlighted;
	NSString* _title;
	NSString* _subtitle;
	NSString* _statusString;
	id<PXDisplayAsset> _asset;
	id<PXUIImageProvider> _mediaProvider;

}

@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * statusString;                       //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,readonly) BOOL showStatusCheckmark;                           //@synthesize showStatusCheckmark=_showStatusCheckmark - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;                //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)setMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(id<PXUIImageProvider>)mediaProvider;
-(id)init;
-(id<PXDisplayAsset>)asset;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isHighlighted;
-(void)setShowStatusCheckmark:(BOOL)arg1 ;
-(BOOL)showStatusCheckmark;
-(NSString *)statusString;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end

