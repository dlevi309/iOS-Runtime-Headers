/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _activityItemIsFolder;
	UIImage* _activityImage;

}

@property (nonatomic,retain) UIViewController * activityViewController; 
@property (nonatomic,retain) NSString * activityTitle;                               //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) UIImage * activityImage;                                //@synthesize activityImage=_activityImage - In the implementation block
@property (assign,nonatomic) BOOL initialSharing;                                    //@synthesize initialSharing=_initialSharing - In the implementation block
@property (assign,nonatomic) BOOL activityItemIsFolder;                              //@synthesize activityItemIsFolder=_activityItemIsFolder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
-(void)setActivityImage:(UIImage *)arg1 ;
-(id)activityType;
-(BOOL)_activitySupportsPromiseURLs;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(BOOL)initialSharing;
-(BOOL)activityItemIsFolder;
-(void)_setupForInitialSharing;
-(void)setActivityItemIsFolder:(BOOL)arg1 ;
-(void)_cloudShareControllerDidDismiss:(id)arg1 ;
-(BOOL)eligibleTypeForActivity:(id)arg1 ;
-(void)setActivityTitle:(NSString *)arg1 ;
-(BOOL)_isURLEligibleForSharing:(id)arg1 isInitial:(BOOL*)arg2 isFolder:(BOOL*)arg3 ;
-(void)setActivityViewController:(UIViewController *)arg1 ;
-(id)_systemImageName;
-(void)_documentSharingControllerDidDismiss:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(NSString *)activityTitle;
-(void)_setupForSharingInfo;
-(UIImage *)activityImage;
-(void)setInitialSharing:(BOOL)arg1 ;
-(UIViewController *)activityViewController;
@end

