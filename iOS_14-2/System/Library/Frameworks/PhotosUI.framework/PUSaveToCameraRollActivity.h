/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <ShareSheet/UISaveToCameraRollActivity.h>
#import <libobjc.A.dylib/PXActivity.h>

@protocol PXActivityItemSourceController;
@class NSString;

@interface PUSaveToCameraRollActivity : UISaveToCameraRollActivity <PXActivity> {

	id<PXActivityItemSourceController> _itemSourceController;

}

@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(BOOL)_itemIsVideoAtURL:(id)arg1 ;
-(id<PXActivityItemSourceController>)itemSourceController;
-(void)setItemSourceController:(id<PXActivityItemSourceController>)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
@end

