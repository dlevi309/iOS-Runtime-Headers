/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

