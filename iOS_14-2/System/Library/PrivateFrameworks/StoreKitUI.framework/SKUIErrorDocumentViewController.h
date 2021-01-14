/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIClientContext, NSString;

@interface SKUIErrorDocumentViewController : SKUIViewController <SKUIDocumentViewController> {

	SKUIClientContext* _clientContext;
	unsigned long long _contentUnavailableStyle;
	/*^block*/id _retryActionBlock;

}

@property (nonatomic,copy) id retryActionBlock;                     //@synthesize retryActionBlock=_retryActionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)documentDidUpdate:(id)arg1 ;
-(id)retryActionBlock;
-(id)initWithBackgroundColor:(id)arg1 clientContext:(id)arg2 ;
-(void)setRetryActionBlock:(id)arg1 ;
@end

