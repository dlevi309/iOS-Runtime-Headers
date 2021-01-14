/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSString, PKPaymentSetupProduct;

@interface PKPickerItem : NSObject {

	NSString* _title;
	PKPaymentSetupProduct* _product;
	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) id selectionHandler;                            //@synthesize selectionHandler=_selectionHandler - In the implementation block
+(id)itemWithTitle:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
+(id)itemWithProduct:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(id)selectionHandler;
-(void)handleSelectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSelectionHandler:(id)arg1 ;
-(NSString *)title;
@end

