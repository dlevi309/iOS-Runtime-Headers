/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSString, NSMutableArray;

@interface NPKPaymentProvisioningFlowPickerSection : NSObject {

	NSString* _title;
	NSString* _footer;
	NSMutableArray* _items;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footer;                            //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
+(id)sectionWithTitle:(id)arg1 footer:(id)arg2 ;
+(id)sectionWithTitle:(id)arg1 ;
-(NSString *)footer;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFooter:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(id)description;
-(NSString *)title;
@end

