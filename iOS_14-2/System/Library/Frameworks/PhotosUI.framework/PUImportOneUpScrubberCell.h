/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUReviewScrubberCell.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PUImportOneUpScrubberCellDisplayDelegate;
@class PXImportItemViewModel, UIActivityIndicatorView, NSString;

@interface PUImportOneUpScrubberCell : PUReviewScrubberCell <PXChangeObserver> {

	BOOL _selectable;
	BOOL _needsBadgeUpdate;
	id<PUImportOneUpScrubberCellDisplayDelegate> _displayDelegate;
	PXImportItemViewModel* _importItem;
	long long _badgeType;
	UIActivityIndicatorView* _spinner;
	long long _thumbnailRequestID;

}

@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                                              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL needsBadgeUpdate;                                                            //@synthesize needsBadgeUpdate=_needsBadgeUpdate - In the implementation block
@property (assign,nonatomic) long long thumbnailRequestID;                                                     //@synthesize thumbnailRequestID=_thumbnailRequestID - In the implementation block
@property (assign,nonatomic,__weak) id<PUImportOneUpScrubberCellDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (nonatomic,retain) PXImportItemViewModel * importItem;                                               //@synthesize importItem=_importItem - In the implementation block
@property (assign,nonatomic) long long badgeType;                                                              //@synthesize badgeType=_badgeType - In the implementation block
@property (assign,nonatomic) BOOL selectable;                                                                  //@synthesize selectable=_selectable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emptyThumbnailBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setDisplayDelegate:(id<PUImportOneUpScrubberCellDisplayDelegate>)arg1 ;
-(void)prepareForReuse;
-(long long)badgeType;
-(void)layoutSubviews;
-(void)setSelectable:(BOOL)arg1 ;
-(id<PUImportOneUpScrubberCellDisplayDelegate>)displayDelegate;
-(void)setBadgeType:(long long)arg1 ;
-(void)refreshThumbnail;
-(void)updateBadgeUIIfNeeded;
-(BOOL)needsBadgeUpdate;
-(void)setNeedsBadgeUpdate:(BOOL)arg1 ;
-(long long)thumbnailRequestID;
-(void)setThumbnailRequestID:(long long)arg1 ;
-(void)setImportItem:(PXImportItemViewModel *)arg1 ;
-(PXImportItemViewModel *)importItem;
-(void)_createSpinnerIfNecessary;
-(id)initWithCoder:(id)arg1 ;
-(void)updateToThumbnail:(id)arg1 ;
-(void)_commonPUImportOneUpScrubberCellInitialization;
-(BOOL)selectable;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

