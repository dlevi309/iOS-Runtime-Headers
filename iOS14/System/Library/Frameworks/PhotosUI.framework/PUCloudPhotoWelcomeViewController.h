/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXCloudPhotoWelcomeViewController.h>
#import <libobjc.A.dylib/PUWelcomeProtocol.h>

@class NSString;

@interface PUCloudPhotoWelcomeViewController : PXCloudPhotoWelcomeViewController <PUWelcomeProtocol> {

	/*^block*/id __completionHandler;

}

@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;              //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)resetLastPresentationInfo;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithDefaultTitle;
-(id)_completionHandler;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

