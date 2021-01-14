/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXRelatedEntry;
@class UIViewController;

@interface _PXUIRelatedPreviewOrbContext : NSObject {

	UIViewController* _previewViewController;
	id<PXRelatedEntry> _relatedEntry;

}

@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) id<PXRelatedEntry> relatedEntry;                       //@synthesize relatedEntry=_relatedEntry - In the implementation block
-(id<PXRelatedEntry>)relatedEntry;
-(void)setRelatedEntry:(id<PXRelatedEntry>)arg1 ;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
@end

