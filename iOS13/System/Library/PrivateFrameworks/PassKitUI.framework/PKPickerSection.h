/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSString, NSMutableArray;

@interface PKPickerSection : NSObject {

	NSString* _title;
	NSString* _footer;
	NSMutableArray* _items;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footer;                            //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
+(id)sectionWithTitle:(id)arg1 footer:(id)arg2 ;
+(id)sectionWithTitle:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end

