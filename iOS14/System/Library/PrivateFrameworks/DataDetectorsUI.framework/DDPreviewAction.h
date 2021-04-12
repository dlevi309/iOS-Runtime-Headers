/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@interface DDPreviewAction : DDAction
+(id)previewActionForURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(id)viewController;
-(BOOL)prefersActionMenuStyle;
-(void)dealloc;
-(void)setPreviewMode:(BOOL)arg1 ;
-(id)createViewController;
-(id)commitURL;
-(BOOL)wantsSeamlessCommit;
-(BOOL)wantsCustomViewControllerCommit;
-(id)expandViewController;
-(BOOL)requiresEmbeddingNavigationController;
-(id)platterTitle;
-(id)platterSubtitle;
-(BOOL)showMenuTitle;
-(id)menuActions;
-(id)menuActionClasses;
-(CGSize)suggestedContentSize;
@end

