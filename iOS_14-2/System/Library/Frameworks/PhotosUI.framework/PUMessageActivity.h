/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <ShareSheet/UIMessageActivity.h>
#import <libobjc.A.dylib/PXMomentShareSuggestionHandlingActivity.h>

@protocol PXActivityItemSourceController;
@class NSString;

@interface PUMessageActivity : UIMessageActivity <PXMomentShareSuggestionHandlingActivity> {

	id<PXActivityItemSourceController> _itemSourceController;

}

@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)_prepareWithMomentShareLink:(id)arg1 ;
-(id<PXActivityItemSourceController>)itemSourceController;
-(void)setItemSourceController:(id<PXActivityItemSourceController>)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
@end

