/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/_UICloudSharingControllerDelegate_Internal.h>
#import <libobjc.A.dylib/_UIDocumentSharingControllerDelegate_Private.h>

@class NSString, UIViewController, UIImage;

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private> {

	NSString* _activityTitle;
	UIViewController* _activityViewController;
	BOOL _initialSharing;
	UIImage* _activityImage;

}

@property (nonatomic,retain) UIViewController * activityViewController; 
@property (nonatomic,retain) NSString * activityTitle;                               //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) UIImage * activityImage;                                //@synthesize activityImage=_activityImage - In the implementation block
@property (assign,nonatomic) BOOL initialSharing;                                    //@synthesize initialSharing=_initialSharing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
-(id)activityType;
-(void)_cloudShareControllerDidDismiss:(id)arg1 ;
-(void)_documentSharingControllerDidDismiss:(id)arg1 ;
-(id)_systemImageName;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(UIViewController *)activityViewController;
-(UIImage *)activityImage;
-(void)performActivity;
-(BOOL)_activitySupportsPromiseURLs;
-(BOOL)initialSharing;
-(void)setActivityTitle:(NSString *)arg1 ;
-(BOOL)_isURLEligibleForSharing:(id)arg1 isInitial:(BOOL*)arg2 ;
-(void)setInitialSharing:(BOOL)arg1 ;
-(void)_setupForInitialSharing;
-(void)_setupForSharingInfo;
-(BOOL)eligibleTypeForActivity:(id)arg1 ;
-(void)setActivityViewController:(UIViewController *)arg1 ;
-(void)setActivityImage:(UIImage *)arg1 ;
@end

