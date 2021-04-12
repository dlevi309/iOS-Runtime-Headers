/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>

@class PSCloudStorageOffersManager, NSString;

@interface AAUICloudStorageOffersManager : NSObject <PSCloudStorageOffersManagerDelegate> {

	PSCloudStorageOffersManager* _cloudStorageOffersManager;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) PSCloudStorageOffersManager * cloudStorageOffersManager;              //@synthesize cloudStorageOffersManager=_cloudStorageOffersManager - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)manager:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)presentCloudStorageOffersPageFromNavigationController:(id)arg1 requiredStorageThreshold:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PSCloudStorageOffersManager *)cloudStorageOffersManager;
-(void)setCloudStorageOffersManager:(PSCloudStorageOffersManager *)arg1 ;
@end

