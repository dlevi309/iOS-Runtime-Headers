/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class NSString, UIImage, NSArray;

@interface CNUIUserActionItemList : NSObject {

	NSString* _type;
	UIImage* _icon;
	NSArray* _items;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIImage * icon;               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(UIImage *)icon;
-(NSArray *)items;
-(NSString *)type;
-(id)initWithItems:(id)arg1 type:(id)arg2 icon:(id)arg3 ;
@end

