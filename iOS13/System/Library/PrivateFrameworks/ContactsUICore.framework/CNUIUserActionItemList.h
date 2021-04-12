/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(NSArray *)items;
-(UIImage *)icon;
-(id)initWithItems:(id)arg1 type:(id)arg2 icon:(id)arg3 ;
@end

