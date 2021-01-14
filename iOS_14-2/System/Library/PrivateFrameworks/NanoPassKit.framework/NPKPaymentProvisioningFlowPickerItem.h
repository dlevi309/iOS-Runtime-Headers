/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setProducts:(NSArray *)arg1 ;
-(NSString *)title;
-(NSArray *)products;
@end

