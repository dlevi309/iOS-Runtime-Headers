/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(id)_silhouette;
-(void)_returnPhoto:(id)arg1 isFinal:(BOOL)arg2 ;
-(void)_fetchProfile;
-(void)_fetchMonogram;
-(void)_fetchPhoto;
@end

