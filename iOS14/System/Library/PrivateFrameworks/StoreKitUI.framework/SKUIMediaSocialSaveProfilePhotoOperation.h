/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, UIImage;

@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	UIImage* _photo;

}
-(void)setPhoto:(id)arg1 ;
-(void)setOutputBlock:(/*^block*/id)arg1 ;
-(void)main;
-(/*^block*/id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(id)_requestWithError:(id*)arg1 ;
-(id)_photoUploadWithResponseDictionary:(id)arg1 ;
@end

