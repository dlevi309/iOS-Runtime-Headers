/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSString, NSArray;

@interface NPKPaymentProvisioningFlowPickerItem : NSObject {

	NSString* _title;
	NSArray* _products;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * products;                   //@synthesize products=_products - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)itemWithIdentifier:(id)arg1 title:(id)arg2 products:(id)arg3 ;
+(id)itemWithIdentifier:(id)arg1 products:(id)arg2 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)products;
-(void)setProducts:(NSArray *)arg1 ;
@end

