/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXDisplayAsset, PUSharingHeaderDataProvider;
@class LPImage, LPLinkMetadata;

@interface PUSharingHeaderController : NSObject {

	LPImage* _icloudLinkImage;
	LPImage* _placeholderImage;
	id<PXDisplayAsset> _sharingHeaderFrontAsset;
	id<PXDisplayAsset> _sharingHeaderBackAsset;
	id<PUSharingHeaderDataProvider> _dataProvider;
	LPLinkMetadata* _linkMetadata;

}

@property (nonatomic,retain) LPLinkMetadata * linkMetadata;                                      //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (nonatomic,__weak,readonly) id<PUSharingHeaderDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)new;
-(id)init;
-(id)initWithDataProvider:(id)arg1 ;
-(void)updateIfNeeded;
-(id<PUSharingHeaderDataProvider>)dataProvider;
-(LPLinkMetadata *)linkMetadata;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(id)_sharingHeaderStatus;
-(id)_linkPresentationImageForAsset:(id)arg1 ;
@end

