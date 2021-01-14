/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModelChange.h>

@interface PUAssetSharedViewModelChange : PUViewModelChange {

	BOOL _loadingStatusChanged;
	BOOL _saveProgressChanged;
	BOOL _saveStateChanged;
	BOOL _needsDeferredProcessingChanged;
	BOOL _deferredProcessingNeededChanged;
	BOOL _flippingFullSizeRenderStateChanged;

}

@property (assign,nonatomic) BOOL loadingStatusChanged;                            //@synthesize loadingStatusChanged=_loadingStatusChanged - In the implementation block
@property (assign,nonatomic) BOOL saveProgressChanged;                             //@synthesize saveProgressChanged=_saveProgressChanged - In the implementation block
@property (assign,nonatomic) BOOL saveStateChanged;                                //@synthesize saveStateChanged=_saveStateChanged - In the implementation block
@property (assign,nonatomic) BOOL needsDeferredProcessingChanged;                  //@synthesize needsDeferredProcessingChanged=_needsDeferredProcessingChanged - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingNeededChanged;                 //@synthesize deferredProcessingNeededChanged=_deferredProcessingNeededChanged - In the implementation block
@property (assign,nonatomic) BOOL flippingFullSizeRenderStateChanged;              //@synthesize flippingFullSizeRenderStateChanged=_flippingFullSizeRenderStateChanged - In the implementation block
-(BOOL)saveStateChanged;
-(void)setDeferredProcessingNeededChanged:(BOOL)arg1 ;
-(void)setNeedsDeferredProcessingChanged:(BOOL)arg1 ;
-(void)setFlippingFullSizeRenderStateChanged:(BOOL)arg1 ;
-(void)setSaveStateChanged:(BOOL)arg1 ;
-(void)setSaveProgressChanged:(BOOL)arg1 ;
-(void)setLoadingStatusChanged:(BOOL)arg1 ;
-(BOOL)needsDeferredProcessingChanged;
-(BOOL)deferredProcessingNeededChanged;
-(BOOL)flippingFullSizeRenderStateChanged;
-(BOOL)saveProgressChanged;
-(BOOL)hasChanges;
-(BOOL)loadingStatusChanged;
@end

