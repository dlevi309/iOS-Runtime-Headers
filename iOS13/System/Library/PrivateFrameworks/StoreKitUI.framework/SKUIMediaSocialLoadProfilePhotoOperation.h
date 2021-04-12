/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, SKUIMediaSocialProfile;

@interface SKUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	SKUIMediaSocialProfile* _profile;

}

@property (copy) id outputBlock; 
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(id)_silhouette;
-(void)_returnPhoto:(id)arg1 isFinal:(BOOL)arg2 ;
-(void)_fetchProfile;
-(void)_fetchMonogram;
-(void)_fetchPhoto;
@end

