/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDPreviewAction.h>

@interface DDURLPreviewAction : DDPreviewAction
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)validatedURLWithURL:(id)arg1 result:(DDResultRef)arg2 ;
+(id)previewActionsWithURL:(id)arg1 validatedURL:(id)arg2 result:(DDResultRef)arg3 context:(id)arg4 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(id)createViewController;
-(id)commitURL;
-(BOOL)requiresEmbeddingNavigationController;
-(BOOL)showMenuTitle;
-(id)menuActions;
@end

