/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXActivity.h>
#import <libobjc.A.dylib/PXMomentShareActivity.h>

@class NSString;

@interface PUCopyLinkActivity : PXActivity <PXMomentShareActivity>

@property (assign,nonatomic,__weak) id<PXActivityItemSourceController> itemSourceController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(BOOL)wantsMomentShareLinkForAssetCount:(long long)arg1 ;
-(id)activityType;
-(void)performActivity;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
@end

