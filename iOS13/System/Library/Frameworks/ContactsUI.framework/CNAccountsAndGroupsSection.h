/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSArray, NSString;

@interface CNAccountsAndGroupsSection : NSObject {

	NSArray* _items;
	/*^block*/id _titleProvider;
	NSString* _title;

}

@property (nonatomic,copy) id titleProvider;                //@synthesize titleProvider=_titleProvider - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * items;               //@synthesize items=_items - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)titleProvider;
-(void)setTitleProvider:(id)arg1 ;
@end

