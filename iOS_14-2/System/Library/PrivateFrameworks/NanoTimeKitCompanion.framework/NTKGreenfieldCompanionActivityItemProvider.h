/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ShareSheet/UIActivityItemProvider.h>

@protocol NTKGreenfieldCompanionActivityItemProviderDelegate;
@class NTKGreenfieldDraftRecipe, NTKGreenfieldEncodedRecipe, NSURL, UIImage;

@interface NTKGreenfieldCompanionActivityItemProvider : UIActivityItemProvider {

	NTKGreenfieldDraftRecipe* _draftRecipe;
	NTKGreenfieldEncodedRecipe* _encodedRecipe;
	NSURL* _emailImageUrl;
	UIImage* _previewImage;
	id<NTKGreenfieldCompanionActivityItemProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKGreenfieldCompanionActivityItemProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NTKGreenfieldCompanionActivityItemProviderDelegate>)delegate;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)item;
-(void)setDelegate:(id<NTKGreenfieldCompanionActivityItemProviderDelegate>)arg1 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)writeImageToDisk:(id)arg1 suffix:(id)arg2 ;
-(id)initWithDraftRecipe:(id)arg1 previewImage:(id)arg2 ;
@end

