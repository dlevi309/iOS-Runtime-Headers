/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(void)setPhoto:(id)arg1 ;
-(void)setOutputBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)outputBlock;
-(id)initWithClientContext:(id)arg1 ;
-(id)_requestWithError:(id*)arg1 ;
-(id)_photoUploadWithResponseDictionary:(id)arg1 ;
@end

