/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSString, PKPaymentSetupProduct;

@interface PKPickerItem : NSObject {

	NSString* _title;
	PKPaymentSetupProduct* _product;
	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) id selectionHandler;                            //@synthesize selectionHandler=_selectionHandler - In the implementation block
+(id)itemWithTitle:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
+(id)itemWithProduct:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(void)handleSelectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

